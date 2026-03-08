/*
 * XREFs of UsbhQueueSoftConnectChange @ 0x1C0034FA8
 * Callers:
 *     UsbhFdoSetD0Cold @ 0x1C000FBD0 (UsbhFdoSetD0Cold.c)
 *     UsbhFdoColdStartPdo @ 0x1C00222BC (UsbhFdoColdStartPdo.c)
 *     UsbhOvercurrentResetWorker @ 0x1C002FD00 (UsbhOvercurrentResetWorker.c)
 *     UsbhCycleDevicePort @ 0x1C003725C (UsbhCycleDevicePort.c)
 *     UsbhFinishStart @ 0x1C00378F4 (UsbhFinishStart.c)
 *     UsbhPortResumeTimeout @ 0x1C0038ED0 (UsbhPortResumeTimeout.c)
 *     UsbhFdoSetD0Warm @ 0x1C003C220 (UsbhFdoSetD0Warm.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1C003CB44 (UsbhPdoWaitForD3Reconnect.c)
 *     UsbhPortCycle @ 0x1C004D4D0 (UsbhPortCycle.c)
 *     UsbhPortRecycle @ 0x1C004D870 (UsbhPortRecycle.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0014330 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     UsbhQueryPortState @ 0x1C0016540 (UsbhQueryPortState.c)
 *     UsbhGetPortData @ 0x1C0019550 (UsbhGetPortData.c)
 *     UsbhWait @ 0x1C002E204 (UsbhWait.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 *     UsbhDisablePort @ 0x1C00377CC (UsbhDisablePort.c)
 *     UsbhException @ 0x1C004A988 (UsbhException.c)
 */

__int64 __fastcall UsbhQueueSoftConnectChange(__int64 a1, unsigned __int16 a2, __int64 a3, char a4)
{
  int v4; // esi
  __int64 result; // rax
  __int64 v9; // rdi
  unsigned __int16 v10; // dx
  int v11; // ecx
  __int64 v12; // [rsp+28h] [rbp-50h]
  int v13; // [rsp+28h] [rbp-50h]
  int v14; // [rsp+50h] [rbp-28h] BYREF
  int v15; // [rsp+54h] [rbp-24h] BYREF
  __int64 v16; // [rsp+58h] [rbp-20h]

  v4 = a2;
  v16 = 1LL;
  v15 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v13 = a2;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x54u,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v13);
  }
  result = UsbhGetPortData(a1, v4);
  v9 = result;
  if ( result )
  {
    if ( a4
      && (UsbhDisablePort(a1), (FdoExt(a1)[640] & 1) != 0)
      && ((v10 = *(_WORD *)(v9 + 4), v14 = 0, v11 = UsbhQueryPortState(a1, v10, (__int64)&v14, &v15), v11 < 0)
       || (v14 & 2) != 0
       && ((UsbhWait(a1, 0xAu), v11 = UsbhQueryPortState(a1, *(_WORD *)(v9 + 4), (__int64)&v14, &v15), v11 < 0)
        || (v14 & 2) != 0)) )
    {
      result = UsbhException(a1, *(unsigned __int16 *)(v9 + 4), 20, 0, 0, v11, v15, usbfile_pchange_c, 5286, 0);
    }
    else
    {
      result = (__int64)UsbhDispatch_PortChangeQueueEventEx(a1, v9, 4, a3, v16, 0, 0LL, 0LL);
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v12) = v4;
      return WPP_RECORDER_SF_d(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               0,
               1u,
               0x55u,
               (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
               v12);
    }
  }
  return result;
}
