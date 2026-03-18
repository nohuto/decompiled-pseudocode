/*
 * XREFs of ?ProcessDiscardedProducerPresentUpdate@CFlipManager@@QEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C0084CDC
 * Callers:
 *     ?Discard@CFlipPresentUpdate@@UEAAXXZ @ 0x1C0088B10 (-Discard@CFlipPresentUpdate@@UEAAXXZ.c)
 * Callees:
 *     ?MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z @ 0x1C008469C (-MarkAsLost@CFlipManager@@AEAAXJW4Operation@PresentHistory@1@_K@Z.c)
 *     ?ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z @ 0x1C00851F0 (-ReleaseKernelPresentUpdateReferences@CFlipManager@@AEAAXPEAVCFlipPresentUpdate@@@Z.c)
 *     ?CancelPendingUpdates@CEndpointResourceStateManager@@QEAAXXZ @ 0x1C00861EC (-CancelPendingUpdates@CEndpointResourceStateManager@@QEAAXXZ.c)
 *     ?ClearAllContentBindings@CEndpointResourceStateManager@@QEAAXXZ @ 0x1C0086274 (-ClearAllContentBindings@CEndpointResourceStateManager@@QEAAXXZ.c)
 */

void __fastcall CFlipManager::ProcessDiscardedProducerPresentUpdate(CFlipManager *this, struct CFlipPresentUpdate *a2)
{
  CFlipManager::ReleaseKernelPresentUpdateReferences(this, a2);
  CEndpointResourceStateManager::CancelPendingUpdates((CFlipManager *)((char *)this + 56));
  if ( !*((_BYTE *)a2 + 72) )
    CEndpointResourceStateManager::ClearAllContentBindings((CFlipManager *)((char *)this + 56));
  if ( *((_QWORD *)this + 6) == 1LL )
    CFlipManager::MarkAsLost((__int64)this, -1073741823, 20, *((_QWORD *)a2 + 8));
}
