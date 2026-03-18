/*
 * XREFs of HandleDeferredInput @ 0x1C0001240
 * Callers:
 *     NtUserSetInputServiceState @ 0x1C00ADCA0 (NtUserSetInputServiceState.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_qiqdd @ 0x1C0001790 (WPP_RECORDER_AND_TRACE_SF_qiqdd.c)
 *     ?UpdateISODState@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1C000187C (-UpdateISODState@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z.c)
 *     ?_UpdateTelemetryBuffer@KeyboardInputTelemetry@@AEAAX_NK@Z @ 0x1C0001974 (-_UpdateTelemetryBuffer@KeyboardInputTelemetry@@AEAAX_NK@Z.c)
 *     ?GetKeyboardInputLatency@KeyboardInputTelemetry@@CAK_K@Z @ 0x1C0001A68 (-GetKeyboardInputLatency@KeyboardInputTelemetry@@CAK_K@Z.c)
 *     ApiSetEditionDelQEntry @ 0x1C0001AA0 (ApiSetEditionDelQEntry.c)
 *     ApiSetEditionWakeSomeone @ 0x1C0001BD0 (ApiSetEditionWakeSomeone.c)
 *     WPP_RECORDER_AND_TRACE_SF_qq @ 0x1C003D298 (WPP_RECORDER_AND_TRACE_SF_qq.c)
 *     UpdateKeyStateForMessage @ 0x1C009C520 (UpdateKeyStateForMessage.c)
 *     ?LogHanging@KeyboardInputTelemetry@@CAXPEAUtagTHREADINFO@@_K@Z @ 0x1C0168CB0 (-LogHanging@KeyboardInputTelemetry@@CAXPEAUtagTHREADINFO@@_K@Z.c)
 */

