/*
 * XREFs of rimExtractParallelFrameInfoAndAbandonIncompleteFrame @ 0x1C017A474
 * Callers:
 *     rimExtractFrameInfoAndAbandonIncompleteFrame @ 0x1C017A200 (rimExtractFrameInfoAndAbandonIncompleteFrame.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0047F78 (WPP_RECORDER_SF_d.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C013732C (WPP_RECORDER_SF_Dd.c)
 *     ?TraceLoggingLargeDeviceParallelCount@@YAXII@Z @ 0x1C013AC9C (-TraceLoggingLargeDeviceParallelCount@@YAXII@Z.c)
 *     rimHidP_GetUsageValue @ 0x1C016359C (rimHidP_GetUsageValue.c)
 *     RIMAbandonPointerDeviceFrame @ 0x1C0171344 (RIMAbandonPointerDeviceFrame.c)
 */

__int64 __fastcall rimExtractParallelFrameInfoAndAbandonIncompleteFrame(
        __int64 a1,
        __int64 a2,
        char *a3,
        unsigned int a4,
        unsigned int *a5,
        unsigned int *a6,
        _DWORD *a7,
        _DWORD *a8,
        _DWORD *a9,
        _WORD *a10)
{
  __int64 v10; // r13
  __int64 v11; // rbp
  unsigned int v12; // ebx
  unsigned int *v13; // rdi
  unsigned int v14; // edx
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // eax
  __int64 v21; // [rsp+28h] [rbp-70h]
  __int64 v22; // [rsp+30h] [rbp-68h]
  struct _HIDP_PREPARSED_DATA *v23; // [rsp+40h] [rbp-58h]

  v10 = a2;
  v11 = *(_QWORD *)(a2 + 480);
  v12 = 0;
  v13 = *(unsigned int **)(v11 + 712);
  v23 = *(struct _HIDP_PREPARSED_DATA **)(*(_QWORD *)(a2 + 464) + 16LL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, a2, 1, 52, (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids);
  }
  if ( (*(_DWORD *)(v11 + 312) & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2233);
  if ( !v13 )
    MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2234);
  if ( (*(_DWORD *)(v10 + 184) & 0x2000) == 0 && *v13 > *(_DWORD *)(v11 + 720) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Dd(
        (__int64)gRimLog,
        3u,
        1u,
        0x35u,
        (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids,
        *v13,
        *(_DWORD *)(v11 + 720));
    TraceLoggingLargeDeviceParallelCount();
  }
  *a8 = 0;
  *a5 = 0;
  *a6 = 0;
  *a7 = 0;
  *a10 = 0;
  *a9 = 0;
  if ( rimHidP_GetUsageValue(HidP_Input, 0xDu, 0, 0x54u, a5, v23, a3, a4) < 0 )
  {
    if ( (v13[8] & 1) == 0 )
    {
      *a6 = *v13;
      *a9 = 1;
LABEL_36:
      *a10 = *((_WORD *)v13 + 3);
      goto LABEL_40;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v14) = 4;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v14, 1, 56, (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids);
    }
  }
  else
  {
    v15 = v13[9];
    if ( !*a5 )
    {
      if ( v15 )
      {
        v18 = *v13;
        if ( v15 <= *v13 )
        {
          *a8 = 1;
          v18 = v15;
          v19 = 0;
        }
        else
        {
          v19 = v15 - v18;
        }
        v13[9] = v19;
        *a6 = v18;
      }
      else
      {
        *a7 = 1;
        if ( *a6 )
          MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2324);
      }
      goto LABEL_36;
    }
    if ( v15 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = 4;
        WPP_RECORDER_SF_((_DWORD)gRimLog, v14, 1, 54, (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids);
      }
      RIMAbandonPointerDeviceFrame(a1, v10);
    }
    v16 = *a5;
    if ( *a5 <= *(_DWORD *)(v11 + 720) )
    {
      v17 = *v13;
      if ( v16 <= *v13 )
      {
        v14 = 0;
        *a8 = 1;
        v17 = v16;
      }
      else
      {
        v14 = v16 - v17;
      }
      *a6 = v17;
      v13[9] = v14;
      *a7 = 1;
      goto LABEL_36;
    }
    if ( *a6 )
      MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2291);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v22) = *(_DWORD *)(v11 + 720);
      LODWORD(v21) = *a5;
      WPP_RECORDER_SF_Dd(
        (__int64)gRimLog,
        4u,
        1u,
        0x37u,
        (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids,
        v21,
        v22);
    }
  }
  v12 = -1073741668;
LABEL_40:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v14) = 4;
    WPP_RECORDER_SF_d((_DWORD)gRimLog, v14, 1, 57, (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids, v12);
  }
  return v12;
}
