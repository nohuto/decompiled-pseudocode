/*
 * XREFs of TtmpCloseTerminalHandle @ 0x1409A8790
 * Callers:
 *     <none>
 * Callees:
 *     PsGetProcessId @ 0x140236D10 (PsGetProcessId.c)
 *     ExAcquireResourceExclusiveLite @ 0x140258DC0 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x14025D520 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 *     TtmiLogTerminalHandleClosed @ 0x1409A74EC (TtmiLogTerminalHandleClosed.c)
 *     TtmpSetTerminalPendingCleanup @ 0x1409A8A60 (TtmpSetTerminalPendingCleanup.c)
 */

void __fastcall TtmpCloseTerminalHandle(PEPROCESS Process, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // ebp
  struct _KTHREAD *CurrentThread; // rax

  v6 = **(_DWORD **)(a2 + 16);
  if ( a4 == 1 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquireResourceExclusiveLite(&TtmpSessionLock, 1u);
    TtmpSetTerminalPendingCleanup(*(_QWORD *)(a2 + 16), a2);
    ExReleaseResourceLite(&TtmpSessionLock);
    KeLeaveCriticalRegion();
  }
  PsGetProcessId(Process);
  TtmiLogTerminalHandleClosed(v6);
}
