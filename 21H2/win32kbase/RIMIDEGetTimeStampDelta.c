/*
 * XREFs of RIMIDEGetTimeStampDelta @ 0x1C016877C
 * Callers:
 *     RIMIDEInjectHIDReportFromPointerInfo @ 0x1C0168EBC (RIMIDEInjectHIDReportFromPointerInfo.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CBE8 (WPP_RECORDER_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE6A8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     WPP_RECORDER_SF_ii @ 0x1C0117434 (WPP_RECORDER_SF_ii.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C013705C (WPP_RECORDER_SF_Dd.c)
 *     RIMIDEGetQpcBasedTouchStackTime @ 0x1C01686F4 (RIMIDEGetQpcBasedTouchStackTime.c)
 *     RIMIDEValidateInjectionQpcCount @ 0x1C0169E90 (RIMIDEValidateInjectionQpcCount.c)
 *     RIMIDEValidateInjectionTime @ 0x1C0169F3C (RIMIDEValidateInjectionTime.c)
 *     WPP_RECORDER_SF_didi @ 0x1C016A8F0 (WPP_RECORDER_SF_didi.c)
 */

__int64 __fastcall RIMIDEGetTimeStampDelta(__int64 a1, __int64 a2, unsigned int *a3, int a4)
{
  int v4; // r15d
  __int64 v5; // rax
  unsigned __int64 v6; // r14
  int v7; // ebp
  unsigned int v8; // r12d
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rsi
  int v13; // edx
  __int64 v14; // r13
  __int64 v15; // rax
  int v16; // edx
  __int64 v17; // r11
  unsigned int v18; // edi
  int v19; // eax
  unsigned int v20; // ecx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  int v23; // edx
  int v24; // [rsp+B8h] [rbp+10h]
  int v26; // [rsp+C8h] [rbp+20h]

  v4 = *(_DWORD *)(a2 + 64);
  v5 = a1 + 288;
  v6 = *(_QWORD *)(a2 + 80);
  v7 = 1;
  if ( !a1 )
    v5 = 200LL;
  v8 = 1;
  if ( (*(_DWORD *)v5 & 0x80u) != 0 )
  {
    v10 = *(_QWORD *)(a1 + 472);
    v11 = a1 + 568;
    if ( !a1 )
      v11 = 480LL;
    v12 = *(_QWORD *)(v10 + 48);
    v13 = *(_DWORD *)(v10 + 28);
    v26 = v13;
    v14 = *(_QWORD *)v11;
    if ( !*(_DWORD *)(*(_QWORD *)v11 + 952LL) )
    {
      *(_QWORD *)(v10 + 20) = 0LL;
      *(_DWORD *)(v10 + 28) = 0;
      *(_DWORD *)(v10 + 36) = 0;
      *(_QWORD *)(v10 + 40) = 0LL;
      *(_QWORD *)(v10 + 48) = 0LL;
      *(_DWORD *)(v10 + 56) = 0;
    }
    if ( v4 && v6 || *(_DWORD *)(v10 + 20) && v6 || (v15 = *(_QWORD *)(v10 + 40)) != 0 && v4 )
    {
      v8 = 0;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_didi(a1, v13, (_DWORD)a3, a4);
      return v8;
    }
    if ( v6 || v15 )
    {
      v24 = 0;
      if ( !(unsigned int)RIMIDEValidateInjectionQpcCount(
                            v6,
                            v12,
                            *(_QWORD *)(v14 + 752),
                            *(_DWORD *)(v14 + 952) == 0,
                            *(_DWORD *)(v10 + 56)) )
      {
        v8 = 0;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_ii(
            (__int64)gRimLog,
            2u,
            1u,
            0x3Bu,
            (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids,
            v6,
            v12);
        return v8;
      }
      v21 = *(_QWORD *)(v10 + 40);
      if ( v6 <= v21 )
      {
        MicrosoftTelemetryAssertTriggeredArgsKM((int)"IXPTelAssert", 0x20000, 2608);
        v21 = *(_QWORD *)(v10 + 40);
      }
      v22 = 10000 * (v6 - v21) / gliQpcFreq.QuadPart;
      v23 = 0;
      v18 = v22;
      if ( *(_DWORD *)(v14 + 952) )
      {
        if ( (_DWORD)v22 == *(_DWORD *)(v10 + 32) )
        {
          v8 = 0;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v23) = 2;
            WPP_RECORDER_SF_((_DWORD)gRimLog, v23, 1, 61, (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids);
          }
        }
      }
      else
      {
        *(_QWORD *)(v10 + 40) = v6;
        v18 = 0;
      }
    }
    else
    {
      v24 = 1;
      if ( !(unsigned int)RIMIDEValidateInjectionTime(
                            v4,
                            v13,
                            *(_DWORD *)(v14 + 744),
                            *(_DWORD *)(v14 + 952) == 0,
                            *(_DWORD *)(v10 + 36)) )
      {
        v8 = 0;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Dd(
            (__int64)gRimLog,
            2u,
            1u,
            0x3Au,
            (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids,
            v4,
            v16);
        return v8;
      }
      v18 = 10 * (v4 - *(_DWORD *)(v10 + 20));
      v19 = RIMIDEGetQpcBasedTouchStackTime(v17);
      if ( *(_DWORD *)(v14 + 952) )
      {
        if ( !v18 )
        {
          v20 = *(_DWORD *)(v10 + 32);
          v18 = v19 - *(_DWORD *)(v10 + 24);
          if ( v18 <= v20 )
          {
            if ( v20 - v18 >= 5 )
            {
              v8 = 0;
              if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                WPP_RECORDER_SF_((_DWORD)gRimLog, 2, 1, 60, (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids);
            }
            else
            {
              v18 = v20 + 1;
            }
          }
        }
      }
      else
      {
        *(_DWORD *)(v10 + 20) = v4;
        v18 = 0;
        *(_DWORD *)(v10 + 24) = v19;
      }
    }
    *(_DWORD *)(v10 + 32) = v18;
    if ( v24 )
    {
      if ( !v26 || v4 )
        v7 = 0;
      *(_DWORD *)(v10 + 36) = v7;
      *(_DWORD *)(v10 + 28) = v4;
    }
    else
    {
      if ( !v12 || v6 )
        v7 = 0;
      *(_DWORD *)(v10 + 56) = v7;
      *(_QWORD *)(v10 + 48) = v6;
    }
    *a3 = v18;
    return v8;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_((_DWORD)gRimLog, 2, 1, 56, (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids);
  return 0LL;
}
