/*
 * XREFs of DeferSysPeekMsg @ 0x1C0005F80
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateISODState@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z @ 0x1C000647C (-UpdateISODState@Delivery@InputTraceLogging@@SAXPEBUtagQMSG@@@Z.c)
 *     WPP_RECORDER_AND_TRACE_SF_qiqdd @ 0x1C00064EC (WPP_RECORDER_AND_TRACE_SF_qiqdd.c)
 *     ?_BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@AEAAXI@Z @ 0x1C00066A0 (-_BeginKeyboardEventProcessingByInputService@KeyboardInputTelemetry@@AEAAXI@Z.c)
 */

void __fastcall DeferSysPeekMsg(__int64 a1, int a2)
{
  char v2; // si
  __int64 v4; // rdi
  unsigned int v5; // ebp
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  PDEVICE_OBJECT v9; // rcx
  int v10; // edx
  unsigned int ThreadId; // ebx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // rax
  __int64 v17; // rbx
  __int64 v18; // rax
  int v19; // ecx

  v2 = 1;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 432) + 88LL);
  v5 = *(_DWORD *)(v4 + 24) - 256;
  switch ( a2 )
  {
    case 1:
LABEL_24:
      *(_DWORD *)(a1 + 1272) |= 0x20000000u;
      if ( a2 == 1 )
      {
        *(_DWORD *)(v4 + 100) |= 0x2000u;
        goto LABEL_5;
      }
LABEL_23:
      *(_DWORD *)(v4 + 100) |= 0x10000u;
      break;
    case 3:
      if ( v5 > 9 )
        goto LABEL_23;
      goto LABEL_24;
    case 2:
      *(_DWORD *)(v4 + 100) |= 0x4000u;
LABEL_5:
      *(_QWORD *)(*(_QWORD *)(a1 + 432) + 56LL) = v4;
      break;
  }
  InputTraceLogging::Delivery::UpdateISODState((const struct tagQMSG *)v4);
  *(_QWORD *)(v4 + 104) = a1;
  --*(_DWORD *)(*(_QWORD *)(a1 + 432) + 40LL);
  v9 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x40000) == 0
    || BYTE1(WPP_GLOBAL_Control->Timer) < 4u )
  {
    v2 = 0;
  }
  LOBYTE(v7) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
  if ( v2 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v10 = 10;
    LOBYTE(v10) = v2;
    WPP_RECORDER_AND_TRACE_SF_qiqdd(WPP_GLOBAL_Control->AttachedDevice, v10, v7, WPP_MAIN_CB.Queue.ListEntry.Flink);
  }
  if ( (*(_DWORD *)(a1 + 1272) & 0x1000000) == 0 && v5 <= 9 )
  {
    if ( !*(_QWORD *)(v4 + 136) )
    {
      *(LARGE_INTEGER *)(v4 + 136) = KeQueryPerformanceCounter(0LL);
      ThreadId = (unsigned int)PsGetThreadId(*(PETHREAD *)a1);
      v16 = SGDGetUserSessionState(v13, v12, v14, v15);
      KeyboardInputTelemetry::_BeginKeyboardEventProcessingByInputService(
        (KeyboardInputTelemetry *)(v16 + 14168),
        ThreadId);
    }
    if ( (*(_DWORD *)(v4 + 100) & 0x10000) == 0 )
    {
      v17 = *(_QWORD *)(v4 + 136);
      v18 = SGDGetUserSessionState(v9, v6, v7, v8);
      if ( *(_DWORD *)(v18 + 14356) )
      {
        v19 = *(_DWORD *)(v18 + 14176);
        if ( !v19 )
          *(_QWORD *)(v18 + 14168) = v17;
        *(_DWORD *)(v18 + 14176) = v19 + 1;
      }
    }
  }
}
