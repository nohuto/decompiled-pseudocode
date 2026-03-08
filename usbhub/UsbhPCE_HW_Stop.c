/*
 * XREFs of UsbhPCE_HW_Stop @ 0x1C003476C
 * Callers:
 *     UsbhHubProcessIsr @ 0x1C000B860 (UsbhHubProcessIsr.c)
 *     UsbhBusPnpStop_Action @ 0x1C00314EC (UsbhBusPnpStop_Action.c)
 * Callees:
 *     UsbhReleaseEnumBusLockEx @ 0x1C0003BCC (UsbhReleaseEnumBusLockEx.c)
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0014330 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     UsbhGetPortData @ 0x1C0019550 (UsbhGetPortData.c)
 *     WPP_RECORDER_SF_dq @ 0x1C002E98C (WPP_RECORDER_SF_dq.c)
 */

void __fastcall UsbhPCE_HW_Stop(__int64 a1, unsigned __int16 a2, __int64 a3)
{
  __int64 v4; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 PortData; // rax
  int v9; // [rsp+28h] [rbp-20h]

  v4 = a2;
  FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v9 = v4;
    WPP_RECORDER_SF_dq(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v6,
      v7,
      0x44u,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v9,
      a3);
  }
  Log(a1, 512, 1346711863, 0LL, v4);
  PortData = UsbhGetPortData(a1, v4);
  if ( PortData )
    UsbhDispatch_PortChangeQueueEventEx(a1, PortData, 17, a3, 0LL, 0, 0LL, 0LL);
  UsbhReleaseEnumBusLockEx(a1, a3, v4);
}
