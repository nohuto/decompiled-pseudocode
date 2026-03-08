/*
 * XREFs of ?AreMultipleThreadsAttached@tagQ@@QEBA_NXZ @ 0x1C00390F4
 * Callers:
 *     IsShellFrameHangResilient @ 0x1C0006D64 (IsShellFrameHangResilient.c)
 *     xxxSetThreadDesktop @ 0x1C00361B8 (xxxSetThreadDesktop.c)
 *     PostInputMessage @ 0x1C0037A48 (PostInputMessage.c)
 *     PackAffectedThreadsFromThreadCleanup @ 0x1C0039090 (PackAffectedThreadsFromThreadCleanup.c)
 *     xxxRealInternalGetMessage @ 0x1C006F2F0 (xxxRealInternalGetMessage.c)
 *     ?zzzRecalcThreadAttachment@@YAXXZ @ 0x1C00CD304 (-zzzRecalcThreadAttachment@@YAXXZ.c)
 *     NtUserDelegateInput @ 0x1C00E4130 (NtUserDelegateInput.c)
 *     NtUserShellHandwritingDelegateInput @ 0x1C01DEA30 (NtUserShellHandwritingDelegateInput.c)
 *     _SetThreadQueueMergeSetting @ 0x1C01E4940 (_SetThreadQueueMergeSetting.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C01F0DC4 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
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
