/*
 * XREFs of UsbhQueueSoftConnectChange @ 0x1C0035938
 * Callers:
 *     UsbhFdoSetD0Cold @ 0x1C000CF10 (UsbhFdoSetD0Cold.c)
 *     UsbhFdoColdStartPdo @ 0x1C001C580 (UsbhFdoColdStartPdo.c)
 *     UsbhOvercurrentResetWorker @ 0x1C0030700 (UsbhOvercurrentResetWorker.c)
 *     UsbhCycleDevicePort @ 0x1C0037B3C (UsbhCycleDevicePort.c)
 *     UsbhFinishStart @ 0x1C0038168 (UsbhFinishStart.c)
 *     UsbhPortResumeTimeout @ 0x1C0039760 (UsbhPortResumeTimeout.c)
 *     UsbhFdoSetD0Warm @ 0x1C003CBD0 (UsbhFdoSetD0Warm.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1C003D494 (UsbhPdoWaitForD3Reconnect.c)
 *     UsbhPortCycle @ 0x1C004DFF0 (UsbhPortCycle.c)
 *     UsbhPortRecycle @ 0x1C004E390 (UsbhPortRecycle.c)
 * Callees:
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0007840 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     UsbhQueryPortState @ 0x1C000A080 (UsbhQueryPortState.c)
 *     FdoExt @ 0x1C000F050 (FdoExt.c)
 *     UsbhGetPortData @ 0x1C0016CA0 (UsbhGetPortData.c)
 *     UsbhWait @ 0x1C001853C (UsbhWait.c)
 *     WPP_RECORDER_SF_d @ 0x1C002EFC8 (WPP_RECORDER_SF_d.c)
 *     UsbhDisablePort @ 0x1C0038040 (UsbhDisablePort.c)
 *     UsbhException @ 0x1C004B478 (UsbhException.c)
 */

_UNKNOWN **__fastcall UsbhQueueSoftConnectChange(__int64 a1, unsigned __int16 a2, __int64 a3, char a4)
{
  int v4; // esi
  __int64 PortData; // rdi
  unsigned __int16 v9; // dx
  int v10; // ecx
  _UNKNOWN **result; // rax
  __int64 v12; // [rsp+28h] [rbp-38h]
  int v13; // [rsp+28h] [rbp-38h]
  int v14; // [rsp+48h] [rbp-18h]
  int v15; // [rsp+50h] [rbp-10h] BYREF
  int v16; // [rsp+54h] [rbp-Ch] BYREF
  __int64 v17; // [rsp+58h] [rbp-8h]

  v4 = a2;
  v17 = 1LL;
  v16 = 0;
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
  PortData = UsbhGetPortData(a1, v4);
  if ( PortData )
  {
    if ( a4
      && (UsbhDisablePort(a1), (FdoExt(a1)[640] & 1) != 0)
      && ((v9 = *(_WORD *)(PortData + 4), v15 = 0, v10 = UsbhQueryPortState(a1, v9, (__int64)&v15, &v16), v10 < 0)
       || (v15 & 2) != 0
       && ((UsbhWait(a1, 0xAu), v10 = UsbhQueryPortState(a1, *(_WORD *)(PortData + 4), (__int64)&v15, &v16), v10 < 0)
        || (v15 & 2) != 0)) )
    {
      LOBYTE(v14) = 0;
      UsbhException(a1, *(unsigned __int16 *)(PortData + 4), 20, 0, 0, v10, v16, usbfile_pchange_c, 5286, v14);
    }
    else
    {
      UsbhDispatch_PortChangeQueueEventEx(a1, PortData, 4, a3, v17, 0, 0LL, 0LL);
    }
  }
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v12) = v4;
      return (_UNKNOWN **)WPP_RECORDER_SF_d(
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
