/*
 * XREFs of rimExtractScantime @ 0x1C01B0738
 * Callers:
 *     rimUpdatePointerDeviceFrameScanTime @ 0x1C01B2A14 (rimUpdatePointerDeviceFrameScanTime.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     rimHidP_GetUsageValue @ 0x1C00E63A2 (rimHidP_GetUsageValue.c)
 *     ?UpdateScantime@RIM@InputTraceLogging@@SAXPEBUtagHPD_FRAME_SCAN_TIME@@_NK@Z @ 0x1C00E6F1A (-UpdateScantime@RIM@InputTraceLogging@@SAXPEBUtagHPD_FRAME_SCAN_TIME@@_NK@Z.c)
 *     RIMDivideToCeilingOrNearestInt @ 0x1C01AD7CC (RIMDivideToCeilingOrNearestInt.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  unsigned __int64 *v8; // r14
  int UsageValue; // eax
  __int64 v12; // rcx
  int v13; // r8d
  unsigned int *v14; // r15
  PDEVICE_OBJECT *v15; // rdx
  __int64 v16; // r8
  unsigned int v17; // eax
  unsigned int v18; // r9d
  unsigned int v19; // ecx
  int v20; // edx
  unsigned int v21; // eax
  unsigned int v22; // ecx
  __int64 v23; // rdx
  __int64 v24; // rcx
  unsigned int v25; // edi
  unsigned int v26; // eax
  unsigned int v27; // r9d
  __int64 v28; // rcx
  int v29; // edx
  int v30; // r8d
  unsigned int v31; // edi
  unsigned int v32; // r8d
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rdx
  unsigned int v35; // eax

  v7 = a2 + 208;
  v8 = a6;
  LODWORD(a6) = 0;
  ++a2[214];
  UsageValue = rimHidP_GetUsageValue(HidP_Input, 0xDu, 0, 0x56u, (unsigned int *)&a6, a3, a4, a5);
  v14 = a7;
  v15 = &WPP_GLOBAL_Control;
  if ( UsageValue < 0 )
  {
    LOBYTE(v15) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u;
    if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v13) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        (_DWORD)v15,
        v13,
        (_DWORD)gRimLog,
        2,
        1,
        68,
        (__int64)&WPP_1efb6e2ef4cb3417e9748b712cab1da4_Traceguids);
    }
    v7[3] += 80;
  }
  else
  {
    v16 = v7[6];
    if ( (_DWORD)v16 == 1 )
    {
      if ( *v7 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, &WPP_GLOBAL_Control, v16);
        if ( v7[6] != 1 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v15, v16);
      }
      if ( v7[2] )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v15, v16);
      if ( v7[1] )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v15, v16);
      if ( v7[3] )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v15, v16);
      if ( v7[5] )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v15, v16);
      if ( (v7[12] & 1) != 0 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v15, v16);
      *v7 = *v14;
      *((_QWORD *)v7 + 5) = *v8;
      v17 = (unsigned int)a6;
      v7[3] = (unsigned int)a6;
      v7[4] = v17;
    }
    else
    {
      if ( (v7[12] & 1) != 0 )
        goto LABEL_37;
      v18 = v7[3];
      v19 = a2[222];
      v20 = v18 % v19;
      if ( (unsigned int)a6 >= v18 % v19 )
      {
        v21 = a2[215];
      }
      else
      {
        v21 = ++v7[7];
        v19 = a2[222];
      }
      v22 = (_DWORD)a6 + v21 * v19;
      if ( v22 <= v18 )
      {
        LOBYTE(v20) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                   && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                   && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
        if ( (_BYTE)v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_(
            WPP_GLOBAL_Control->AttachedDevice,
            v20,
            v16,
            (_DWORD)gRimLog,
            4,
            1,
            65,
            (__int64)&WPP_1efb6e2ef4cb3417e9748b712cab1da4_Traceguids);
        }
        v7[12] |= 1u;
        v26 = v7[12];
      }
      else
      {
        LODWORD(a7) = 0;
        v7[3] = v22;
        if ( (unsigned int)RIMDivideToCeilingOrNearestInt(v22 - v7[4], (unsigned int)(v16 - 1), 1LL, (int *)&a7) )
        {
          v25 = (unsigned int)a7;
          if ( !(_DWORD)a7 )
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v24, v23, v16);
          v7[5] = v25;
        }
        v26 = a2[220];
      }
      v15 = &WPP_GLOBAL_Control;
      if ( (v26 & 1) != 0 )
      {
LABEL_37:
        v27 = v7[5];
        if ( v27 && v7[6] >= 5 )
        {
          LOBYTE(v15) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_D(
              WPP_GLOBAL_Control->AttachedDevice,
              (_DWORD)v15,
              v16,
              (_DWORD)gRimLog,
              4,
              1,
              66,
              (__int64)&WPP_1efb6e2ef4cb3417e9748b712cab1da4_Traceguids,
              v27);
          }
          v7[3] += v7[5];
        }
        else
        {
          LOBYTE(v15) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_D(
              WPP_GLOBAL_Control->AttachedDevice,
              (_DWORD)v15,
              v16,
              (_DWORD)gRimLog,
              4,
              1,
              67,
              (__int64)&WPP_1efb6e2ef4cb3417e9748b712cab1da4_Traceguids,
              80);
          }
          v7[3] += 80;
        }
      }
    }
  }
  if ( v7[6] <= 1 )
  {
    v32 = *v14;
    v34 = *v8;
  }
  else
  {
    v28 = v7[3] - v7[4];
    LODWORD(a7) = 0;
    if ( (unsigned int)RIMDivideToCeilingOrNearestInt(v28, 10LL, 0LL, (int *)&a7) )
    {
      v31 = (unsigned int)a7;
    }
    else
    {
      LOBYTE(v29) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                 && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
                 && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
      v31 = 8;
      if ( (_BYTE)v29 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v30) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_D(
          WPP_GLOBAL_Control->AttachedDevice,
          v29,
          v30,
          (_DWORD)gRimLog,
          4,
          1,
          69,
          (__int64)&WPP_1efb6e2ef4cb3417e9748b712cab1da4_Traceguids,
          8);
      }
    }
    v32 = v31 + *v7;
    v33 = v31 * *(_QWORD *)(a1 + 744);
    *v14 = v32;
    v34 = *((_QWORD *)v7 + 5) + v33 / 0x3E8;
    *v8 = v34;
  }
  v35 = v7[1];
  v7[1] = v32;
  *((_QWORD *)v7 + 4) = v34;
  v7[2] = v35;
  InputTraceLogging::RIM::UpdateScantime((const struct tagHPD_FRAME_SCAN_TIME *)v7);
}
