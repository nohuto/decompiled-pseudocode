/*
 * XREFs of sub_18001792C @ 0x18001792C
 * Callers:
 *     sub_18001AF08 @ 0x18001AF08 (sub_18001AF08.c)
 *     sub_180024B60 @ 0x180024B60 (sub_180024B60.c)
 *     sub_1800293C0 @ 0x1800293C0 (sub_1800293C0.c)
 *     sub_180029660 @ 0x180029660 (sub_180029660.c)
 *     sub_18002ADC0 @ 0x18002ADC0 (sub_18002ADC0.c)
 *     _expandlocale @ 0x18003BFEC (_expandlocale.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

__int64 *__fastcall sub_18001792C(__int64 *a1)
{
  __int64 v2; // rcx

  v2 = *a1;
  if ( v2 )
  {
    *a1 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 16LL))(v2);
  }
  return a1;
}
