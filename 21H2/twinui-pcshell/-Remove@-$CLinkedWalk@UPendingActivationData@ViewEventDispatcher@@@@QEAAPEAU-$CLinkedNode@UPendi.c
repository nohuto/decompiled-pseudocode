/*
 * XREFs of ?Remove@?$CLinkedWalk@UPendingActivationData@ViewEventDispatcher@@@@QEAAPEAU?$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@XZ @ 0x1803158C0
 * Callers:
 *     ??1ViewEventDispatcher@@EEAA@XZ @ 0x180310690 (--1ViewEventDispatcher@@EEAA@XZ.c)
 *     ?_FlushRemovedPendingActivations@ViewEventDispatcher@@AEAAXXZ @ 0x18031B994 (-_FlushRemovedPendingActivations@ViewEventDispatcher@@AEAAXXZ.c)
 *     ?_QueuePendingActivationNodeForDestruction@ViewEventDispatcher@@AEAAXPEAU?$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@@Z @ 0x18031CDEC (-_QueuePendingActivationNodeForDestruction@ViewEventDispatcher@@AEAAXPEAU-$CLinkedNode@UPendingA.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall CLinkedWalk<ViewEventDispatcher::PendingActivationData>::Remove(__int64 a1)
{
  __int64 **v1; // r9
  __int64 *v2; // rdx
  __int64 *result; // rax
  __int64 *v5; // rcx
  __int64 *v6; // rcx

  v1 = *(__int64 ***)a1;
  v2 = 0LL;
  result = **(__int64 ***)a1;
  if ( result )
  {
    v5 = *(__int64 **)(a1 + 8);
    while ( result != v5 )
    {
      v2 = result;
      result = (__int64 *)*result;
      if ( !result )
        return result;
    }
    v6 = (__int64 *)*v5;
    if ( v2 )
      *v2 = (__int64)v6;
    else
      *v1 = v6;
    **(_QWORD **)(a1 + 8) = 0LL;
    *(_QWORD *)(a1 + 8) = v2;
  }
  return result;
}
