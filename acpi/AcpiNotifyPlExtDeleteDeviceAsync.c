__int64 __fastcall AcpiNotifyPlExtDeleteDeviceAsync(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v7; // ebx
  __int64 *Pool2; // rax
  int v9; // edx
  __int64 *v10; // rdi
  int v11; // edx
  int v12; // edx
  PVOID P[3]; // [rsp+40h] [rbp-18h] BYREF

  P[0] = 0LL;
  if ( qword_1C006EC88 && (*((unsigned __int8 (**)(void))&xmmword_1C006EC90 + 1))() )
  {
    Pool2 = (__int64 *)ExAllocatePool2(64LL, 72LL, 1315988289LL);
    v10 = Pool2;
    if ( Pool2 )
    {
      Pool2[1] = (__int64)Pool2;
      *Pool2 = (__int64)Pool2;
      Pool2[4] = a2;
      Pool2[6] = a4;
      Pool2[5] = (__int64)AcpiInterpreterPausedSignalEventCallback;
      Pool2[2] = a1;
      v7 = AcpiCreateDiscoveryDeleteParameters(Pool2, 0, (__int64 *)P);
      if ( v7 >= 0 )
      {
        v7 = ((__int64 (__fastcall *)(PVOID))xmmword_1C006EC90)(P[0]);
        if ( v7 != 259 )
        {
          AcpiNotifyDiscoverDeleteMainCompletion((_BYTE *)P[0]);
          v7 = 259;
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v12) = 4;
          WPP_RECORDER_SF_qD(
            WPP_GLOBAL_Control->DeviceExtension,
            v12,
            19,
            16,
            (__int64)&WPP_6b96f8ebb13c3b7665ec42abfcbc7cd5_Traceguids,
            a1,
            v7);
        }
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_qqD(WPP_GLOBAL_Control->DeviceExtension, v11, 19, 15);
        ExFreePoolWithTag(v10, 0x4E706341u);
        if ( P[0] )
          ExFreePoolWithTag(P[0], 0x4E706341u);
      }
    }
    else
    {
      v7 = -1073741670;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_qqD(WPP_GLOBAL_Control->DeviceExtension, v9, 19, 14);
    }
  }
  else
  {
    return 0;
  }
  return (unsigned int)v7;
}
