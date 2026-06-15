/*
 * XREFs of sub_180057A40 @ 0x180057A40
 * Callers:
 *     sub_1800579F8 @ 0x1800579F8 (sub_1800579F8.c)
 *     sub_18013D38C @ 0x18013D38C (sub_18013D38C.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180057A40(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // rcx

  if ( !a2 )
    return 2147500035LL;
  *a2 = *a1;
  v2 = *a1;
  if ( v2 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
  return 0LL;
}
