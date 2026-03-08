/*
 * XREFs of RIMIDEGetTimeStampDelta @ 0x1C01C3440
 * Callers:
 *     RIMIDEInjectHIDReportFromPointerInfo @ 0x1C01C3E48 (RIMIDEInjectHIDReportFromPointerInfo.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_dd @ 0x1C00052A0 (WPP_RECORDER_AND_TRACE_SF_dd.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0075234 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00E1640 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_AND_TRACE_SF_ii @ 0x1C0159308 (WPP_RECORDER_AND_TRACE_SF_ii.c)
 *     RIMIDEGetQpcBasedTouchStackTime @ 0x1C01C33F0 (RIMIDEGetQpcBasedTouchStackTime.c)
 *     RIMIDEValidateInjectionQpcCount @ 0x1C01C5204 (RIMIDEValidateInjectionQpcCount.c)
 *     RIMIDEValidateInjectionTime @ 0x1C01C530C (RIMIDEValidateInjectionTime.c)
 *     WPP_RECORDER_AND_TRACE_SF_didi @ 0x1C01C59F4 (WPP_RECORDER_AND_TRACE_SF_didi.c)
 */

__int64 __fastcall RIMIDEGetTimeStampDelta(__int64 a1, __int64 a2, unsigned int *a3)
{
  int v3; // r11d
  __int64 v4; // rax
  unsigned __int64 v5; // r12
  int v6; // r9d
  int v7; // edx
  __int64 v9; // rdi
  __int64 v10; // rax
  __int64 v11; // rcx
  _DWORD *v12; // r13
  int v13; // r10d
  __int64 v14; // rdx
  unsigned int v15; // ebp
  char v16; // bl
  int v17; // ebx
  int v18; // edx
  int v19; // r8d
  int v20; // r11d
  unsigned int v21; // ebp
  int v22; // eax
  int v23; // edx
  int v24; // r8d
  int v25; // ecx
  int v26; // r13d
  unsigned int v27; // ecx
  int v28; // edx
  int v29; // r8d
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rdx
  int v32; // [rsp+60h] [rbp-68h]
  __int64 v33; // [rsp+68h] [rbp-60h]
  __int64 v34; // [rsp+70h] [rbp-58h]
  int v35; // [rsp+D0h] [rbp+8h]
  unsigned int *v36; // [rsp+E0h] [rbp+18h]
  unsigned int v37; // [rsp+E8h] [rbp+20h]

  v36 = a3;
  v3 = *(_DWORD *)(a2 + 64);
  v4 = a1 + 272;
  v5 = *(_QWORD *)(a2 + 80);
  v6 = 0;
  v35 = v3;
  v7 = 200;
  if ( !a1 )
    v4 = 200LL;
  if ( (*(_DWORD *)v4 & 0x80u) != 0 )
  {
    v9 = *(_QWORD *)(a1 + 456);
    v10 = a1 + 544;
    if ( !a1 )
      v10 = 472LL;
    v11 = *(_QWORD *)(v9 + 48);
    v12 = (_DWORD *)(v9 + 20);
    v13 = *(_DWORD *)(v9 + 28);
    v32 = v13;
    v14 = *(_QWORD *)v10;
    v33 = *(_QWORD *)v10;
    v34 = v11;
    if ( !*(_DWORD *)(*(_QWORD *)v10 + 1008LL) )
    {
      *v12 = 0;
      *(_QWORD *)(v9 + 24) = 0LL;
      *(_DWORD *)(v9 + 36) = 0;
      *(_QWORD *)(v9 + 40) = 0LL;
      *(_QWORD *)(v9 + 48) = 0LL;
      *(_DWORD *)(v9 + 56) = 0;
    }
    if ( v3 && v5 || *v12 && v5 || *(_QWORD *)(v9 + 40) && v3 )
    {
      v15 = 0;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (v16 = 1, (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0)
        || BYTE1(WPP_GLOBAL_Control->Timer) < 2u )
      {
        v16 = 0;
      }
      if ( v16 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v14) = v16;
        LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_didi(WPP_GLOBAL_Control->AttachedDevice, v14, (_DWORD)a3, 0);
      }
      return v15;
    }
    if ( v5 || *(_QWORD *)(v9 + 40) )
    {
      v26 = 0;
      v17 = 1;
      LOBYTE(v6) = *(_DWORD *)(v14 + 1008) == 0;
      v37 = 1;
      if ( !(unsigned int)RIMIDEValidateInjectionQpcCount(v5, v11, *(_QWORD *)(v14 + 800), v6, *(_DWORD *)(v9 + 56)) )
      {
        v15 = 0;
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
          || (LOBYTE(v28) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
        {
          LOBYTE(v28) = 0;
        }
        if ( (_BYTE)v28 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v29) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
          WPP_RECORDER_AND_TRACE_SF_ii(
            WPP_GLOBAL_Control->AttachedDevice,
            v28,
            v29,
            (_DWORD)gRimLog,
            2,
            1,
            57,
            (__int64)&WPP_9f96ae63cfc83aaf8fc02e72e74825ab_Traceguids,
            v5,
            v34);
        }
        return v15;
      }
      if ( v5 <= *(_QWORD *)(v9 + 40) )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, 2591);
      v30 = 10000 * (v5 - *(_QWORD *)(v9 + 40)) / gliQpcFreq.QuadPart;
      v31 = 10000 * (v5 - *(_QWORD *)(v9 + 40)) % gliQpcFreq.QuadPart;
      v21 = v30;
      if ( *(_DWORD *)(v33 + 1008) )
      {
        if ( (_DWORD)v30 == *(_DWORD *)(v9 + 32) )
        {
          v37 = 0;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (LOBYTE(v31) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
          {
            LOBYTE(v31) = 0;
          }
          if ( (_BYTE)v31 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v29) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v31,
              v29,
              (_DWORD)gRimLog,
              2,
              1,
              59,
              (__int64)&WPP_9f96ae63cfc83aaf8fc02e72e74825ab_Traceguids);
          }
        }
      }
      else
      {
        *(_QWORD *)(v9 + 40) = v5;
        v21 = 0;
      }
      goto LABEL_47;
    }
    v17 = 1;
    LOBYTE(v6) = *(_DWORD *)(v14 + 1008) == 0;
    v37 = 1;
    v15 = 1;
    if ( !(unsigned int)RIMIDEValidateInjectionTime(v3, v13, *(_DWORD *)(v14 + 792), v6, *(_DWORD *)(v9 + 36)) )
    {
      v15 = 0;
      v37 = 0;
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
        || (LOBYTE(v18) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
      {
        LOBYTE(v18) = 0;
      }
      if ( (_BYTE)v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        WPP_RECORDER_AND_TRACE_SF_dd(
          WPP_GLOBAL_Control->AttachedDevice,
          v18,
          v19,
          (_DWORD)gRimLog,
          2,
          1,
          56,
          (__int64)&WPP_9f96ae63cfc83aaf8fc02e72e74825ab_Traceguids,
          v20,
          v32);
        v20 = v35;
      }
    }
    if ( !v15 )
      return v15;
    v21 = 10 * (v20 - *v12);
    v22 = RIMIDEGetQpcBasedTouchStackTime();
    if ( !*(_DWORD *)(v33 + 1008) )
    {
      v25 = v35;
      v21 = 0;
      *v12 = v35;
      v26 = 1;
      *(_DWORD *)(v9 + 24) = v22;
LABEL_48:
      *(_DWORD *)(v9 + 32) = v21;
      if ( v26 )
      {
        if ( !v32 || v25 )
          v17 = 0;
        *(_DWORD *)(v9 + 36) = v17;
        *(_DWORD *)(v9 + 28) = v25;
      }
      else
      {
        if ( !v34 || v5 )
          v17 = 0;
        *(_DWORD *)(v9 + 56) = v17;
        *(_QWORD *)(v9 + 48) = v5;
      }
      *v36 = v21;
      return v37;
    }
    if ( !v21 )
    {
      v27 = *(_DWORD *)(v9 + 32);
      v21 = v22 - *(_DWORD *)(v9 + 24);
      if ( v21 <= v27 )
      {
        if ( v27 - v21 >= 5 )
        {
          v37 = 0;
          if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
            || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
            || (LOBYTE(v23) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
          {
            LOBYTE(v23) = 0;
          }
          if ( (_BYTE)v23 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v24) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_(
              WPP_GLOBAL_Control->AttachedDevice,
              v23,
              v24,
              (_DWORD)gRimLog,
              2,
              1,
              58,
              (__int64)&WPP_9f96ae63cfc83aaf8fc02e72e74825ab_Traceguids);
            v26 = 1;
            goto LABEL_47;
          }
        }
        else
        {
          v21 = v27 + 1;
        }
      }
    }
    v26 = 1;
LABEL_47:
    v25 = v35;
    goto LABEL_48;
  }
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) == 0
    || (LOBYTE(v7) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 2u) )
  {
    LOBYTE(v7) = 0;
  }
  if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a3) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
    WPP_RECORDER_AND_TRACE_SF_(
      WPP_GLOBAL_Control->AttachedDevice,
      v7,
      (_DWORD)a3,
      (_DWORD)gRimLog,
      2,
      1,
      54,
      (__int64)&WPP_9f96ae63cfc83aaf8fc02e72e74825ab_Traceguids);
  }
  return 0LL;
}
