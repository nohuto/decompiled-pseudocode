/*
 * XREFs of ?ForEachActivatableQueue@CActivationObjectManager@@QEBAXA6AXPEAUtagQ@@PEAX@Z1@Z @ 0x1C0155E9C
 * Callers:
 *     MarkQueuesForKeyStateUpdate @ 0x1C02180C0 (MarkQueuesForKeyStateUpdate.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C004E3B0 (W32GetThreadWin32Thread.c)
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x1C006AE58 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockShared@CPushLock@@QEBAJXZ @ 0x1C00B9120 (-AcquireLockShared@CPushLock@@QEBAJXZ.c)
 *     ?MarkQueuesForKeyStateUpdateWorker@KeyboardProcessing@@YAXPEAUtagQ@@QEAX@Z @ 0x1C0217528 (-MarkQueuesForKeyStateUpdateWorker@KeyboardProcessing@@YAXPEAUtagQ@@QEAX@Z.c)
 */

void __fastcall CActivationObjectManager::ForEachActivatableQueue(
        CActivationObjectManager *this,
        void (*a2)(struct tagQ *, void *),
        struct tagQ *a3)
{
  __int64 v3; // rbp
  _QWORD *v5; // rsi
  _QWORD *v6; // rdi
  __int64 ThreadWin32Thread; // rax
  void *v8; // r8
  KeyboardProcessing *v9; // rcx

  v3 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
  CPushLock::AcquireLockShared((CPushLock *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 16LL));
  v5 = *(_QWORD **)(v3 + 8);
  v6 = v5;
  while ( v6 )
  {
    v6 = (_QWORD *)*v6;
    if ( ((unsigned __int8)v6 & 1) != 0 )
      break;
LABEL_9:
    if ( !v6 )
      goto LABEL_8;
    ThreadWin32Thread = W32GetThreadWin32Thread(v6[3]);
    if ( ThreadWin32Thread )
    {
      v9 = *(KeyboardProcessing **)(ThreadWin32Thread + 432);
      if ( v9 )
        KeyboardProcessing::MarkQueuesForKeyStateUpdateWorker(v9, a3, v8);
    }
  }
  for ( ++v5; (unsigned __int64)v5 < *(_QWORD *)(v3 + 8) + 8 * ((unsigned __int64)*(unsigned int *)(v3 + 4) >> 5); ++v5 )
  {
    v6 = (_QWORD *)*v5;
    if ( (*v5 & 1) == 0 )
      goto LABEL_9;
  }
LABEL_8:
  CPushLock::ReleaseLock((CPushLock *)(v3 + 16));
}
