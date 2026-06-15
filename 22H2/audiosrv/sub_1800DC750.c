/*
 * XREFs of sub_1800DC750 @ 0x1800DC750
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 *     sub_1800F6478 @ 0x1800F6478 (sub_1800F6478.c)
 */

char __fastcall sub_1800DC750(__int64 a1, __int64 a2)
{
  _BYTE *v4; // rcx
  __int64 v5; // rcx
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

  v4 = *(_BYTE **)(a1 + 8);
  if ( !*v4 && !**(_BYTE **)(a1 + 16) )
  {
    v7 = 0LL;
    *v4 = 1;
    (*(void (__fastcall **)(PVOID, _QWORD, _QWORD, _QWORD, __int64 *))(*(_QWORD *)pv + 24LL))(
      pv,
      *(_QWORD *)(*(_QWORD *)(a1 + 24) + 216LL),
      0LL,
      0LL,
      &v7);
    sub_1800F6478(v5, *(unsigned int *)(a2 + 4), v7);
    *(_BYTE *)(*(_QWORD *)(a1 + 32) + 16LL) = 0;
    sub_18000F708(&v7);
  }
  return 0;
}
