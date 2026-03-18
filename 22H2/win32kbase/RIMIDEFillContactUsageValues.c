/*
 * XREFs of RIMIDEFillContactUsageValues @ 0x1C0195458
 * Callers:
 *     RIMIDEInjectHIDReportFromPointerInfo @ 0x1C0196118 (RIMIDEInjectHIDReportFromPointerInfo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C000A528 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C00744D4 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMIDEFillContactUsageValues(_DWORD *a1, unsigned int a2, int *a3)
{
  int v3; // edi
  unsigned int v4; // ebx
  int v7; // esi
  char v8; // dl
  int v9; // eax
  int v10; // ecx
  int v11; // eax
  int v12; // r10d
  __int64 v13; // kr00_8
  char v14; // dl

  v3 = *a3;
  v4 = 0;
  v7 = 0;
  if ( *a3 == 2 && a2 < 0xA || v3 == 3 && a2 < 0xB || (unsigned int)(v3 - 2) > 1 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (v8 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
    {
      v8 = 0;
    }
    if ( v8 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_dd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v8,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gRimLog,
        2u,
        1u,
        0x14u,
        (__int64)&WPP_9f96ae63cfc83aaf8fc02e72e74825ab_Traceguids,
        *a3,
        a2);
    v7 = 1;
  }
  else
  {
    a1[1] = a3[10];
    a1[4] = a3[11];
    v9 = a3[5];
    if ( (v9 & 4) != 0 )
      a1[7] = 1;
    if ( (v9 & 2) != 0 )
      a1[10] = 1;
    if ( v3 == 3 )
    {
      v10 = a3[27];
      if ( (v10 & 1) != 0 )
        a1[13] = a3[28];
      if ( (v10 & 4) != 0 )
        a1[25] = a3[30];
      if ( (v10 & 8) != 0 )
        a1[28] = a3[31];
      if ( (v10 & 2) != 0 )
        a1[31] = a3[29];
      v11 = a3[26];
      if ( (v11 & 1) != 0 )
        a1[16] = 1;
      if ( (v11 & 2) != 0 )
        a1[19] = 1;
      if ( (v11 & 4) != 0 )
        a1[22] = 1;
    }
    else if ( v3 == 2 )
    {
      v12 = a3[27];
      if ( (v12 & 4) != 0 )
        a1[13] = a3[37];
      if ( (v12 & 1) != 0 )
      {
        v13 = a3[30] - a3[28];
        a1[19] = (HIDWORD(v13) ^ v13) - HIDWORD(v13);
        a1[22] = abs32(a3[31] - a3[29]);
      }
      a1[25] = a3[3];
      if ( (v12 & 2) != 0 )
        a1[28] = a3[36];
      a1[16] = 1;
    }
    else
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1122);
      v7 = 1;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (v14 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        v14 = 0;
      }
      if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_d(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          v14,
          WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
          (__int64)gRimLog,
          2u,
          1u,
          0x15u,
          (__int64)&WPP_9f96ae63cfc83aaf8fc02e72e74825ab_Traceguids,
          v3);
    }
  }
  LOBYTE(v4) = v7 == 0;
  return v4;
}
