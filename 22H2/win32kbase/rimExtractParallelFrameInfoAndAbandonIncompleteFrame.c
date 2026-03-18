/*
 * XREFs of rimExtractParallelFrameInfoAndAbandonIncompleteFrame @ 0x1C01A9174
 * Callers:
 *     rimExtractFrameInfoAndAbandonIncompleteFrame @ 0x1C00E3070 (rimExtractFrameInfoAndAbandonIncompleteFrame.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C000A528 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     WPP_RECORDER_AND_TRACE_SF_D @ 0x1C00665BC (WPP_RECORDER_AND_TRACE_SF_D.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     rimHidP_GetUsageValue @ 0x1C00E0DCA (rimHidP_GetUsageValue.c)
 *     RIMAbandonPointerDeviceFrame @ 0x1C019F6F0 (RIMAbandonPointerDeviceFrame.c)
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
  char v14; // dl
  unsigned int v15; // edx
  int v16; // r8d
  unsigned int v17; // eax
  unsigned int v18; // eax
  unsigned int v19; // ecx
  char v20; // dl
  unsigned int v21; // ecx
  unsigned int v22; // eax
  __int64 v24; // [rsp+40h] [rbp-68h]
  __int64 v25; // [rsp+48h] [rbp-60h]
  int v26; // [rsp+50h] [rbp-58h]
  __int64 v27; // [rsp+58h] [rbp-50h]
  __int64 v29; // [rsp+B8h] [rbp+10h]
  __int64 v30; // [rsp+C0h] [rbp+18h]

  v30 = a3;
  v29 = a2;
  v10 = *(_QWORD *)(a2 + 472);
  v11 = a2;
  v12 = 0;
  v13 = *(unsigned int **)(v10 + 760);
  v27 = *(_QWORD *)(*(_QWORD *)(a2 + 456) + 16LL);
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
      (__int64)&WPP_acebe0338cf732913f05b3829fd55bbc_Traceguids);
  }
  if ( (*(_DWORD *)(v10 + 360) & 2) == 0 )
  {
    v26 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2265);
  }
  if ( !v13 )
  {
    v26 = 0x20000;
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2266);
  }
  if ( (*(_DWORD *)(v11 + 184) & 0x2000) == 0 && *v13 > *(_DWORD *)(v10 + 768) )
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (v14 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 3u) )
    {
      v14 = 0;
    }
    if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_AND_TRACE_SF_dd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v14,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gRimLog,
        3u,
        1u,
        0x35u,
        (__int64)&WPP_acebe0338cf732913f05b3829fd55bbc_Traceguids,
        *v13,
        *(_DWORD *)(v10 + 768),
        v26);
  }
  *a10 = 0;
  *a5 = 0;
  *a6 = 0;
  *a7 = 0;
  *a8 = 0;
  *a9 = 0;
  if ( (int)rimHidP_GetUsageValue(0LL, 13LL, 0LL, 84LL, (__int64)a5, v27, v30, a4) >= 0 )
  {
    v17 = v13[9];
    if ( !*a5 )
    {
      if ( v17 )
      {
        v21 = *v13;
        if ( v17 <= *v13 )
        {
          v21 = v13[9];
          *a8 = 1;
          v22 = 0;
        }
        else
        {
          v22 = v17 - v21;
        }
        v13[9] = v22;
        *a6 = v21;
      }
      else
      {
        *a7 = 1;
        if ( *a6 )
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2355);
      }
      goto LABEL_55;
    }
    if ( v17 )
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
          (__int64)&WPP_acebe0338cf732913f05b3829fd55bbc_Traceguids);
      }
      RIMAbandonPointerDeviceFrame(a1, v29);
    }
    v18 = *a5;
    if ( *a5 <= *(_DWORD *)(v10 + 768) )
    {
      v19 = *v13;
      if ( v18 <= *v13 )
      {
        *a8 = 1;
        v15 = 0;
        v19 = v18;
      }
      else
      {
        v15 = v18 - v19;
      }
      *a6 = v19;
      v13[9] = v15;
      *a7 = 1;
      goto LABEL_55;
    }
    if ( *a6 )
      MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2322);
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
      || (v20 = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      v20 = 0;
    }
    if ( v20 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LODWORD(v25) = *(_DWORD *)(v10 + 768);
      LODWORD(v24) = *a5;
      WPP_RECORDER_AND_TRACE_SF_dd(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        v20,
        WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED,
        (__int64)gRimLog,
        4u,
        1u,
        0x37u,
        (__int64)&WPP_acebe0338cf732913f05b3829fd55bbc_Traceguids,
        v24,
        v25);
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
        (__int64)&WPP_acebe0338cf732913f05b3829fd55bbc_Traceguids);
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
      (__int64)&WPP_acebe0338cf732913f05b3829fd55bbc_Traceguids,
      v12);
  }
  return v12;
}
