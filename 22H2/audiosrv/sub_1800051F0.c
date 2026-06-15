/*
 * XREFs of sub_1800051F0 @ 0x1800051F0
 * Callers:
 *     sub_180074750 @ 0x180074750 (sub_180074750.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800051F0(__int64 a1, _QWORD *a2)
{
  void (__fastcall ***v2)(_QWORD, __int64 *, _QWORD *); // rcx

  *a2 = 0LL;
  v2 = *(void (__fastcall ****)(_QWORD, __int64 *, _QWORD *))(a1 + 64);
  if ( v2 )
    (**v2)(v2, &qword_18015AB58, a2);
  return 0LL;
}
