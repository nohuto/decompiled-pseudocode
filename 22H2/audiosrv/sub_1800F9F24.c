/*
 * XREFs of sub_1800F9F24 @ 0x1800F9F24
 * Callers:
 *     pfnwa @ 0x1800FFD10 (pfnwa.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800F9F24(__int64 a1, int a2)
{
  __int64 v2; // rcx
  int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  v2 = *(_QWORD *)(a1 + 112);
  if ( !v2 )
    __fastfail(7u);
  return (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v2 + 32LL))(v2, &v4);
}
