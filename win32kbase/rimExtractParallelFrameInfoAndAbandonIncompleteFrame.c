/*
 * XREFs of rimExtractParallelFrameInfoAndAbandonIncompleteFrame @ 0x1C01D724C
 * Callers:
 *     rimExtractFrameInfoAndAbandonIncompleteFrame @ 0x1C00F1544 (rimExtractFrameInfoAndAbandonIncompleteFrame.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C00052A0 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C000F0BC (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimHidP_GetUsageValue @ 0x1C00EF9AA (rimHidP_GetUsageValue.c)
 *     RIMAbandonPointerDeviceFrame @ 0x1C01CD2D0 (RIMAbandonPointerDeviceFrame.c)
 */

__int64 __fastcall rimExtractParallelFrameInfoAndAbandonIncompleteFrame(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned int *a5,
        unsigned int *a6,
        _DWORD *a7,
        _DWORD *a8,
        _DWORD *a9,
        _WORD *a10)
{
  __int64 v10; // r13
  __int64 v11; // rdi
  unsigned int v12; // esi
  unsigned int *v13; // rbx
  unsigned int v14; // edx
  int v15; // r8d
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // eax
  __int64 v22; // [rsp+58h] [rbp-50h]
  __int64 v24; // [rsp+B8h] [rbp+10h]
  __int64 v25; // [rsp+C0h] [rbp+18h]

  v25 = a3;
  v24 = a2;
  v10 = *(_QWORD *)(a2 + 472);
  v11 = a2;
  v12 = 0;
  v13 = *(unsigned int **)(v10 + 760);
  v22 = *(_QWORD *)(*(_QWORD *)(a2 + 456) + 16LL);
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      a3,
      (_DWORD)gRimLog,
      4,
      1,
      52,
      (__int64)&WPP_588086c926cf32b63ac6e140c3a41c5a_Traceguids);
  }
  if ( (*(_DWORD *)(v10 + 360) & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2277);
  if ( !v13 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2278);
  if ( (*(_DWORD *)(v11 + 184) & 0x2000) == 0 && *v13 > *(_DWORD *)(v10 + 768) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      LOBYTE(a2) = 0;
    }
    if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_dd(
        WPP_GLOBAL_Control->AttachedDevice,
        a2,
        a3,
        (_DWORD)gRimLog,
        3,
        1,
        53,
        (__int64)&WPP_588086c926cf32b63ac6e140c3a41c5a_Traceguids,
        *v13,
        *(_DWORD *)(v10 + 768));
    }
  }
  *a10 = 0;
  *a5 = 0;
  *a6 = 0;
  *a7 = 0;
  *a8 = 0;
  *a9 = 0;
  if ( (int)rimHidP_GetUsageValue(0LL, 13LL, 0LL, 84LL, (__int64)a5, v22, v25, a4) >= 0 )
  {
    v16 = v13[9];
    if ( !*a5 )
    {
      if ( v16 )
      {
        v19 = *v13;
        if ( v16 <= *v13 )
        {
          v19 = v13[9];
          *a8 = 1;
          v20 = 0;
        }
        else
        {
          v20 = v16 - v19;
        }
        v13[9] = v20;
        *a6 = v19;
      }
      else
      {
        *a7 = 1;
        if ( *a6 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2367);
      }
      goto LABEL_55;
    }
    if ( v16 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v14) = 0;
      }
      if ( (_BYTE)v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v14,
          v15,
          (_DWORD)gRimLog,
          4,
          1,
          54,
          (__int64)&WPP_588086c926cf32b63ac6e140c3a41c5a_Traceguids);
      }
      RIMAbandonPointerDeviceFrame(a1, v24);
    }
    v17 = *a5;
    if ( *a5 <= *(_DWORD *)(v10 + 768) )
    {
      v18 = *v13;
      if ( v17 <= *v13 )
      {
        *a8 = 1;
        v14 = 0;
        v18 = v17;
      }
      else
      {
        v14 = v17 - v18;
      }
      *a6 = v18;
      v13[9] = v14;
      *a7 = 1;
      goto LABEL_55;
    }
    if ( *a6 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2334);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v14) = 0;
    }
    if ( (_BYTE)v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_dd(
        WPP_GLOBAL_Control->AttachedDevice,
        v14,
        v15,
        (_DWORD)gRimLog,
        4,
        1,
        55,
        (__int64)&WPP_588086c926cf32b63ac6e140c3a41c5a_Traceguids,
        *a5,
        *(_DWORD *)(v10 + 768));
    }
LABEL_63:
    v12 = -1073741668;
    goto LABEL_64;
  }
  if ( (v13[8] & 1) != 0 )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v14) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v14) = 0;
    }
    if ( (_BYTE)v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v14,
        v15,
        (_DWORD)gRimLog,
        4,
        1,
        56,
        (__int64)&WPP_588086c926cf32b63ac6e140c3a41c5a_Traceguids);
    }
    goto LABEL_63;
  }
  *a6 = *v13;
  *a9 = 1;
LABEL_55:
  *a10 = *((_WORD *)v13 + 3);
LABEL_64:
  LOBYTE(v14) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v15) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      v14,
      v15,
      (_DWORD)gRimLog,
      4,
      1,
      57,
      (__int64)&WPP_588086c926cf32b63ac6e140c3a41c5a_Traceguids,
      v12);
  }
  return v12;
}
