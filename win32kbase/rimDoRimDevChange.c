void __fastcall rimDoRimDevChange(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // edx
  int v9; // r8d
  char v10; // r9
  __int64 v11; // rcx
  int v12; // eax
  PDEVICE_OBJECT v13; // r10
  __int16 v14; // cx

  if ( a3 == 1 )
    goto LABEL_7;
  if ( a3 == 2 )
  {
    *(_DWORD *)(a2 + 184) |= 0x40000000u;
    LOBYTE(v6) = 1;
    v7 = RIMHandlePowerDeviceArrival((struct RIMDEV *)a2);
    v10 = v7;
    if ( v7 < 0 )
    {
      v13 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v8) = 0;
      }
      LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v14 = 14;
        goto LABEL_31;
      }
    }
    goto LABEL_8;
  }
  if ( a3 != 3 )
  {
    if ( a3 - 4 > 1 )
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 140LL);
      LOBYTE(v6) = 0;
      goto LABEL_8;
    }
LABEL_7:
    LOBYTE(v6) = 1;
    goto LABEL_8;
  }
  v6 = (*(_DWORD *)(a2 + 184) & 0x40000000u) >> 30;
  if ( !isChildPartition() )
  {
    if ( *(_BYTE *)SGDGetUserGdiSessionState(v11) )
    {
      v12 = RIMHandleTTMDeviceRemoval(a2);
      v10 = v12;
      if ( v12 < 0 )
      {
        v13 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(v8) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
        {
          LOBYTE(v8) = 0;
        }
        LOBYTE(v9) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( (_BYTE)v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          v14 = 15;
LABEL_31:
          WPP_RECORDER_AND_TRACE_SF_d(
            v13->AttachedDevice,
            v8,
            v9,
            (_DWORD)gRimLog,
            4,
            1,
            v14,
            (__int64)&WPP_89c3e44078983ba1070baf237427a4e9_Traceguids,
            v10);
        }
      }
    }
  }
LABEL_8:
  InputTraceLogging::RIM::RimDevice((const struct RIMDEV *)a2, a3);
  if ( (_BYTE)v6 )
    rimDoRimDevChangeCallback(a1, a2, a3);
  if ( a3 == 3 )
    *(_DWORD *)(a2 + 184) &= ~0x40000000u;
}
