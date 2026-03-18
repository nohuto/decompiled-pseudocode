/*
 * XREFs of rimExtractParallelFrameInfoAndAbandonIncompleteFrame @ 0x1C01AFB08
 * Callers:
 *     rimExtractFrameInfoAndAbandonIncompleteFrame @ 0x1C01AF8C0 (rimExtractFrameInfoAndAbandonIncompleteFrame.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0037614 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C0043BF0 (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C0056338 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     rimHidP_GetUsageValue @ 0x1C00E63A2 (rimHidP_GetUsageValue.c)
 *     RIMAbandonPointerDeviceFrame @ 0x1C01A614C (RIMAbandonPointerDeviceFrame.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0241334 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v11; // rdi
  unsigned int v12; // esi
  unsigned int *v13; // rbx
  PDEVICE_OBJECT v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rcx
  unsigned int v18; // eax
  unsigned int v19; // eax
  unsigned int v20; // ecx
  unsigned int v21; // eax
  struct _HIDP_PREPARSED_DATA *v23; // [rsp+50h] [rbp-58h]
  __int64 v25; // [rsp+B8h] [rbp+10h]
  char *v26; // [rsp+C0h] [rbp+18h]

  v26 = a3;
  v25 = a2;
  v10 = *(_QWORD *)(a2 + 472);
  v11 = a2;
  v12 = 0;
  v13 = *(unsigned int **)(v10 + 760);
  v23 = *(struct _HIDP_PREPARSED_DATA **)(*(_QWORD *)(a2 + 456) + 16LL);
  v14 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(a2) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
  {
    LOBYTE(a2) = 0;
  }
  LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( (_BYTE)a2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      a2,
      (_DWORD)a3,
      (_DWORD)gRimLog,
      4,
      1,
      52,
      (__int64)&WPP_1efb6e2ef4cb3417e9748b712cab1da4_Traceguids);
  if ( (*(_DWORD *)(v10 + 360) & 2) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, a2, a3);
  if ( !v13 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14, a2, a3);
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
        (_DWORD)a3,
        (_DWORD)gRimLog,
        3,
        1,
        53,
        (__int64)&WPP_1efb6e2ef4cb3417e9748b712cab1da4_Traceguids,
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
  if ( rimHidP_GetUsageValue(HidP_Input, 0xDu, 0, 0x54u, a5, v23, v26, a4) >= 0 )
  {
    v17 = *a5;
    v18 = v13[9];
    if ( !(_DWORD)v17 )
    {
      if ( v18 )
      {
        v20 = *v13;
        if ( v18 <= *v13 )
        {
          v20 = v13[9];
          *a8 = 1;
          v21 = 0;
        }
        else
        {
          v21 = v18 - v20;
        }
        v13[9] = v21;
        *a6 = v20;
      }
      else
      {
        *a7 = 1;
        if ( *a6 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v15, v16);
      }
      goto LABEL_55;
    }
    if ( v18 )
    {
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v15) = 0;
      }
      if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_(
          WPP_GLOBAL_Control->AttachedDevice,
          v15,
          v16,
          (_DWORD)gRimLog,
          4,
          1,
          54,
          (__int64)&WPP_1efb6e2ef4cb3417e9748b712cab1da4_Traceguids);
      }
      RIMAbandonPointerDeviceFrame(a1, v25);
      v17 = *a5;
    }
    if ( (unsigned int)v17 <= *(_DWORD *)(v10 + 768) )
    {
      v19 = *v13;
      if ( (unsigned int)v17 <= *v13 )
      {
        *a8 = 1;
        LODWORD(v15) = 0;
        v19 = v17;
      }
      else
      {
        LODWORD(v15) = v17 - v19;
      }
      *a6 = v19;
      v13[9] = v15;
      *a7 = 1;
      goto LABEL_55;
    }
    if ( *a6 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v17, v15, v16);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v15) = 0;
    }
    if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_dd(
        WPP_GLOBAL_Control->AttachedDevice,
        v15,
        v16,
        (_DWORD)gRimLog,
        4,
        1,
        55,
        (__int64)&WPP_1efb6e2ef4cb3417e9748b712cab1da4_Traceguids,
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
      || (LOBYTE(v15) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v15) = 0;
    }
    if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v15,
        v16,
        (_DWORD)gRimLog,
        4,
        1,
        56,
        (__int64)&WPP_1efb6e2ef4cb3417e9748b712cab1da4_Traceguids);
    }
    goto LABEL_63;
  }
  *a6 = *v13;
  *a9 = 1;
LABEL_55:
  *a10 = *((_WORD *)v13 + 3);
LABEL_64:
  LOBYTE(v15) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
             && (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0
             && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
  if ( (_BYTE)v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v16) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_D(
      WPP_GLOBAL_Control->AttachedDevice,
      v15,
      v16,
      (_DWORD)gRimLog,
      4,
      1,
      57,
      (__int64)&WPP_1efb6e2ef4cb3417e9748b712cab1da4_Traceguids,
      v12);
  }
  return v12;
}
