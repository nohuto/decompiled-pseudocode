/*
 * XREFs of sub_18002B930 @ 0x18002B930
 * Callers:
 *     sub_1800027F4 @ 0x1800027F4 (sub_1800027F4.c)
 *     sub_180014230 @ 0x180014230 (sub_180014230.c)
 *     sub_180016E30 @ 0x180016E30 (sub_180016E30.c)
 *     sub_180017690 @ 0x180017690 (sub_180017690.c)
 *     sub_18002AF64 @ 0x18002AF64 (sub_18002AF64.c)
 *     sub_18002AFE0 @ 0x18002AFE0 (sub_18002AFE0.c)
 *     sub_18002B390 @ 0x18002B390 (sub_18002B390.c)
 *     sub_18002B894 @ 0x18002B894 (sub_18002B894.c)
 *     sub_1800B7B50 @ 0x1800B7B50 (sub_1800B7B50.c)
 *     sub_1800B9818 @ 0x1800B9818 (sub_1800B9818.c)
 *     sub_1800D0B5C @ 0x1800D0B5C (sub_1800D0B5C.c)
 *     sub_1800D83F0 @ 0x1800D83F0 (sub_1800D83F0.c)
 *     sub_1800EA9AC @ 0x1800EA9AC (sub_1800EA9AC.c)
 *     sub_1800EABCC @ 0x1800EABCC (sub_1800EABCC.c)
 * Callees:
 *     sub_18006D208 @ 0x18006D208 (sub_18006D208.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_18002B930(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // r10
  unsigned int v3; // ebx

  result = sub_18006D208(a1 + 12);
  v3 = result;
  if ( !(_DWORD)result )
  {
    if ( v2 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 104LL))(v2, (unsigned int)(result + 1));
    if ( qword_18019E418 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019E418 + 16LL))(qword_18019E418);
    return v3;
  }
  return result;
}
