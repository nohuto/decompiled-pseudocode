/*
 * XREFs of ?DestroySMWPIfSupported@@YAXPEAUtagSMWP@@@Z @ 0x1C00BC710
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

void __fastcall DestroySMWPIfSupported(struct tagSMWP *a1)
{
  if ( qword_1C02D6CF0 && (int)qword_1C02D6CF0() >= 0 )
  {
    if ( qword_1C02D6CF8 )
      qword_1C02D6CF8(a1);
  }
}
