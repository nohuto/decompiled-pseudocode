/*
 * XREFs of ?QueueSignal@DXGPROTECTEDSESSION@@QEAAJXZ @ 0x1C0344354
 * Callers:
 *     ?SetSessionStatus@DXGPROTECTEDSESSION@@QEAAJW4_DXGK_PROTECTED_SESSION_STATUS@@@Z @ 0x1C0055FD4 (-SetSessionStatus@DXGPROTECTEDSESSION@@QEAAJW4_DXGK_PROTECTED_SESSION_STATUS@@@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     ?AddReference@DXGPROTECTEDSESSION@@QEAAJ_N@Z @ 0x1C0053344 (-AddReference@DXGPROTECTEDSESSION@@QEAAJ_N@Z.c)
 */

__int64 __fastcall DXGPROTECTEDSESSION::QueueSignal(struct _EX_RUNDOWN_REF *this)
{
  struct _EX_RUNDOWN_REF *v1; // rdi
  struct _IO_WORKITEM *WorkItem; // rsi

  v1 = this + 17;
  if ( ExAcquireRundownProtection(this + 17) )
  {
    WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(*(_QWORD *)(this[2].Count + 16) + 216LL));
    if ( !WorkItem )
    {
      WdLogSingleEntry1(6LL, 1213LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262145,
        -1,
        (__int64)L"Can't allocate memory to hold IO work item.",
        1213LL,
        0LL,
        0LL,
        0LL,
        0LL);
      ExReleaseRundownProtection(v1);
      return 3221225495LL;
    }
    WdLogSingleEntry1(4LL, 1218LL);
    DXGPROTECTEDSESSION::AddReference((DXGPROTECTEDSESSION *)this, 0);
    IoQueueWorkItemEx(WorkItem, DXGPROTECTEDSESSION::SignalFenceWorkItemRoutine, DelayedWorkQueue, this);
  }
  else
  {
    LOBYTE(this[18].Count) = 1;
  }
  return 0LL;
}
