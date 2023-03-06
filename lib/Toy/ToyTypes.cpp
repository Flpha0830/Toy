//===- ToyTypes.cpp - Toy dialect types -------------------------*- C++ -*-===//
//
// This file is licensed under the Apache License v2.0 with LLVM Exceptions.
// See https://llvm.org/LICENSE.txt for license information.
// SPDX-License-Identifier: Apache-2.0 WITH LLVM-exception
//
//===----------------------------------------------------------------------===//

#include "Toy/ToyTypes.h"

#include "Toy/ToyDialect.h"
#include "mlir/IR/Builders.h"
#include "mlir/IR/DialectImplementation.h"
#include "llvm/ADT/TypeSwitch.h"

using namespace mlir::toy;

#define GET_TYPEDEF_CLASSES
#include "Toy/ToyOpsTypes.cpp.inc"

void ToyDialect::registerTypes() {
  addTypes<
#define GET_TYPEDEF_LIST
#include "Toy/ToyOpsTypes.cpp.inc"
      >();
}
