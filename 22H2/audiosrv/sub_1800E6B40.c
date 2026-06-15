/*
 * XREFs of sub_1800E6B40 @ 0x1800E6B40
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_1800E6B40(__int64 a1, _QWORD *a2)
{
  __int64 v3; // rcx

  *a2 = off_18014A4D8;
  v3 = *(_QWORD *)(a1 + 8);
  a2[1] = v3;
  if ( v3 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 8LL))(v3);
  return a2;
}
