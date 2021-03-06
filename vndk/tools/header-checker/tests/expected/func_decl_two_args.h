builtin_types {
  type_info {
    name: "void"
    size: 0
    alignment: 0
    referenced_type: "void"
    source_file: ""
    linker_set_key: "void"
  }
  is_unsigned: false
  is_integral: false
}
builtin_types {
  type_info {
    name: "int"
    size: 4
    alignment: 4
    referenced_type: "int"
    source_file: ""
    linker_set_key: "int"
  }
  is_unsigned: false
  is_integral: true
}
builtin_types {
  type_info {
    name: "char"
    size: 1
    alignment: 1
    referenced_type: "char"
    source_file: ""
    linker_set_key: "char"
  }
  is_unsigned: false
  is_integral: true
}
builtin_types {
  type_info {
    name: "short"
    size: 2
    alignment: 2
    referenced_type: "short"
    source_file: ""
    linker_set_key: "short"
  }
  is_unsigned: false
  is_integral: true
}
builtin_types {
  type_info {
    name: "long"
    size: 8
    alignment: 8
    referenced_type: "long"
    source_file: ""
    linker_set_key: "long"
  }
  is_unsigned: false
  is_integral: true
}
builtin_types {
  type_info {
    name: "long long"
    size: 8
    alignment: 8
    referenced_type: "long long"
    source_file: ""
    linker_set_key: "long long"
  }
  is_unsigned: false
  is_integral: true
}
builtin_types {
  type_info {
    name: "unsigned char"
    size: 1
    alignment: 1
    referenced_type: "unsigned char"
    source_file: ""
    linker_set_key: "unsigned char"
  }
  is_unsigned: true
  is_integral: true
}
builtin_types {
  type_info {
    name: "unsigned short"
    size: 2
    alignment: 2
    referenced_type: "unsigned short"
    source_file: ""
    linker_set_key: "unsigned short"
  }
  is_unsigned: true
  is_integral: true
}
builtin_types {
  type_info {
    name: "unsigned int"
    size: 4
    alignment: 4
    referenced_type: "unsigned int"
    source_file: ""
    linker_set_key: "unsigned int"
  }
  is_unsigned: true
  is_integral: true
}
builtin_types {
  type_info {
    name: "unsigned long"
    size: 8
    alignment: 8
    referenced_type: "unsigned long"
    source_file: ""
    linker_set_key: "unsigned long"
  }
  is_unsigned: true
  is_integral: true
}
builtin_types {
  type_info {
    name: "unsigned long long"
    size: 8
    alignment: 8
    referenced_type: "unsigned long long"
    source_file: ""
    linker_set_key: "unsigned long long"
  }
  is_unsigned: true
  is_integral: true
}
builtin_types {
  type_info {
    name: "float"
    size: 4
    alignment: 4
    referenced_type: "float"
    source_file: ""
    linker_set_key: "float"
  }
  is_unsigned: false
  is_integral: false
}
builtin_types {
  type_info {
    name: "double"
    size: 8
    alignment: 8
    referenced_type: "double"
    source_file: ""
    linker_set_key: "double"
  }
  is_unsigned: false
  is_integral: false
}
builtin_types {
  type_info {
    name: "long double"
    size: 16
    alignment: 16
    referenced_type: "long double"
    source_file: ""
    linker_set_key: "long double"
  }
  is_unsigned: false
  is_integral: false
}
functions {
  return_type: "void"
  function_name: "test_char"
  source_file: "/development/vndk/tools/header-checker/tests/input/func_decl_two_args.h"
  parameters {
    referenced_type: "int"
    default_arg: false
  }
  parameters {
    referenced_type: "char"
    default_arg: false
  }
  linker_set_key: "test_char"
  access: public_access
}
functions {
  return_type: "void"
  function_name: "test_short"
  source_file: "/development/vndk/tools/header-checker/tests/input/func_decl_two_args.h"
  parameters {
    referenced_type: "int"
    default_arg: false
  }
  parameters {
    referenced_type: "short"
    default_arg: false
  }
  linker_set_key: "test_short"
  access: public_access
}
functions {
  return_type: "void"
  function_name: "test_int"
  source_file: "/development/vndk/tools/header-checker/tests/input/func_decl_two_args.h"
  parameters {
    referenced_type: "int"
    default_arg: false
  }
  parameters {
    referenced_type: "int"
    default_arg: false
  }
  linker_set_key: "test_int"
  access: public_access
}
functions {
  return_type: "void"
  function_name: "test_long"
  source_file: "/development/vndk/tools/header-checker/tests/input/func_decl_two_args.h"
  parameters {
    referenced_type: "int"
    default_arg: false
  }
  parameters {
    referenced_type: "long"
    default_arg: false
  }
  linker_set_key: "test_long"
  access: public_access
}
functions {
  return_type: "void"
  function_name: "test_long_long"
  source_file: "/development/vndk/tools/header-checker/tests/input/func_decl_two_args.h"
  parameters {
    referenced_type: "int"
    default_arg: false
  }
  parameters {
    referenced_type: "long long"
    default_arg: false
  }
  linker_set_key: "test_long_long"
  access: public_access
}
functions {
  return_type: "void"
  function_name: "test_unsigned_char"
  source_file: "/development/vndk/tools/header-checker/tests/input/func_decl_two_args.h"
  parameters {
    referenced_type: "int"
    default_arg: false
  }
  parameters {
    referenced_type: "unsigned char"
    default_arg: false
  }
  linker_set_key: "test_unsigned_char"
  access: public_access
}
functions {
  return_type: "void"
  function_name: "test_unsigned_short"
  source_file: "/development/vndk/tools/header-checker/tests/input/func_decl_two_args.h"
  parameters {
    referenced_type: "int"
    default_arg: false
  }
  parameters {
    referenced_type: "unsigned short"
    default_arg: false
  }
  linker_set_key: "test_unsigned_short"
  access: public_access
}
functions {
  return_type: "void"
  function_name: "test_unsigned_int"
  source_file: "/development/vndk/tools/header-checker/tests/input/func_decl_two_args.h"
  parameters {
    referenced_type: "int"
    default_arg: false
  }
  parameters {
    referenced_type: "unsigned int"
    default_arg: false
  }
  linker_set_key: "test_unsigned_int"
  access: public_access
}
functions {
  return_type: "void"
  function_name: "test_unsigned_long"
  source_file: "/development/vndk/tools/header-checker/tests/input/func_decl_two_args.h"
  parameters {
    referenced_type: "int"
    default_arg: false
  }
  parameters {
    referenced_type: "unsigned long"
    default_arg: false
  }
  linker_set_key: "test_unsigned_long"
  access: public_access
}
functions {
  return_type: "void"
  function_name: "test_unsigned_long_long"
  source_file: "/development/vndk/tools/header-checker/tests/input/func_decl_two_args.h"
  parameters {
    referenced_type: "int"
    default_arg: false
  }
  parameters {
    referenced_type: "unsigned long long"
    default_arg: false
  }
  linker_set_key: "test_unsigned_long_long"
  access: public_access
}
functions {
  return_type: "void"
  function_name: "test_unsigned_float"
  source_file: "/development/vndk/tools/header-checker/tests/input/func_decl_two_args.h"
  parameters {
    referenced_type: "int"
    default_arg: false
  }
  parameters {
    referenced_type: "float"
    default_arg: false
  }
  linker_set_key: "test_unsigned_float"
  access: public_access
}
functions {
  return_type: "void"
  function_name: "test_unsigned_double"
  source_file: "/development/vndk/tools/header-checker/tests/input/func_decl_two_args.h"
  parameters {
    referenced_type: "int"
    default_arg: false
  }
  parameters {
    referenced_type: "double"
    default_arg: false
  }
  linker_set_key: "test_unsigned_double"
  access: public_access
}
functions {
  return_type: "void"
  function_name: "test_unsigned_long_double"
  source_file: "/development/vndk/tools/header-checker/tests/input/func_decl_two_args.h"
  parameters {
    referenced_type: "int"
    default_arg: false
  }
  parameters {
    referenced_type: "long double"
    default_arg: false
  }
  linker_set_key: "test_unsigned_long_double"
  access: public_access
}
