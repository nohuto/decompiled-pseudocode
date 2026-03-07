LONG __fastcall ACPIRootDeviceDiscoverDeviceCompletion(__int64 a1, int a2, __int64 a3)
{
  char v5; // [rsp+30h] [rbp-18h]

  if ( a2 >= 0 )
  {
    if ( a3 )
    {
      *(_QWORD *)a1 = a3;
      *(_DWORD *)(a1 + 16) = a2;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v5 = a2;
        LOBYTE(a2) = 4;
        WPP_RECORDER_SF_qD(
          WPP_GLOBAL_Control->DeviceExtension,
          a2,
          6,
          32,
          (__int64)&WPP_751107becb7a3b7b48760ac4afe26340_Traceguids,
          a3,
          v5);
      }
    }
  }
  return KeSetEvent(*(PRKEVENT *)(a1 + 8), 0, 0);
}
