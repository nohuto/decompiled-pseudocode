/*
 * XREFs of RIMIDEFillContactUsageValues @ 0x1C01C3188
 * Callers:
 *     RIMIDEInjectHIDReportFromPointerInfo @ 0x1C01C3E48 (RIMIDEInjectHIDReportFromPointerInfo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C00052A0 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_d @ 0x1C0039A10 (WPP_RECORDER_AND_TRACE_SF_d.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall RIMIDEFillContactUsageValues(_DWORD *a1, unsigned int a2, int *a3)
{
  int v3; // edi
  unsigned int v4; // ebx
  char v5; // r10
  int v7; // esi
  int v8; // eax
  int v9; // ecx
  int v10; // eax
  int v11; // r10d
  __int64 v12; // kr00_8
  int v13; // edx
  int v14; // r8d

  v3 = *a3;
  v4 = 0;
  v5 = a2;
  v7 = 0;
  if ( *a3 == 2 && a2 < 0xA || v3 == 3 && a2 < 0xB || (unsigned int)(v3 - 2) > 1 )
  {
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
        (__int64)&WPP_9f96ae63cfc83aaf8fc02e72e74825ab_Traceguids,
        v3,
        v5);
    }
    v7 = 1;
  }
  else
  {
    a1[1] = a3[10];
    a1[4] = a3[11];
    v8 = a3[5];
    if ( (v8 & 4) != 0 )
      a1[7] = 1;
    if ( (v8 & 2) != 0 )
      a1[10] = 1;
    if ( v3 == 3 )
    {
      v9 = a3[27];
      if ( (v9 & 1) != 0 )
        a1[13] = a3[28];
      if ( (v9 & 4) != 0 )
        a1[25] = a3[30];
      if ( (v9 & 8) != 0 )
        a1[28] = a3[31];
      if ( (v9 & 2) != 0 )
        a1[31] = a3[29];
      v10 = a3[26];
      if ( (v10 & 1) != 0 )
        a1[16] = 1;
      if ( (v10 & 2) != 0 )
        a1[19] = 1;
      if ( (v10 & 4) != 0 )
        a1[22] = 1;
    }
    else if ( v3 == 2 )
    {
      v11 = a3[27];
      if ( (v11 & 4) != 0 )
        a1[13] = a3[37];
      if ( (v11 & 1) != 0 )
      {
        v12 = a3[30] - a3[28];
        a1[19] = (HIDWORD(v12) ^ v12) - HIDWORD(v12);
        a1[22] = abs32(a3[31] - a3[29]);
      }
      a1[25] = a3[3];
      if ( (v11 & 2) != 0 )
        a1[28] = a3[36];
      a1[16] = 1;
    }
    else
    {
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 1122);
      v7 = 1;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v13) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v13) = 0;
      }
      if ( (_BYTE)v13 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_d(
          WPP_GLOBAL_Control->AttachedDevice,
          v13,
          v14,
          (_DWORD)gRimLog,
          2,
          1,
          21,
          (__int64)&WPP_9f96ae63cfc83aaf8fc02e72e74825ab_Traceguids,
          v3);
      }
    }
  }
  LOBYTE(v4) = v7 == 0;
  return v4;
}
