// Copyright 2017-2020 The Verible Authors.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Nothing in here. Just a place-holder so that bazel knows that this header
// is C++ and clang-tidy picks up that knowledge.
// If we don't have a *.cc file, bazel will assume this is a C file and put
// that in the compilation DB. TL;DR: hacky workaround. Don't remove.

#include "verilog/CST/verilog_matchers.h"
