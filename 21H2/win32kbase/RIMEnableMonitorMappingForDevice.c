/*
 * XREFs of RIMEnableMonitorMappingForDevice @ 0x1C0155860
 * Callers:
 *     NtRIMEnableMonitorMappingForDevice @ 0x1C0153200 (NtRIMEnableMonitorMappingForDevice.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C0040EF0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_d @ 0x1C0046B08 (WPP_RECORDER_SF_d.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C00541A0 (RawInputManagerObjectResolveHandle.c)
 *     RIMGetDeviceObjectPointer @ 0x1C00571B0 (RIMGetDeviceObjectPointer.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0057C60 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RIMFreeQDCActivePathsData @ 0x1C006DCC4 (RIMFreeQDCActivePathsData.c)
 *     RIMGetQDCActivePathsData @ 0x1C006E0F0 (RIMGetQDCActivePathsData.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     RIMGetDeviceLocationInfo @ 0x1C015DD18 (RIMGetDeviceLocationInfo.c)
 *     RIMReadDigitizerToMonitorMappings @ 0x1C016494C (RIMReadDigitizerToMonitorMappings.c)
 *     RIMSetDeviceOutputConfig @ 0x1C0164C1C (RIMSetDeviceOutputConfig.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C0165650 (rimFindMonitorForDigitizerWithQDCData.c)
 */

__int64 __fastcall RIMEnableMonitorMappingForDevice(char *a1, char *a2, int a3, __int64 *a4)
{
  char *v4; // r14
  int v6; // edx
  int v7; // esi
  _BYTE *v8; // rbx
  int v9; // edx
  __int64 v10; // rdx
  __int64 v11; // r8
  char *v12; // r14
  PVOID v13; // rbx
  int v14; // edx
  unsigned int *v15; // rbx
  _QWORD *v16; // r8
  __int64 v17; // rdx
  void *v18; // r14
  char *v20; // [rsp+30h] [rbp-88h]
  PVOID v21; // [rsp+40h] [rbp-78h] BYREF
  char *v22; // [rsp+48h] [rbp-70h] BYREF
  PVOID Object; // [rsp+50h] [rbp-68h] BYREF
  _BYTE *v24; // [rsp+58h] [rbp-60h]
  HANDLE Handle; // [rsp+60h] [rbp-58h] BYREF
  PVOID v26; // [rsp+68h] [rbp-50h] BYREF
  PVOID v27; // [rsp+70h] [rbp-48h]
  __int128 v28[4]; // [rsp+78h] [rbp-40h] BYREF

  v4 = a2;
  v21 = 0LL;
  v22 = 0LL;
  Handle = 0LL;
  v26 = 0LL;
  Object = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, (_DWORD)a2, 1, 139, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
  }
  v7 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &v21);
  if ( v7 >= 0 )
  {
    v8 = v21;
    v24 = v21;
    RIMLockExclusive((__int64)v21 + 104);
    if ( v8[81] )
    {
      v7 = -1073741637;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 3;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v9, 1, 142, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
      }
      goto LABEL_35;
    }
    v7 = RawInputManagerDeviceObjectResolveHandle(v4, 3u, 1, (PVOID *)&v22);
    if ( v7 < 0 )
    {
LABEL_35:
      *((_QWORD *)v8 + 14) = 0LL;
      ExReleasePushLockExclusiveEx(v8 + 104, 0LL);
      KeLeaveCriticalRegion();
      ObfDereferenceObject(v8);
      goto LABEL_36;
    }
    v20 = v22;
    v12 = v22 + 88;
    if ( !v22 )
      v12 = 0LL;
    if ( v12[48] != 2
      || (*((_DWORD *)v12 + 50) & 0x80u) != 0
      || (*((_DWORD *)v12 + 46) & 0x2000) != 0
      || *((_DWORD *)v12 + 336) )
    {
      v7 = -1073741811;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = 3;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v10, 1, 140, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
      }
    }
    else
    {
      v7 = RIMGetDeviceObjectPointer(
             (struct _UNICODE_STRING *)v12 + 13,
             v10,
             v11,
             &Handle,
             &v26,
             (PDEVICE_OBJECT *)&Object);
      if ( v7 >= 0 )
      {
        v13 = Object;
        v27 = Object;
        ObfReferenceObject(Object);
        v7 = RIMGetDeviceLocationInfo(v13, v12 + 2112);
        if ( v7 < 0 )
        {
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 4688);
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v14) = 3;
            WPP_RECORDER_SF_((_DWORD)gRimLog, v14, 1, 141, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids);
          }
          v7 = 0;
        }
        *((_DWORD *)v12 + 336) = 1;
        RIMReadDigitizerToMonitorMappings(v12, v12 + 1344);
        v28[0] = 0LL;
        v15 = RIMGetQDCActivePathsData((unsigned int *)v28);
        rimFindMonitorForDigitizerWithQDCData(v12, v15, 0LL);
        RIMSetDeviceOutputConfig((struct RIMDEV *)v12, 0LL);
        RIMFreeQDCActivePathsData((__int64)v15);
        v16 = a4;
        if ( a4 )
        {
          if ( *((_QWORD *)v12 + 60) || *((_DWORD *)v12 + 336) )
            v17 = *((_QWORD *)v12 + 169);
          else
            v17 = -1LL;
          if ( a3 )
          {
            if ( (unsigned __int64)a4 >= MmUserProbeAddress )
              v16 = (_QWORD *)MmUserProbeAddress;
            *v16 = v17;
            v8 = v24;
            v18 = v20;
            goto LABEL_28;
          }
          *a4 = v17;
        }
        v18 = v20;
        v8 = v24;
LABEL_28:
        ZwClose(Handle);
        ObfDereferenceObject(v26);
        ObfDereferenceObject(v27);
LABEL_32:
        ObfDereferenceObject(v18);
        goto LABEL_35;
      }
    }
    v18 = v20;
    goto LABEL_32;
  }
LABEL_36:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = 4;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, v6, 1, 143, (__int64)&WPP_458f9cb2c9d13fde67ad7c5a84ebc3a7_Traceguids, v7);
  }
  return (unsigned int)v7;
}
