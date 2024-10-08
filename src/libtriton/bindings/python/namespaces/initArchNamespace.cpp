//! \file
/*
**  Copyright (C) - Triton
**
**  This program is under the terms of the Apache License 2.0.
*/

#include <triton/pythonBindings.hpp>
#include <triton/pythonUtils.hpp>
#include <triton/pythonXFunctions.hpp>
#include <triton/architecture.hpp>



/*! \page py_ARCH_page ARCH
    \brief [**python api**] All information about the ARCH Python namespace.

\tableofcontents

\section ARCH_py_description Description
<hr>

The ARCH namespace contains all kinds of architecture supported by Triton.

\section ARCH_py_api Python API - Items of the ARCH namespace
<hr>

- **ARCH.AARCH64**
- **ARCH.ARM32**
- **ARCH.RV32**
- **ARCH.RV64**
- **ARCH.X86**
- **ARCH.X86_64**

*/



namespace triton {
  namespace bindings {
    namespace python {

      void initArchNamespace(PyObject* archDict) {
        xPyDict_SetItemString(archDict, "AARCH64", PyLong_FromUint32(triton::arch::ARCH_AARCH64));
        xPyDict_SetItemString(archDict, "ARM32",   PyLong_FromUint32(triton::arch::ARCH_ARM32));
        xPyDict_SetItemString(archDict, "RV32",    PyLong_FromUint32(triton::arch::ARCH_RV32));
        xPyDict_SetItemString(archDict, "RV64",    PyLong_FromUint32(triton::arch::ARCH_RV64));
        xPyDict_SetItemString(archDict, "X86",     PyLong_FromUint32(triton::arch::ARCH_X86));
        xPyDict_SetItemString(archDict, "X86_64",  PyLong_FromUint32(triton::arch::ARCH_X86_64));
      }

    }; /* python namespace */
  }; /* bindings namespace */
}; /* triton namespace */
