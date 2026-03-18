/*
 * XREFs of ?_FxTimerExtCallbackThunk@FxTimer@@CAXPEAU_EX_TIMER@@PEAX@Z @ 0x1C0002C50
 * Callers:
 *     <none>
 * Callees:
 *     ?EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z @ 0x1C0004224 (-EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 */

void __fastcall FxTimer::_FxTimerExtCallbackThunk(struct _EX_TIMER *Timer, unsigned __int64 Context)
{
  FxSystemWorkItem *v2; // rcx
  void (__fastcall *DpcNotifyRoutine)(void *, unsigned int, unsigned int, unsigned __int16, unsigned __int8); // rax
  _FX_DRIVER_GLOBALS *v5; // rdx
  void (__fastcall **v6)(unsigned __int64); // rdi
  _QWORD *v7; // rsi
  _WORD *v8; // r14
  _QWORD *v9; // r15
  __int64 v10; // rcx
  unsigned __int64 v11; // rbx
  unsigned __int64 v12; // rbx
  unsigned __int8 v13; // [rsp+58h] [rbp+10h] BYREF

  v2 = *(FxSystemWorkItem **)(Context + 320);
  if ( v2 )
  {
    FxSystemWorkItem::EnqueueWorker(v2, FxTimer::_FxTimerWorkItemCallback, (void *)Context, 0);
  }
  else
  {
    DpcNotifyRoutine = FxLibraryGlobals.PerfTraceRoutines->DpcNotifyRoutine;
    if ( DpcNotifyRoutine )
      DpcNotifyRoutine((void *)(Context + 312), 8u, 2164260864u, 3938u, 2u);
    v5 = *(_FX_DRIVER_GLOBALS **)(Context + 16);
    if ( v5->FxTrackDriverForMiniDumpLog )
      *(_FX_DRIVER_GLOBALS *volatile *)((char *)&FxLibraryGlobals.DriverTracker.m_DriverUsage->FxDriverGlobals
                                      + FxLibraryGlobals.DriverTracker.m_EntrySize * HIDWORD(KeGetPcr()[1].LockArray)) = v5;
    v6 = (void (__fastcall **)(unsigned __int64))(Context + 312);
    if ( *(_QWORD *)(Context + 312) )
    {
      v7 = (_QWORD *)(Context + 328);
      v8 = (_WORD *)(Context + 10);
      v9 = (_QWORD *)(Context + 296);
      v10 = *(_QWORD *)(Context + 296);
      *(_QWORD *)(Context + 328) = KeGetCurrentThread();
      if ( v10 )
      {
        v13 = 0;
        (*(void (__fastcall **)(__int64, unsigned __int8 *))(*(_QWORD *)v10 + 16LL))(v10, &v13);
        v12 = Context ^ 0xFFFFFFFFFFFFFFF8uLL;
        if ( !*v8 )
          v12 = 0LL;
        (*v6)(v12);
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v9 + 24LL))(*v9, v13);
      }
      else
      {
        if ( *v8 )
          v11 = Context ^ 0xFFFFFFFFFFFFFFF8uLL;
        else
          v11 = 0LL;
        (*v6)(v11);
      }
      *v7 = 0LL;
    }
  }
}
