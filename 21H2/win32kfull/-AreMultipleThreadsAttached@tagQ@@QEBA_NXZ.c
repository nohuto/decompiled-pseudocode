/*
 * XREFs of ?AreMultipleThreadsAttached@tagQ@@QEBA_NXZ @ 0x1C00AC870
 * Callers:
 *     xxxRealInternalGetMessage @ 0x1C0055460 (xxxRealInternalGetMessage.c)
 *     ?zzzRecalcThreadAttachment@@YAXXZ @ 0x1C00A918C (-zzzRecalcThreadAttachment@@YAXXZ.c)
 *     IsShellFrameHangResilient @ 0x1C00A98EC (IsShellFrameHangResilient.c)
 *     xxxSetThreadDesktop @ 0x1C00A9A4C (xxxSetThreadDesktop.c)
 *     PostInputMessage @ 0x1C00AB69C (PostInputMessage.c)
 *     PackAffectedThreadsFromThreadCleanup @ 0x1C00AC830 (PackAffectedThreadsFromThreadCleanup.c)
 *     NtUserDelegateInput @ 0x1C010E1B0 (NtUserDelegateInput.c)
 *     _SetThreadQueueMergeSetting @ 0x1C02040D8 (_SetThreadQueueMergeSetting.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1C020EBC4 (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall tagQ::AreMultipleThreadsAttached(tagQ *this)
{
  int v2; // ecx
  __int64 v3; // rax
  __int64 v4; // rdx
  bool result; // al

  v2 = 0;
  v3 = *((_QWORD *)this + 59);
  result = 1;
  if ( !v3 || (v2 = 1, !*(_QWORD *)(v3 + 1488)) )
  {
    v4 = *((_QWORD *)this + 60);
    if ( !v4 || (unsigned int)(v2 + 1) <= 1 && !*(_QWORD *)(v4 + 1496) )
      return 0;
  }
  return result;
}
