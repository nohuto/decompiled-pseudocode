/*
 * XREFs of ?PostMouseMoveToQ@CMouseProcessor@@AEAAXPEAUtagQ@@AEBUtagLOGICALPOINT@@@Z @ 0x1C009B9E8
 * Callers:
 *     ?PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z @ 0x1C009B90C (-PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z.c)
 * Callees:
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x1C0050ECC (WPP_RECORDER_AND_TRACE_SF_.c)
 *     ApiSetEditionPostMouseMoveToQ @ 0x1C009BB54 (ApiSetEditionPostMouseMoveToQ.c)
 *     ?EnsureMoveTime@MouseMoveTimes@CMouseProcessor@@QEAAXXZ @ 0x1C009BBEC (-EnsureMoveTime@MouseMoveTimes@CMouseProcessor@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00D66B4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D6980 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMouseProcessor::PostMouseMoveToQ(
        CMouseProcessor *this,
        struct tagQ *a2,
        const struct tagLOGICALPOINT *a3)
{
  _DWORD *v6; // rsi
  int v7; // edx
  int v8; // r8d
  _QWORD *v9; // rbx

  if ( (*((_DWORD *)a2 + 99) & 0x20) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5600LL);
  v6 = (_DWORD *)((char *)this + 3536);
  CMouseProcessor::MouseMoveTimes::EnsureMoveTime((CMouseProcessor *)((char *)this + 3536));
  if ( qword_1C0295490
    && (unsigned int)qword_1C0295490(*((_QWORD *)a2 + 12))
    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 12) + 424LL) + 848LL) + 100LL) & 2) != 0 )
  {
    v9 = (_QWORD *)((char *)a2 + 420);
  }
  else
  {
    if ( WPP_GLOBAL_Control == (PDEVICE_OBJECT)&WPP_GLOBAL_Control
      || (HIDWORD(WPP_GLOBAL_Control->Timer) & 0x20) == 0
      || (LOBYTE(v7) = 1, BYTE1(WPP_GLOBAL_Control->Timer) < 4u) )
    {
      LOBYTE(v7) = 0;
    }
    if ( (_BYTE)v7 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v8) = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
      WPP_RECORDER_AND_TRACE_SF_(
        WPP_GLOBAL_Control->AttachedDevice,
        v7,
        v8,
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        4,
        6,
        52,
        (__int64)&WPP_f645abfb8f443aa578495af70e8984ab_Traceguids);
    }
    v9 = (_QWORD *)((char *)a2 + 420);
    ApiSetEditionPostMouseMoveToQ(
      (_DWORD)a2,
      *(unsigned __int16 *)a3 | (*((unsigned __int16 *)a3 + 2) << 16),
      *v6,
      *((_QWORD *)this + 443),
      *((_QWORD *)this + 432),
      (__int64)a2 + 420);
  }
  *((_DWORD *)a2 + 99) &= ~0x20u;
  if ( v9 )
    *v9 = 0LL;
  *(_QWORD *)v6 = 0LL;
  *((_QWORD *)this + 443) = 0LL;
  *((_QWORD *)this + 444) = 0LL;
}
