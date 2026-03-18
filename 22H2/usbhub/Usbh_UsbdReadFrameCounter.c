/*
 * XREFs of Usbh_UsbdReadFrameCounter @ 0x1C0001BF8
 * Callers:
 *     UsbhResetPort @ 0x1C00018E8 (UsbhResetPort.c)
 *     UsbhReset2Complete @ 0x1C0010540 (UsbhReset2Complete.c)
 *     UsbhReset1Complete @ 0x1C0018F50 (UsbhReset1Complete.c)
 *     Usbh_PcLogEntry @ 0x1C0036E04 (Usbh_PcLogEntry.c)
 *     UsbhResetPortTimerDpc @ 0x1C0039D70 (UsbhResetPortTimerDpc.c)
 *     UsbhReset1Timeout @ 0x1C004EC10 (UsbhReset1Timeout.c)
 *     UsbhReset2Timeout @ 0x1C004F200 (UsbhReset2Timeout.c)
 * Callees:
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C001DE80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Usbh_UsbdReadFrameCounter(__int64 a1)
{
  __int64 v1; // rax
  unsigned int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0;
  v1 = FdoExt(a1);
  if ( !*(_QWORD *)(v1 + 4592) )
    return 0LL;
  (*(void (__fastcall **)(_QWORD, unsigned int *))(v1 + 4592))(*(_QWORD *)(v1 + 4560), &v3);
  return v3;
}
