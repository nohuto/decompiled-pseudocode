/*
 * XREFs of KeForceDetachProcess @ 0x14020CC48
 * Callers:
 *     MiSharePages @ 0x140228990 (MiSharePages.c)
 *     MiTrimSharedPageFromViews @ 0x1402A031C (MiTrimSharedPageFromViews.c)
 *     MmQueryCommitReleaseState @ 0x1402FB050 (MmQueryCommitReleaseState.c)
 *     MiUnlockStealVm @ 0x1403B7AF8 (MiUnlockStealVm.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x140616AC8 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x140616CA8 (MiReleaseCommitForResetPages.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x140616E38 (MiReleaseOutSwappedProcessCommit.c)
 *     MmReleaseCommitForMemResetPages @ 0x140617408 (MmReleaseCommitForMemResetPages.c)
 *     PopHandleNextState @ 0x140AA4FAC (PopHandleNextState.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x14020D030 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

__int64 __fastcall KeForceDetachProcess(_OWORD *a1, char a2)
{
  int v3; // edx
  _OWORD *v4; // rcx
  _OWORD v6[3]; // [rsp+20h] [rbp-48h] BYREF

  v3 = a2 & 1;
  v4 = v6;
  v6[0] = 0LL;
  if ( a1 )
    v4 = a1;
  memset(&v6[1], 0, 32);
  return KiUnstackDetachProcess(v4, (unsigned int)(2 * v3 + 1));
}
