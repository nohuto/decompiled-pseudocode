/*
 * XREFs of UsbhSshBusBusy @ 0x1C0030D38
 * Callers:
 *     UsbhDispatch_BusEvent @ 0x1C000FC10 (UsbhDispatch_BusEvent.c)
 *     Usbh_BS_BusRun @ 0x1C00102A0 (Usbh_BS_BusRun.c)
 *     UsbhHubSSH_PnpStart @ 0x1C0058560 (UsbhHubSSH_PnpStart.c)
 *     UsbhHubSSH_PnpStop @ 0x1C0058680 (UsbhHubSSH_PnpStop.c)
 * Callees:
 *     FdoExt @ 0x1C0008370 (FdoExt.c)
 *     Log @ 0x1C0009F20 (Log.c)
 *     UsbhDecHubBusy @ 0x1C0010740 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x1C0011BC0 (UsbhIncHubBusy.c)
 */

void __fastcall UsbhSshBusBusy(__int64 a1, __int64 a2)
{
  volatile signed __int64 *v4; // rdi
  signed __int64 v5; // rax
  __int64 v6; // r9
  __int64 v7; // r10
  int v8; // r11d
  __int64 v9; // rdx
  _QWORD *v10; // r10

  v4 = (volatile signed __int64 *)FdoExt(a1);
  v5 = UsbhIncHubBusy(a1, a2, a1, 1430418291, 1);
  Log(a1, 2048, 1114863915, _InterlockedCompareExchange64(v4 + 411, v5, 0LL), v5);
  if ( v6 )
  {
    Log(a1, v8, 1114845741, v6, v7);
    UsbhDecHubBusy(a1, v9, v10);
  }
}
