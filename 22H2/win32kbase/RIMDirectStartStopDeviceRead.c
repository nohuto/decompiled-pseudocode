/*
 * XREFs of RIMDirectStartStopDeviceRead @ 0x1C0054E80
 * Callers:
 *     ?OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ @ 0x1C0054D10 (-OnDirectStartStopReadNotification@CHidInput@@EEAAJXZ.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0042360 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C0047F78 (WPP_RECORDER_SF_d.c)
 *     ApiSetIsRemoteConnection @ 0x1C00550CC (ApiSetIsRemoteConnection.c)
 *     ?bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z @ 0x1C0055178 (-bRimDispositionNormal@@YA_NPEAURawInputManagerObject@@@Z.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00551A0 (RawInputManagerObjectResolveHandle.c)
 *     RIMHidTLCActive @ 0x1C00567C4 (RIMHidTLCActive.c)
 *     RimDeviceTypeToRimInputType @ 0x1C0056804 (RimDeviceTypeToRimInputType.c)
 *     RIMChildInputTypeIsVirtualized @ 0x1C0056848 (RIMChildInputTypeIsVirtualized.c)
 *     rimOnPnpArrived @ 0x1C0056904 (rimOnPnpArrived.c)
 *     rimFakePnpRemoveComplete @ 0x1C00AC19C (rimFakePnpRemoveComplete.c)
 *     RIMHidValidExclusive @ 0x1C00B5F10 (RIMHidValidExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMDirectStartStopDeviceRead(__int64 a1)
{
  int v2; // edx
  int v3; // ebp
  char *v4; // rsi
  char *v5; // r14
  __int64 v6; // rbx
  __int64 v8; // r15
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // ecx
  __int64 v13; // rdi
  int v14; // eax
  PVOID Object; // [rsp+68h] [rbp+10h] BYREF
  int v16; // [rsp+70h] [rbp+18h]

  Object = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_((_DWORD)gRimLog, 4, 1, 99, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
  v3 = RawInputManagerObjectResolveHandle(a1, 3LL, 1LL, &Object);
  if ( v3 >= 0 )
  {
    v4 = (char *)Object;
    v5 = (char *)Object + 104;
    RIMLockExclusive((__int64)Object + 104);
    if ( !bRimDispositionNormal((struct RawInputManagerObject *)v4) || (unsigned int)ApiSetIsRemoteConnection() )
    {
      v3 = -1073741637;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_((_DWORD)gRimLog, 3, 1, 100, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
    }
    else
    {
      v6 = *((_QWORD *)v4 + 53);
      if ( v6 )
      {
        do
        {
          v8 = *(_QWORD *)(v6 + 40);
          v9 = RimDeviceTypeToRimInputType(v6, *(unsigned __int8 *)(v6 + 48));
          v11 = v9;
          if ( (v9 & 0x3C) != 0 )
          {
            v12 = *(_DWORD *)(v6 + 184);
            if ( (v12 & 0x2000) == 0
              && (v12 & 1) == 0
              && (v12 & 2) == 0
              && (v12 & 4) == 0
              && (v12 & 8) == 0
              && (v12 & 0x400) == 0
              && (v12 & 0x4000) == 0
              && (!*(_DWORD *)(*(_QWORD *)(v6 + 32) + 64LL) || !(unsigned __int8)RIMChildInputTypeIsVirtualized(v9)) )
            {
              v13 = *(_QWORD *)(v6 + 472);
              if ( v13 )
              {
                if ( (unsigned int)RIMHidTLCActive(*(_QWORD *)(v6 + 472), v10, v11) )
                {
                  if ( !*(_QWORD *)(v6 + 224) )
                  {
                    *(_DWORD *)(v6 + 184) |= 1u;
                    rimOnPnpArrived(v4, v6, -1LL);
                    if ( *(_QWORD *)(v6 + 224) )
                    {
                      if ( (*(_DWORD *)(v6 + 184) & 0x400) != 0 )
                      {
                        LODWORD(Object) = 0x20000;
                        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3232LL);
                      }
                      *(_DWORD *)(v6 + 200) |= 0x20u;
                    }
                  }
                }
                else
                {
                  if ( *(_DWORD *)(v13 + 24) || *(_DWORD *)(v13 + 32) > (unsigned int)RIMHidValidExclusive(v13) )
                  {
                    v16 = 0x20000;
                    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 3245LL);
                  }
                  if ( *(_QWORD *)(v6 + 224) )
                  {
                    v14 = *(_DWORD *)(v6 + 200);
                    if ( (v14 & 0x80u) == 0 && (v14 & 0x100) == 0 && (v14 & 0x200) == 0 )
                      rimFakePnpRemoveComplete(v4, v6);
                  }
                }
              }
            }
          }
          v6 = v8;
        }
        while ( v8 );
        v5 = v4 + 104;
      }
    }
    *((_QWORD *)v5 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v5, 0LL);
    KeLeaveCriticalRegion();
    ObfDereferenceObject(v4);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v2) = 4;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, v2, 1, 101, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids, v3);
  }
  return (unsigned int)v3;
}
