/*
 * XREFs of sub_180052D54 @ 0x180052D54
 * Callers:
 *     sub_180052E04 @ 0x180052E04 (sub_180052E04.c)
 * Callees:
 *     unknown_libname_207 @ 0x180037F88 (unknown_libname_207.c)
 *     sub_180052600 @ 0x180052600 (sub_180052600.c)
 *     sub_180052B8C @ 0x180052B8C (sub_180052B8C.c)
 *     sub_180052DC4 @ 0x180052DC4 (sub_180052DC4.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_180052D54(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v5; // rax
  __int64 v6; // rdx
  unsigned int v7; // ebx
  __int64 v9; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v10; // [rsp+28h] [rbp-10h]

  *(_QWORD *)(a1 + 24) = a3;
  v5 = sub_180052B8C(&v9, a2);
  sub_180052DC4(a1 + 8, v5);
  if ( v10 )
    sub_180052600(v10);
  v7 = *(_QWORD *)(a1 + 8) == 0LL ? 0x8007000E : 0;
  unknown_libname_207(a2, v6);
  return v7;
}
