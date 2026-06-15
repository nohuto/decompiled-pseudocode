/*
 * XREFs of sub_180100084 @ 0x180100084
 * Callers:
 *     sub_180100ADC @ 0x180100ADC (sub_180100ADC.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

_QWORD *__fastcall sub_180100084(_QWORD *a1, void (__fastcall ***a2)(_QWORD, void *, _QWORD *))
{
  *a1 = 0LL;
  if ( a2 )
    (**a2)(a2, &unk_180172670, a1);
  return a1;
}
