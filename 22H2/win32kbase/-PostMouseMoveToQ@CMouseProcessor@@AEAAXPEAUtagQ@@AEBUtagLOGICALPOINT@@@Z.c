/*
 * XREFs of ?PostMouseMoveToQ@CMouseProcessor@@AEAAXPEAUtagQ@@AEBUtagLOGICALPOINT@@@Z @ 0x1C0047AE0
 * Callers:
 *     ?PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z @ 0x1C0046C9C (-PostPendingMouseMove@CMouseProcessor@@QEAAXPEAUtagQ@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     ?EnsureMoveTime@MouseMoveTimes@CMouseProcessor@@QEAAXXZ @ 0x1C0046D7C (-EnsureMoveTime@MouseMoveTimes@CMouseProcessor@@QEAAXXZ.c)
 *     ApiSetEditionPostMouseMoveToQ @ 0x1C0047C14 (ApiSetEditionPostMouseMoveToQ.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CMouseProcessor::PostMouseMoveToQ(
        LARGE_INTEGER *this,
        struct tagQ *a2,
        const struct tagLOGICALPOINT *a3)
{
  LARGE_INTEGER *v6; // rdi
  int v7; // edx
  int v8; // eax
  _QWORD *v9; // rbx

  if ( (*((_DWORD *)a2 + 97) & 0x20) == 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 5433LL);
  v6 = this + 441;
  CMouseProcessor::MouseMoveTimes::EnsureMoveTime(this + 441);
  if ( qword_1C0256000 )
    v8 = qword_1C0256000(*((_QWORD *)a2 + 11));
  else
    v8 = 0;
  if ( !v8 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a2 + 11) + 424LL) + 832LL) + 100LL) & 2) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 4;
      WPP_RECORDER_SF_(
        WPP_MAIN_CB.Queue.ListEntry.Flink,
        v7,
        6,
        51,
        (__int64)&WPP_bc237edca6b43ca924b1688b2fc88a86_Traceguids);
    }
    ApiSetEditionPostMouseMoveToQ(
      (_DWORD)a2,
      *(unsigned __int16 *)a3 | (*((unsigned __int16 *)a3 + 2) << 16),
      v6->LowPart,
      this[442].QuadPart,
      this[431].QuadPart,
      (__int64)a2 + 420);
  }
  *((_DWORD *)a2 + 97) &= ~0x20u;
  v9 = (_QWORD *)((char *)a2 + 420);
  if ( v9 )
    *v9 = 0LL;
  v6->QuadPart = 0LL;
  this[442].QuadPart = 0LL;
  this[443].QuadPart = 0LL;
}
