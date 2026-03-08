/*
 * XREFs of Usbh__TestPoint__Ulong @ 0x1C0030310
 * Callers:
 *     UsbhAutoOvercurrentResetWorker @ 0x1C002FB00 (UsbhAutoOvercurrentResetWorker.c)
 *     UsbhDriverOvercurrentResetWorker @ 0x1C002FC70 (UsbhDriverOvercurrentResetWorker.c)
 *     UsbhFdoResetPdoPort @ 0x1C0030944 (UsbhFdoResetPdoPort.c)
 *     UsbhSetupDevice @ 0x1C0039728 (UsbhSetupDevice.c)
 *     UsbHubhInitTimeoutTimer @ 0x1C0041D10 (UsbHubhInitTimeoutTimer.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C0056570 (UsbhPdoPnp_StartDevice.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     _guard_dispatch_icall_nop @ 0x1C0023500 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Usbh__TestPoint__Ulong(__int64 a1, unsigned int a2, unsigned int a3, int a4)
{
  _DWORD *v6; // rax
  __int64 result; // rax
  int v8; // [rsp+58h] [rbp+20h] BYREF

  v8 = a4;
  if ( !LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) )
    return a3;
  v6 = FdoExt(a1);
  if ( !*((_QWORD *)v6 + 554) )
    return a3;
  result = (*((__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, int *))v6 + 554))(*((_QWORD *)v6 + 529), 0LL, a2, &v8);
  if ( !(_DWORD)result )
    return a3;
  return result;
}
