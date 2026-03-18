/*
 * XREFs of RIMIDEFillContactUsageValues @ 0x1C019C854
 * Callers:
 *     RIMIDEInjectHIDReportFromPointerInfo @ 0x1C019D494 (RIMIDEInjectHIDReportFromPointerInfo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C0056338 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMIDEFillContactUsageValues(_DWORD *a1, __int64 a2, int *a3)
{
  int v3; // edi
  char v4; // r10
  unsigned int v6; // ebx
  int v7; // eax
  int v8; // ecx
  int v9; // eax
  int v10; // r10d
  __int64 v11; // kr00_8
  int v12; // edx
  int v13; // r8d

  v3 = *a3;
  v4 = a2;
  if ( *a3 == 2 && (unsigned int)a2 < 0xA || v3 == 3 && (unsigned int)a2 < 0xB || (unsigned int)(v3 - 2) > 1 )
  {
    v6 = 0;
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      LOBYTE(a2) = 0;
    }
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_dd(
        WPP_GLOBAL_Control->AttachedDevice,
        a2,
        (_DWORD)a3,
        (_DWORD)gRimLog,
        2,
        1,
        20,
        (__int64)&WPP_7878fd3f7fa83d1a8663537599fa40db_Traceguids,
        v3,
        v4);
    }
    return v6;
  }
  LOBYTE(a2) = 4;
  a1[1] = a3[10];
  a1[4] = a3[11];
  v7 = a3[5];
  if ( (v7 & 4) != 0 )
    a1[7] = 1;
  if ( (v7 & 2) != 0 )
    a1[10] = 1;
  if ( v3 == 3 )
  {
    v8 = a3[27];
    if ( (v8 & 1) != 0 )
      a1[13] = a3[28];
    if ( (v8 & 4) != 0 )
      a1[25] = a3[30];
    if ( (v8 & 8) != 0 )
      a1[28] = a3[31];
    if ( (v8 & 2) != 0 )
      a1[31] = a3[29];
    v9 = a3[26];
    if ( (v9 & 1) != 0 )
      a1[16] = 1;
    if ( (v9 & 2) != 0 )
      a1[19] = 1;
    if ( (v9 & 4) != 0 )
      a1[22] = 1;
    return 1;
  }
  if ( v3 == 2 )
  {
    v10 = a3[27];
    if ( (v10 & 4) != 0 )
      a1[13] = a3[37];
    if ( (v10 & 1) != 0 )
    {
      v11 = a3[30] - a3[28];
      a1[19] = (HIDWORD(v11) ^ v11) - HIDWORD(v11);
      a1[22] = abs32(a3[31] - a3[29]);
    }
    a1[25] = a3[3];
    if ( (v10 & 2) != 0 )
      a1[28] = a3[36];
    a1[16] = 1;
    return 1;
  }
  MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v6 = 0;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v12) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
  {
    LOBYTE(v12) = 0;
  }
  if ( (_BYTE)v12 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      v12,
      v13,
      (_DWORD)gRimLog,
      2,
      1,
      21,
      (__int64)&WPP_7878fd3f7fa83d1a8663537599fa40db_Traceguids,
      v3);
  }
  return v6;
}
