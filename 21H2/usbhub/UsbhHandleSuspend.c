/*
 * XREFs of UsbhHandleSuspend @ 0x1C001B878
 * Callers:
 *     UsbhHubDispatchPortEvent @ 0x1C0016AF0 (UsbhHubDispatchPortEvent.c)
 * Callees:
 *     Log @ 0x1C0009F20 (Log.c)
 *     UsbhResumeSuspendedPort @ 0x1C001AA6C (UsbhResumeSuspendedPort.c)
 *     WPP_RECORDER_SF_ @ 0x1C002DB18 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dDD @ 0x1C0047C4C (WPP_RECORDER_SF_dDD.c)
 *     UsbhHandleOvercurrent @ 0x1C004C3B4 (UsbhHandleOvercurrent.c)
 *     UsbhPortDisconnect @ 0x1C004CDA0 (UsbhPortDisconnect.c)
 */

__int64 __fastcall UsbhHandleSuspend(__int64 a1, unsigned int a2, unsigned __int8 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // r14
  unsigned int v9; // edi
  __int64 v10; // rdx
  int v11; // r8d
  __int64 v12; // r9
  unsigned int v13; // ebx
  unsigned int v14; // ebx
  unsigned int v15; // ebx

  v6 = a3;
  v9 = 5;
  Log(a1, 1024, 1398100816, a4, a2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dDD(
      WPP_GLOBAL_Control->DeviceExtension,
      *(unsigned __int16 *)(v12 + 4),
      v11,
      44,
      (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids,
      *(_WORD *)(v12 + 4),
      v6,
      a2);
  v13 = a2 - 1;
  if ( !v13 )
    return (unsigned int)UsbhPortDisconnect(a1, a4, a5);
  v14 = v13 - 7;
  if ( !v14 )
    return (unsigned int)UsbhHandleOvercurrent(a1, a5);
  v15 = v14 - 262136;
  if ( v15 )
  {
    if ( v15 == 786432 )
      return (unsigned int)UsbhResumeSuspendedPort(a1, v10, v6, a4, a5);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        45,
        (__int64)&WPP_8026ecaf353e33c620bb7ebcf688be2f_Traceguids);
    Log(a1, 1024, 1937077062, *(unsigned __int16 *)(a4 + 420), v6);
    return 4;
  }
  return v9;
}
