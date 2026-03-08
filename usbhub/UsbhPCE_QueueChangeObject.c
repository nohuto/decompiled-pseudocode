/*
 * XREFs of UsbhPCE_QueueChangeObject @ 0x1C003484C
 * Callers:
 *     UsbhResetPortTimerDpc @ 0x1C00394C0 (UsbhResetPortTimerDpc.c)
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     UsbhDispatch_PortChangeQueueEventEx @ 0x1C0014330 (UsbhDispatch_PortChangeQueueEventEx.c)
 *     UsbhGetPortData @ 0x1C0019550 (UsbhGetPortData.c)
 *     WPP_RECORDER_SF_d @ 0x1C002E5BC (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhPCE_QueueChangeObject(
        __int64 a1,
        unsigned __int16 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  int v7; // edi
  __int64 result; // rax
  __int64 v11; // [rsp+28h] [rbp-30h]
  int v12; // [rsp+28h] [rbp-30h]

  v7 = a2;
  FdoExt(a1);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v12 = v7;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x4Du,
      (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
      v12);
  }
  result = UsbhGetPortData(a1, v7);
  if ( result )
    result = (__int64)UsbhDispatch_PortChangeQueueEventEx(a1, result, 4, a4, a3, 2, a6, 0LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v11) = v7;
      return WPP_RECORDER_SF_d(
               (__int64)WPP_GLOBAL_Control->DeviceExtension,
               0,
               1u,
               0x4Eu,
               (__int64)&WPP_ccf2d5d86ecd3ff97d61dec65be5cc3f_Traceguids,
               v11);
    }
  }
  return result;
}
