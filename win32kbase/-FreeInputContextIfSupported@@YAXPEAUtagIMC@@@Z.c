/*
 * XREFs of ?FreeInputContextIfSupported@@YAXPEAUtagIMC@@@Z @ 0x1C00AD830
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FreeInputContextIfSupported(struct tagIMC *a1)
{
  if ( qword_1C02D6D50 && (int)qword_1C02D6D50() >= 0 )
  {
    if ( qword_1C02D6D58 )
      qword_1C02D6D58(a1);
  }
}
