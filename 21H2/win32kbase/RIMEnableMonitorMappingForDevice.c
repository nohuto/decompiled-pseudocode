/*
 * XREFs of RIMEnableMonitorMappingForDevice @ 0x1C0182990
 * Callers:
 *     NtRIMEnableMonitorMappingForDevice @ 0x1C0180080 (NtRIMEnableMonitorMappingForDevice.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     RIMLockExclusive @ 0x1C00378D0 (RIMLockExclusive.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     RawInputManagerDeviceObjectResolveHandle @ 0x1C0043E30 (RawInputManagerDeviceObjectResolveHandle.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0043EC0 (RawInputManagerObjectResolveHandle.c)
 *     RIMGetQDCActivePathsData @ 0x1C009FA90 (RIMGetQDCActivePathsData.c)
 *     RIMFreeQDCActivePathsData @ 0x1C009FE04 (RIMFreeQDCActivePathsData.c)
 *     RIMGetDeviceObjectPointer @ 0x1C00A1D50 (RIMGetDeviceObjectPointer.c)
 *     RIMGetDeviceLocationInfo @ 0x1C01928F4 (RIMGetDeviceLocationInfo.c)
 *     RIMReadDigitizerToMonitorMappings @ 0x1C0198450 (RIMReadDigitizerToMonitorMappings.c)
 *     RIMSetDeviceOutputConfig @ 0x1C0198794 (RIMSetDeviceOutputConfig.c)
 *     rimFindMonitorForDigitizerWithQDCData @ 0x1C01990C8 (rimFindMonitorForDigitizerWithQDCData.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMEnableMonitorMappingForDevice(char *a1, char *a2, int a3, __int64 *a4)
{
  int v5; // edx
  int v6; // r8d
  int v7; // r14d
  _BYTE *v8; // rbx
  int v9; // edx
  int v10; // r8d
  __int64 v11; // rdx
  __int64 v12; // r8
  PVOID v13; // rbx
  char *v14; // r15
  _DWORD *v15; // r12
  PVOID v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // edx
  _UNKNOWN **v21; // r8
  unsigned int *v22; // rbx
  _QWORD *v23; // r8
  __int64 v24; // rdx
  PVOID v25; // r15
  PVOID v27; // [rsp+50h] [rbp-78h] BYREF
  char *v28; // [rsp+58h] [rbp-70h] BYREF
  PVOID Object; // [rsp+60h] [rbp-68h] BYREF
  PVOID v30; // [rsp+68h] [rbp-60h]
  PVOID v31; // [rsp+70h] [rbp-58h]
  HANDLE Handle; // [rsp+78h] [rbp-50h] BYREF
  PVOID v33; // [rsp+80h] [rbp-48h] BYREF
  _BYTE *v34; // [rsp+88h] [rbp-40h]
  __int128 v35[3]; // [rsp+90h] [rbp-38h] BYREF
  char *v36; // [rsp+D8h] [rbp+10h]
  int v37; // [rsp+E0h] [rbp+18h]

  v37 = a3;
  v36 = a2;
  v27 = 0LL;
  v28 = 0LL;
  Handle = 0LL;
  v33 = 0LL;
  Object = 0LL;
  LOBYTE(a2) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      (_DWORD)a2,
      a3,
      (_DWORD)gRimLog,
      4,
      1,
      148,
      (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids);
  }
  v7 = RawInputManagerObjectResolveHandle(a1, 3u, 1, &v27);
  if ( v7 >= 0 )
  {
    v8 = v27;
    v34 = v27;
    RIMLockExclusive((__int64)v27 + 104);
    if ( v8[81] )
    {
      v7 = -1073741637;
      LOBYTE(v9) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      if ( (_BYTE)v9 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v10) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v9,
          v10,
          (_DWORD)gRimLog,
          3,
          1,
          151,
          (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids);
      }
      goto LABEL_59;
    }
    v7 = RawInputManagerDeviceObjectResolveHandle(v36, 3u, 1, (PVOID *)&v28);
    if ( v7 < 0 )
    {
LABEL_59:
      *((_QWORD *)v8 + 14) = 0LL;
      ExReleasePushLockExclusiveEx(v8 + 104, 0LL);
      KeLeaveCriticalRegion();
      ObfDereferenceObject(v8);
      goto LABEL_60;
    }
    v13 = v28;
    v30 = v28;
    if ( v28 )
      v14 = v28 + 88;
    else
      v14 = 0LL;
    if ( v14[48] != 2
      || (*((_DWORD *)v14 + 50) & 0x80u) != 0
      || (*((_DWORD *)v14 + 46) & 0x2000) != 0
      || (v15 = v14 + 1336, *((_DWORD *)v14 + 334)) )
    {
      v7 = -1073741811;
      LOBYTE(v11) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      if ( (_BYTE)v11 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v12) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v11,
          v12,
          (_DWORD)gRimLog,
          3,
          1,
          149,
          (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids);
      }
      goto LABEL_50;
    }
    v7 = RIMGetDeviceObjectPointer(
           (struct _UNICODE_STRING *)v14 + 13,
           v11,
           v12,
           &Handle,
           &v33,
           (PDEVICE_OBJECT *)&Object);
    if ( v7 < 0 )
    {
LABEL_50:
      ObfDereferenceObject(v13);
      v8 = v34;
      goto LABEL_59;
    }
    v16 = Object;
    v31 = Object;
    ObfReferenceObject(Object);
    v7 = RIMGetDeviceLocationInfo(v16, v14 + 2120);
    if ( v7 < 0 )
    {
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v18, v17, v19);
      LOBYTE(v20) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 3u;
      v21 = &WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v21) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v20,
          (_DWORD)v21,
          (_DWORD)gRimLog,
          3,
          1,
          150,
          (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids);
      }
      v7 = 0;
    }
    *v15 = 1;
    RIMReadDigitizerToMonitorMappings(v14, v14 + 1336);
    v35[0] = 0LL;
    v22 = RIMGetQDCActivePathsData((unsigned int *)v35);
    rimFindMonitorForDigitizerWithQDCData(v14, v22, 0LL);
    RIMSetDeviceOutputConfig((struct RIMDEV *)v14, 0LL);
    RIMFreeQDCActivePathsData((__int64)v22);
    v23 = a4;
    if ( a4 )
    {
      if ( *((_QWORD *)v14 + 59) || *v15 )
        v24 = *((_QWORD *)v14 + 168);
      else
        v24 = -1LL;
      if ( v37 )
      {
        if ( (unsigned __int64)a4 >= MmUserProbeAddress )
          v23 = (_QWORD *)MmUserProbeAddress;
        *v23 = v24;
        v13 = v30;
        v25 = v31;
        goto LABEL_41;
      }
      *a4 = v24;
    }
    v25 = v31;
    v13 = v30;
LABEL_41:
    ZwClose(Handle);
    ObfDereferenceObject(v33);
    ObfDereferenceObject(v25);
    goto LABEL_50;
  }
LABEL_60:
  LOBYTE(v5) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
            && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v5 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v6) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      v5,
      v6,
      (_DWORD)gRimLog,
      4,
      1,
      152,
      (__int64)&WPP_df94b808a2303b7a296e0888e8df2dc4_Traceguids,
      v7);
  }
  return (unsigned int)v7;
}
