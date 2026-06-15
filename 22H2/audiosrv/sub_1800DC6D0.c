/*
 * XREFs of sub_1800DC6D0 @ 0x1800DC6D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800F6338 @ 0x1800F6338 (sub_1800F6338.c)
 */

char __fastcall sub_1800DC6D0(__int64 a1, __int64 a2)
{
  _BYTE *v2; // rax
  __int64 v4; // rcx
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v2 = *(_BYTE **)(a1 + 8);
  if ( !*v2 )
  {
    v6 = 0LL;
    *v2 = 1;
    (*(void (__fastcall **)(PVOID, _QWORD, _QWORD, _QWORD, __int64 *))(*(_QWORD *)pv + 24LL))(
      pv,
      *(_QWORD *)(*(_QWORD *)(a1 + 16) + 216LL),
      0LL,
      0LL,
      &v6);
    sub_1800F6338(v4, *(unsigned int *)(a2 + 4), v6);
    sub_18000F708(&v6);
  }
  return 0;
}
