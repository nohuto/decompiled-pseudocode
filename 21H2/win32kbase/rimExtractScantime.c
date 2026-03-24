/*
 * XREFs of rimExtractScantime @ 0x1C017AF5C
 * Callers:
 *     rimUpdatePointerDeviceFrameScanTime @ 0x1C017CFF8 (rimUpdatePointerDeviceFrameScanTime.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0046B08 (WPP_RECORDER_SF_d.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimHidP_GetUsageValue @ 0x1C016366C (rimHidP_GetUsageValue.c)
 *     ?UpdateScantime@RIM@InputTraceLogging@@SAXPEBUtagHPD_FRAME_SCAN_TIME@@_NK@Z @ 0x1C0177E0C (-UpdateScantime@RIM@InputTraceLogging@@SAXPEBUtagHPD_FRAME_SCAN_TIME@@_NK@Z.c)
 *     RIMDivideToCeilingOrNearestInt @ 0x1C0178184 (RIMDivideToCeilingOrNearestInt.c)
 */

void __fastcall rimExtractScantime(
        __int64 a1,
        _DWORD *a2,
        struct _HIDP_PREPARSED_DATA *a3,
        char *a4,
        unsigned int a5,
        unsigned __int64 *a6,
        unsigned int *a7)
{
  unsigned int *v7; // rbx
  unsigned __int64 *v8; // r12
  __int64 v10; // r15
  int UsageValue; // eax
  unsigned int *v12; // r13
  _UNKNOWN **v13; // rdx
  unsigned int v14; // r8d
  unsigned int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // r9d
  unsigned int v18; // r10d
  unsigned int v19; // eax
  unsigned int v20; // r10d
  unsigned int v21; // ecx
  unsigned int v22; // r15d
  int v23; // ecx
  unsigned int v24; // eax
  unsigned int v25; // ecx
  int v26; // edx
  unsigned int v27; // edi
  unsigned int v28; // r8d
  unsigned __int64 v29; // rcx
  unsigned __int64 v30; // rdx
  unsigned int v31; // eax

  v7 = a2 + 196;
  v8 = a6;
  v10 = a1;
  LODWORD(a6) = 0;
  ++a2[202];
  UsageValue = rimHidP_GetUsageValue(HidP_Input, 0xDu, 0, 0x56u, (unsigned int *)&a6, a3, a4, a5);
  v12 = a7;
  v13 = &WPP_RECORDER_INITIALIZED;
  if ( UsageValue < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_((_DWORD)gRimLog, 2, 1, 68, (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids);
    goto LABEL_40;
  }
  v14 = v7[6];
  if ( v14 == 1 )
  {
    if ( *v7 )
    {
      LODWORD(a7) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 3242);
      if ( v7[6] != 1 )
      {
        LODWORD(a7) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 3243);
      }
    }
    if ( v7[2] )
    {
      LODWORD(a7) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 3244);
    }
    if ( v7[1] )
    {
      LODWORD(a7) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 3245);
    }
    if ( v7[3] )
    {
      LODWORD(a7) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 3246);
    }
    if ( v7[5] )
    {
      LODWORD(a7) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 3247);
    }
    if ( (v7[12] & 1) != 0 )
    {
      LODWORD(a7) = 0x20000;
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 3248);
    }
    *v7 = *v12;
    *((_QWORD *)v7 + 5) = *v8;
    v15 = (unsigned int)a6;
    v7[3] = (unsigned int)a6;
    v7[4] = v15;
    goto LABEL_41;
  }
  v16 = v7[12];
  if ( (v16 & 1) != 0 )
    goto LABEL_31;
  v17 = v7[3];
  v18 = a2[210];
  if ( (unsigned int)a6 >= v17 % v18 )
  {
    v19 = a2[203];
  }
  else
  {
    v19 = ++v7[7];
    v18 = a2[210];
  }
  v20 = (_DWORD)a6 + v19 * v18;
  if ( v20 <= v17 )
  {
    v13 = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 4;
      WPP_RECORDER_SF_((_DWORD)gRimLog, (_DWORD)v13, 1, 65, (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids);
      v16 = a2[208];
      v13 = &WPP_RECORDER_INITIALIZED;
    }
    v23 = v16 | 1;
    v7[12] = v23;
  }
  else
  {
    v7[3] = v20;
    v21 = v20 - v7[4];
    LODWORD(a7) = 0;
    if ( (unsigned int)RIMDivideToCeilingOrNearestInt(v21, v14 - 1, 1, (int *)&a7) )
    {
      v22 = (unsigned int)a7;
      if ( !(_DWORD)a7 )
      {
        LODWORD(a7) = 0x20000;
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 3277);
      }
      v7[5] = v22;
      v10 = a1;
    }
    v23 = a2[208];
    v13 = &WPP_RECORDER_INITIALIZED;
  }
  if ( (v23 & 1) != 0 )
  {
LABEL_31:
    v24 = v7[5];
    if ( v24 && v7[6] >= 5 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v13) = 4;
        WPP_RECORDER_SF_d(
          (_DWORD)gRimLog,
          (_DWORD)v13,
          1,
          66,
          (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids,
          v7[5]);
        v24 = a2[201];
      }
      v7[3] += v24;
      goto LABEL_41;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = 4;
      WPP_RECORDER_SF_d(
        (_DWORD)gRimLog,
        (_DWORD)v13,
        1,
        67,
        (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids,
        80);
    }
LABEL_40:
    v7[3] += 80;
  }
LABEL_41:
  if ( v7[6] <= 1 )
  {
    v28 = *v12;
    v30 = *v8;
  }
  else
  {
    v25 = v7[3] - v7[4];
    LODWORD(a7) = 0;
    if ( (unsigned int)RIMDivideToCeilingOrNearestInt(v25, 0xAu, 0, (int *)&a7) )
    {
      v27 = (unsigned int)a7;
    }
    else
    {
      v27 = 8;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v26) = 4;
        WPP_RECORDER_SF_d((_DWORD)gRimLog, v26, 1, 69, (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids, 8);
      }
    }
    v28 = v27 + *v7;
    v29 = v27 * *(_QWORD *)(v10 + 520);
    *v12 = v28;
    v30 = *((_QWORD *)v7 + 5) + v29 / 0x3E8;
    *v8 = v30;
  }
  v31 = v7[1];
  v7[1] = v28;
  *((_QWORD *)v7 + 4) = v30;
  v7[2] = v31;
  InputTraceLogging::RIM::UpdateScantime((const struct tagHPD_FRAME_SCAN_TIME *)v7);
}