void __fastcall HandleDeferredInput(__int64 a1, int a2, int a3)
{
  __int64 v3; // rbp
  _UNKNOWN **v7; // r8
  __int64 **v8; // r15
  __int64 *v9; // rdi
  __int64 v10; // r8
  int v11; // ecx
  char v12; // r14
  unsigned int ThreadId; // eax
  unsigned __int64 v14; // rcx
  bool v15; // bl
  unsigned int KeyboardInputLatency; // eax
  int v17; // eax
  int v18; // edx
  __int64 v19; // r8
  __int64 *v20; // rbx
  char v21; // cl
  int v22; // edx
  unsigned int v23; // eax
  unsigned int v24; // eax
  __int64 v25; // rax
  int v26; // r9d
  __int64 v27; // r8
  int v28; // ecx
  int v29; // [rsp+20h] [rbp-78h]
  int v30; // [rsp+28h] [rbp-70h]
  int v31; // [rsp+38h] [rbp-60h]

  v3 = *(_QWORD *)(a1 + 432);
  v7 = &WPP_RECORDER_INITIALIZED;
  v8 = (__int64 **)(v3 + 24);
  v9 = *(__int64 **)(v3 + 24);
  if ( v9 )
  {
    while ( 1 )
    {
      v10 = v9[13];
      if ( v10 != a1
        || (unsigned int)(*((_DWORD *)v9 + 6) - 256) > 9
        || (v11 = *((_DWORD *)v9 + 25), (v11 & 0x2000) == 0)
        && (v11 & 0x4000) == 0
        && ((*(_DWORD *)(v10 + 1256) & 0x1000000) == 0 || (v11 & 0x8000) != 0) )
      {
        v9 = (__int64 *)*v9;
        goto LABEL_47;
      }
      if ( (*(_DWORD *)(a1 + 1256) & 0x1000000) == 0 || (v12 = 1, a3 == *((_DWORD *)v9 + 39)) )
        v12 = 0;
      if ( a2 == 6 )
      {
        if ( v12 )
        {
LABEL_10:
          ThreadId = (unsigned int)PsGetThreadId(*(PETHREAD *)v10);
          v14 = v9[17];
          if ( v14 && dword_1C029E3FC == ThreadId )
          {
            v15 = ((*((_DWORD *)v9 + 6) - 257) & 0xFFFFFFFB) == 0;
            KeyboardInputLatency = KeyboardInputTelemetry::GetKeyboardInputLatency(v14);
            KeyboardInputTelemetry::_UpdateTelemetryBuffer(
              (KeyboardInputTelemetry *)&`KeyboardInputTelemetry::_GetInstance'::`2'::instance,
              v15,
              KeyboardInputLatency);
          }
          goto LABEL_13;
        }
        if ( (v11 & 0x40000) == 0 )
        {
          UpdateKeyStateForMessage(a1, v9);
          *((_DWORD *)v9 + 25) |= 0x40000u;
          return;
        }
      }
      if ( a2 != 4 )
        goto LABEL_10;
      KeyboardInputTelemetry::LogHanging((struct tagTHREADINFO *)v9[13], v9[16]);
LABEL_13:
      if ( (*(_DWORD *)(a1 + 1256) & 0x1000000) == 0 && (*((_DWORD *)v9 + 25) & 0x2000) != 0 )
        *(_DWORD *)(v9[13] + 1256) &= ~0x20000000u;
      v17 = *((_DWORD *)v9 + 25);
      if ( (v17 & 0x2000) != 0 || (v17 & 0x4000) != 0 || (v17 & 0x10000) != 0 )
      {
        *((_DWORD *)v9 + 25) = v17 & 0xFFFE9FFF;
        ++*(_DWORD *)(v3 + 40);
        v17 = *((_DWORD *)v9 + 25);
      }
      *((_DWORD *)v9 + 25) = v17 | 0x8000;
      InputTraceLogging::Delivery::UpdateISODState((const struct tagQMSG *)v9);
      if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
        || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40000) == 0
        || (LOBYTE(v18) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
      {
        LOBYTE(v18) = 0;
      }
      LOBYTE(v19) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      if ( (_BYTE)v18 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_AND_TRACE_SF_qiqdd(
          WPP_GLOBAL_Control->AttachedDevice,
          v18,
          v19,
          WPP_MAIN_CB.Queue.ListEntry.Flink,
          v29,
          v30,
          11,
          v31,
          (char)v9,
          v9[17],
          v3 + 24,
          *(_DWORD *)(v3 + 44),
          *(_DWORD *)(v3 + 40));
      if ( a2 != 2 && !v12 )
      {
        v27 = *((unsigned int *)v9 + 6);
        v28 = 0;
        if ( a2 == 5 )
          v28 = 0x4000000;
        *((_DWORD *)v9 + 25) = *((_DWORD *)v9 + 25) & 0xFBFFFFFF | v28 | 0x20000;
        ApiSetEditionWakeSomeone(v3, a1, v27, v9);
LABEL_30:
        v7 = &WPP_RECORDER_INITIALIZED;
        break;
      }
      if ( v9 == *(__int64 **)(v3 + 80) )
      {
        if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
          || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40000) == 0
          || (LOBYTE(v18) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 5u) )
        {
          LOBYTE(v18) = 0;
        }
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
          || (LOBYTE(v19) = 1, !LOWORD(WPP_GLOBAL_Control->DeviceType)) )
        {
          LOBYTE(v19) = 0;
        }
        if ( (_BYTE)v18 || (_BYTE)v19 )
          WPP_RECORDER_AND_TRACE_SF_qq(
            WPP_GLOBAL_Control->AttachedDevice,
            v18,
            v19,
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            5,
            19,
            12,
            (__int64)&WPP_4a7a621c478c3bdbcccab5865eab953f_Traceguids,
            v3,
            *(_QWORD *)(v3 + 80));
        *(_QWORD *)(v3 + 80) = 0LL;
      }
      if ( (*((_DWORD *)v9 + 25) & 0x40000) == 0 )
        UpdateKeyStateForMessage(a1, v9);
      ApiSetEditionDelQEntry(v3 + 24, v9, v19);
      if ( !v12 )
        goto LABEL_30;
      v9 = *v8;
LABEL_47:
      if ( !v9 )
        goto LABEL_30;
    }
  }
  v20 = *v8;
  v21 = 1;
  if ( *v8 )
  {
    while ( 1 )
    {
      v22 = *((_DWORD *)v20 + 25);
      if ( __CFSHR__(v22, 15) && a2 != 4 && v20[13] == a1 )
        break;
      if ( (v22 & 0x10000) != 0 || __CFSHR__(*((_DWORD *)v20 + 25), 15) )
      {
        v25 = v20[13];
        if ( v25 == a1 || *((_DWORD *)v20 + 24) == 4 )
        {
          *(_DWORD *)(v25 + 1256) &= ~0x20000000u;
          *((_DWORD *)v20 + 25) &= 0xFFFE9FFF;
          v26 = *(_DWORD *)(v3 + 40) + 1;
          *(_DWORD *)(v3 + 40) = v26;
          LOBYTE(v22) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
                     && (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40000) != 0
                     && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u;
          if ( (_BYTE)v22 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
            WPP_RECORDER_AND_TRACE_SF_qiqdd(
              WPP_GLOBAL_Control->AttachedDevice,
              v22,
              (_DWORD)v7,
              WPP_MAIN_CB.Queue.ListEntry.Flink,
              v29,
              v30,
              13,
              v31,
              (char)v20,
              v20[17],
              v3 + 24,
              *(_DWORD *)(v3 + 44),
              v26);
          }
          *((_DWORD *)v20 + 25) |= 0x20000u;
          InputTraceLogging::Delivery::UpdateISODState((const struct tagQMSG *)v20);
          ApiSetEditionWakeSomeone(v3, a1, *((unsigned int *)v20 + 6), v20);
          v21 = 0;
        }
      }
      v20 = (__int64 *)*v20;
      v7 = &WPP_RECORDER_INITIALIZED;
      if ( !v20 )
      {
        if ( !v21 )
          return;
        goto LABEL_37;
      }
    }
  }
  else
  {
LABEL_37:
    if ( dword_1C029E348 )
    {
      v23 = KeyboardInputTelemetry::GetKeyboardInputLatency(`KeyboardInputTelemetry::_GetInstance'::`2'::instance);
      if ( dword_1C029E348 + dword_1C029E34C >= (unsigned int)dword_1C029E34C )
      {
        v24 = dword_1C029E354 + v23;
        if ( v24 >= dword_1C029E354 )
        {
          ++dword_1C029E350;
          dword_1C029E354 = v24;
          dword_1C029E34C += dword_1C029E348;
        }
      }
      dword_1C029E348 = 0;
    }
  }
}
