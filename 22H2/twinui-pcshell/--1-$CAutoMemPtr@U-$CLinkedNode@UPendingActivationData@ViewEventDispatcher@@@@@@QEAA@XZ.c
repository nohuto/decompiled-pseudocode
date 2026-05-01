/*
 * XREFs of ??1?$CAutoMemPtr@U?$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@@@QEAA@XZ @ 0x18030FF78
 * Callers:
 *     _ViewEventDispatcher::QueuePendingActivation_::_1_::dtor$0 @ 0x180314B39 (_ViewEventDispatcher--QueuePendingActivation_--_1_--dtor$0.c)
 *     _ViewEventDispatcher::_FlushRemovedPendingActivations_::_1_::dtor$0 @ 0x18031B813 (_ViewEventDispatcher--_FlushRemovedPendingActivations_--_1_--dtor$0.c)
 * Callees:
 *     ??_G?$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@QEAAPEAXI@Z @ 0x1803112FC (--_G-$CLinkedNode@UPendingActivationData@ViewEventDispatcher@@@@QEAAPEAXI@Z.c)
 */

void *__fastcall CAutoMemPtr<CLinkedNode<ViewEventDispatcher::PendingActivationData>>::~CAutoMemPtr<CLinkedNode<ViewEventDispatcher::PendingActivationData>>(
        void **a1)
{
  void *result; // rax

  result = *a1;
  *a1 = 0LL;
  if ( result )
    return (void *)CLinkedNode<ViewEventDispatcher::PendingActivationData>::`scalar deleting destructor'(result);
  return result;
}
