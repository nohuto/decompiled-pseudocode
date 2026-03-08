/*
 * XREFs of UsbhPCE_Close @ 0x1C0034474
 * Callers:
 *     UsbhBusPnpStop_Action @ 0x1C00314EC (UsbhBusPnpStop_Action.c)
 *     Usbh_PCE_Close_Action @ 0x1C00357E8 (Usbh_PCE_Close_Action.c)
 * Callees:
 *     UsbhReleaseEnumBusLockEx @ 0x1C0003BCC (UsbhReleaseEnumBusLockEx.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0014330 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     WPP_RECORDER_SF_dq @ 0x1C002E98C (WPP_RECORDER_SF_dq.c)
 */

void __fastcall UsbhPCE_Close(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  int v8; // [rsp+28h] [rbp-20h]

  FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v8 = *(unsigned __int16 *)(a2 + 4);
    WPP_RECORDER_SF_dq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v6,
      v7,
      0x43u,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v8,
      a3);
  }
  Log(a1, 512, 1346712114, 0LL, *(unsigned __int16 *)(a2 + 4));
  UsbhDispatch_PortChangeQueueEventEx(a1, a2, 22, a3, 0LL, 0, 0LL, 0LL);
  UsbhReleaseEnumBusLockEx(a1, a2 + 24, *(_WORD *)(a2 + 4));
}
