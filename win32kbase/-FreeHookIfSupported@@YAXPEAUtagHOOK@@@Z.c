/*
 * XREFs of ?FreeHookIfSupported@@YAXPEAUtagHOOK@@@Z @ 0x1C00C25A0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FreeHookIfSupported(struct tagHOOK *a1)
{
  if ( qword_1C02D6D00 && (int)qword_1C02D6D00() >= 0 )
  {
    if ( qword_1C02D6D08 )
      qword_1C02D6D08(a1);
  }
}
