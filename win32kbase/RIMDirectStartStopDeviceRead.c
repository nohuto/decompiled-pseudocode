__int64 __fastcall RIMDirectStartStopDeviceRead(char *a1)
{
  int v2; // edx
  int v3; // r8d
  int v4; // edx
  int v5; // ebp
  int v6; // r8d
  char *v7; // rsi
  char *v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 v15; // r14
  int v16; // r8d
  int v17; // ecx
  __int64 v18; // rdi
  int v19; // eax
  PVOID Object; // [rsp+98h] [rbp+10h] BYREF
  int v21; // [rsp+A0h] [rbp+18h]

  Feature_RIMUserCritOpt__private_ReportDeviceUsage();
  Object = 0LL;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v2) = 0;
  }
  if ( (_BYTE)v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v2,
      v3,
      (_DWORD)gRimLog,
      4,
      1,
      108,
      (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids);
  }
  v5 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &Object);
  if ( v5 >= 0 )
  {
    v7 = (char *)Object;
    v8 = (char *)Object + 104;
    RIMLockExclusive((__int64)Object + 104);
    if ( v7[81] || v7[82] || RIMApiSetIsRemoteConnection(v10, v9, v11, v12) )
    {
      v5 = -1073741637;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v9) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
      {
        LOBYTE(v9) = 0;
      }
      if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v11) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v9,
          v11,
          (_DWORD)gRimLog,
          3,
          1,
          109,
          (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids);
      }
    }
    else
    {
      v13 = *((_QWORD *)v7 + 53);
      if ( v13 )
      {
        do
        {
          v15 = *(_QWORD *)(v13 + 40);
          v16 = RimDeviceTypeToRimInputType(v13, *(unsigned __int8 *)(v13 + 48));
          if ( (v16 & 0x3C) != 0 )
          {
            v17 = *(_DWORD *)(v13 + 184);
            if ( (v17 & 0x2000) == 0
              && (v17 & 1) == 0
              && (v17 & 2) == 0
              && (v17 & 4) == 0
              && (v17 & 8) == 0
              && (v17 & 0x400) == 0
              && (v17 & 0x10000) == 0
              && (!*(_DWORD *)(*(_QWORD *)(v13 + 32) + 64LL) || !RIMChildInputTypeIsVirtualized(v16)) )
            {
              v18 = *(_QWORD *)(v13 + 464);
              if ( v18 )
              {
                if ( (unsigned int)RIMIsRawInputActive(v13) )
                {
                  if ( !*(_QWORD *)(v13 + 224) )
                  {
                    *(_DWORD *)(v13 + 184) |= 1u;
                    rimOnPnpArrived((__int64)v7, v13, -1LL);
                    if ( *(_QWORD *)(v13 + 224) )
                    {
                      if ( (*(_DWORD *)(v13 + 184) & 0x400) != 0 )
                      {
                        LODWORD(Object) = 0x20000;
                        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3404LL);
                      }
                      *(_DWORD *)(v13 + 200) |= 0x20u;
                    }
                  }
                }
                else
                {
                  if ( (*(_DWORD *)(v13 + 184) & 0x20000) != 0
                    && (*(_DWORD *)(v18 + 24) || *(_DWORD *)(v18 + 32) > (unsigned int)RIMHidValidExclusive(v18)) )
                  {
                    v21 = 0x20000;
                    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3419LL);
                  }
                  if ( *(_QWORD *)(v13 + 224) )
                  {
                    v19 = *(_DWORD *)(v13 + 200);
                    if ( (v19 & 0x80u) == 0 && (v19 & 0x100) == 0 && (v19 & 0x200) == 0 )
                      rimFakePnpRemoveComplete(v7, v13);
                  }
                }
              }
            }
          }
          v13 = v15;
        }
        while ( v15 );
        v8 = v7 + 104;
      }
    }
    *((_QWORD *)v8 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v8, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v7);
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v4) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(v4) = 0;
  }
  if ( (_BYTE)v4 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_d(
      WPP_GLOBAL_Control->AttachedDevice,
      v4,
      v6,
      (_DWORD)gRimLog,
      4,
      1,
      110,
      (__int64)&WPP_4c0e77e510263a15499569c040c0d872_Traceguids,
      v5);
  }
  return (unsigned int)v5;
}
