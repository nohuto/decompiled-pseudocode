/*
 * XREFs of ?AreMultipleThreadsAttached@tagQ@@QEBA_NXZ @ 0x1C01158D4
 * Callers:
 *     IsShellFrameHangResilient @ 0x1C0006E08 (IsShellFrameHangResilient.c)
 *     ?zzzRecalcThreadAttachment@@YAXXZ @ 0x1C005C014 (-zzzRecalcThreadAttachment@@YAXXZ.c)
 *     xxxSetThreadDesktop @ 0x1C006A6E4 (xxxSetThreadDesktop.c)
 *     NtUserDelegateInput @ 0x1C00ABDA0 (NtUserDelegateInput.c)
 *     PackAffectedThreadsFromThreadCleanup @ 0x1C0115870 (PackAffectedThreadsFromThreadCleanup.c)
 *     PostInputMessage @ 0x1C0117268 (PostInputMessage.c)
 *     xxxRealInternalGetMessage @ 0x1C01280D0 (xxxRealInternalGetMessage.c)
 *     NtUserShellHandwritingDelegateInput @ 0x1C01DD9A0 (NtUserShellHandwritingDelegateInput.c)
 *     _SetThreadQueueMergeSetting @ 0x1C01E3890 (_SetThreadQueueMergeSetting.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C01EFC00 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall tagQ::AreMultipleThreadsAttached(tagQ *this)
{
  __int64 v1; // rdx
  int v2; // eax
  __int64 v3; // rcx

  v1 = *((_QWORD *)this + 60);
  v2 = 0;
  if ( v1 )
  {
    v2 = 1;
    if ( *(_QWORD *)(v1 + 1528) )
      return 1;
  }
  v3 = *((_QWORD *)this + 61);
  if ( !v3 )
    return 0;
  return (unsigned int)(v2 + 1) > 1 || *(_QWORD *)(v3 + 1536) != 0LL;
}
