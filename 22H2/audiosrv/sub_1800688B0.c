/*
 * XREFs of sub_1800688B0 @ 0x1800688B0
 * Callers:
 *     sub_180055514 @ 0x180055514 (sub_180055514.c)
 *     sub_180074BA0 @ 0x180074BA0 (sub_180074BA0.c)
 * Callees:
 *     sub_18006D208 @ 0x18006D208 (sub_18006D208.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800688B0(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v2; // r10

  v1 = sub_18006D208(a1 + 20);
  if ( !v1 )
  {
    if ( v2 )
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v2 + 56LL))(v2, v1 + 1);
    if ( qword_18019E418 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)qword_18019E418 + 16LL))(qword_18019E418);
  }
  return v1;
}
