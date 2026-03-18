/*
 * XREFs of Usbh_UsbdReadFrameCounter @ 0x1C001AE7C
 * Callers:
 *     UsbhReset2Complete @ 0x1C000A9D0 (UsbhReset2Complete.c)
 *     UsbhResetPort @ 0x1C001AB54 (UsbhResetPort.c)
 *     UsbhReset1Complete @ 0x1C001BA90 (UsbhReset1Complete.c)
 *     Usbh_PcLogEntry @ 0x1C0035B48 (Usbh_PcLogEntry.c)
 *     UsbhResetPortTimerDpc @ 0x1C0038A80 (UsbhResetPortTimerDpc.c)
 *     UsbhReset1Timeout @ 0x1C004D800 (UsbhReset1Timeout.c)
 *     UsbhReset2Timeout @ 0x1C004DDF0 (UsbhReset2Timeout.c)
 * Callees:
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C001F4F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Usbh_UsbdReadFrameCounter(__int64 a1)
{
  _DWORD *v1; // rax
  unsigned int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  v1 = FdoExt(a1);
  if ( !*((_QWORD *)v1 + 574) )
    return 0LL;
  (*((void (__fastcall **)(_QWORD, unsigned int *))v1 + 574))(*((_QWORD *)v1 + 570), &v3);
  return v3;
}
