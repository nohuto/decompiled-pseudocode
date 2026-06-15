/*
 * XREFs of sub_1800B7B04 @ 0x1800B7B04
 * Callers:
 *     sub_1800B8140 @ 0x1800B8140 (sub_1800B8140.c)
 *     sub_1800B84DC @ 0x1800B84DC (sub_1800B84DC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800B7B04(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx

  *a1 = &off_180149FA8;
  v4 = a1[1];
  if ( v4 )
  {
    if ( *(_BYTE *)(v4 + 8) )
      (**(void (__fastcall ***)(__int64, __int64))v4)(v4, 1LL);
    a1[1] = 0LL;
  }
  return sub_1800B7A84(a1, a2, a3);
}
