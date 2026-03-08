/*
 * XREFs of ?FreeHidDataIfSupported@@YAXPEAUtagHIDDATA@@@Z @ 0x1C0153590
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FreeHidDataIfSupported(struct tagHIDDATA *a1)
{
  if ( qword_1C02D6D60 && (int)qword_1C02D6D60() >= 0 )
  {
    if ( qword_1C02D6D68 )
      qword_1C02D6D68(a1);
  }
}
