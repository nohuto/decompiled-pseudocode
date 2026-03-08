/*
 * XREFs of KeForceAttachProcess @ 0x1402E6610
 * Callers:
 *     MiSharePages @ 0x140228990 (MiSharePages.c)
 *     MiTrimSharedPageFromViews @ 0x1402A031C (MiTrimSharedPageFromViews.c)
 *     MmQueryCommitReleaseState @ 0x1402FB050 (MmQueryCommitReleaseState.c)
 *     MiLockStealUserVm @ 0x1403B7F90 (MiLockStealUserVm.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x140616AC8 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x140616CA8 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x140616E38 (MiReleaseOutSwappedProcessCommit.c)
 *     MmReleaseCommitForMemResetPages @ 0x140617408 (MmReleaseCommitForMemResetPages.c)
 *     PopHandleNextState @ 0x140AA4FAC (PopHandleNextState.c)
 * Callees:
 *     KiStackAttachProcess @ 0x14030DF30 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 */

__int64 __fastcall KeForceAttachProcess(ULONG_PTR BugCheckParameter1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // r8

  if ( !a2 )
  {
    CurrentThread = KeGetCurrentThread();
    if ( CurrentThread->ApcStateIndex )
      KeBugCheckEx(
        5u,
        BugCheckParameter1,
        (ULONG_PTR)CurrentThread->ApcState.Process,
        CurrentThread->ApcStateIndex,
        0LL);
  }
  return KiStackAttachProcess(BugCheckParameter1);
}
