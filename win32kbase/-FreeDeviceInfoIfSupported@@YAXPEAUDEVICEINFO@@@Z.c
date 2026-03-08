/*
 * XREFs of ?FreeDeviceInfoIfSupported@@YAXPEAUDEVICEINFO@@@Z @ 0x1C0153540
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00E1910 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FreeDeviceInfoIfSupported(struct DEVICEINFO *a1)
{
  if ( qword_1C02D61F0 && (int)qword_1C02D61F0() >= 0 )
  {
    if ( qword_1C02D61F8 )
      qword_1C02D61F8(a1);
  }
}
