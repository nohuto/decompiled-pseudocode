__int64 __fastcall UsbhQueueOvercurrentReset(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rbx
  __int64 result; // rax
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // r8
  _DWORD *v9; // rax

  v4 = FdoExt(a1);
  Log(a1, 0x4000, 1870033457, 0LL, *(unsigned __int16 *)(a2 + 20));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0xAu,
      (__int64)&WPP_09d41a57df183c3937fadd74f3cf7425_Traceguids);
  if ( !*((_BYTE *)v4 + 3010) )
  {
    *((_BYTE *)v4 + 3010) = 1;
    UsbhQueueWorkItemEx(a1, 1u, (int)UsbhSetHubOvercurrentDetectedKey, 0LL, 0, 0x6352564Fu, 0LL);
  }
  result = UsbhGetPortData(a1, *(_WORD *)(a2 + 20));
  v6 = result;
  if ( result )
  {
    v7 = result + 200;
    UsbhPCE_Disable(a1, *(unsigned __int16 *)(a2 + 20), result + 200);
    result = UsbhQueueWorkItemEx(
               a1,
               1u,
               (int)UsbhAutoOvercurrentResetWorker,
               v7,
               *(unsigned __int16 *)(v6 + 4),
               0x6352564Fu,
               0LL) & 0xC0000000LL;
    if ( (_DWORD)result == -1073741824 )
    {
      LOBYTE(v8) = 1;
      Usbh_OvercurrentDerefHubBusy(a1, v6, v8);
      v9 = FdoExt(a1);
      return UsbhDispatch_HardResetEvent(a1, (__int64)(v9 + 346), 3);
    }
  }
  return result;
}
