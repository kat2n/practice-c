cmake_minimum_required(VERSION 3.13)
project(Project1 C)

set(CMAKE_C_STANDARD 99)

add_executable(Project1 main.c vc_memmove.h vc_memmove.c vc_memchr.h vc_memchr.c vc_memcmp.h vc_memcmp.c vc_isalnum.h vc_isalnum.c vc_memdel.h vc_memdel.c vc_strmap.h vc_strmap.c vc_strsplit.h vc_strsplit.c vc_strchr.h vc_strchr.c test_vc_isalnum.c test_vc_memchr.c test_vc_memcmp.c test_vc_memdel.c test_vc_memmove.c test_vc_strchr.c test_vc_strmap.c test_vc_strsplit.c libvc.h)