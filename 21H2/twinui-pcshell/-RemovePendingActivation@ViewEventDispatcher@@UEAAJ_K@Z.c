/*
 * XREFs of ?RemovePendingActivation@ViewEventDispatcher@@UEAAJ_K@Z @ 0x180315990
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_3c4847642c4b84887b271ddb5cdb57d9___::Run @ 0x180315AF0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_3c4847642c4b84887b271ddb5cdb57d9___--Run.c)
 * Callees:
 *     ?_FindPendingActivation@ViewEventDispatcher@@AEAAJ_KPEAPEAU?$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@@Z @ 0x18031B830 (-_FindPendingActivation@ViewEventDispatcher@@AEAAJ_KPEAPEAU-$CLinkedNode@UPendingActivationData@.c)
 *     ?_QueuePendingActivationNodeForDestruction@ViewEventDispatcher@@AEAAXPEAU?$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@@Z @ 0x18031CDEC (-_QueuePendingActivationNodeForDestruction@ViewEventDispatcher@@AEAAXPEAU-$CLinkedNode@UPendingA.c)
 */

__int64 __fastcall ViewEventDispatcher::RemovePendingActivation(RTL_SRWLOCK *this, __int64 a2)
{
  RTL_SRWLOCK *v2; // rsi
  RTL_SRWLOCK *v4; // rbp
  int PendingActivation; // ebx
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = this + 33;
  v4 = this - 2;
  AcquireSRWLockExclusive(this + 33);
  PendingActivation = ViewEventDispatcher::_FindPendingActivation(v4, a2, &v7);
  if ( PendingActivation >= 0 )
  {
    ViewEventDispatcher::_QueuePendingActivationNodeForDestruction(v4, v7);
    PendingActivation = 0;
  }
  if ( v2 )
    ReleaseSRWLockExclusive(v2);
  return (unsigned int)PendingActivation;
}
