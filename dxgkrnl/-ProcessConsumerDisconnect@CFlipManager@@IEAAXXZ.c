/*
 * XREFs of ?ProcessConsumerDisconnect@CFlipManager@@IEAAXXZ @ 0x1C0083F1C
 * Callers:
 *     ?DisconnectEndpoint@FlipManagerObject@@QEAAJ_N@Z @ 0x1C007F368 (-DisconnectEndpoint@FlipManagerObject@@QEAAJ_N@Z.c)
 *     ?Close@CFlipManager@@MEAAJPEAU_EPROCESS@@PEAX_K2@Z @ 0x1C0081D60 (-Close@CFlipManager@@MEAAJPEAU_EPROCESS@@PEAX_K2@Z.c)
 * Callees:
 *     ?FreeCurrentUpdates@CFlipManager@@AEAAXXZ @ 0x1C0083138 (-FreeCurrentUpdates@CFlipManager@@AEAAXXZ.c)
 *     ?FreeQueuedUpdates@CFlipManager@@AEAAXXZ @ 0x1C008322C (-FreeQueuedUpdates@CFlipManager@@AEAAXXZ.c)
 *     ?DestroyAllResourceStates@CEndpointResourceStateManager@@QEAAXXZ @ 0x1C00855BC (-DestroyAllResourceStates@CEndpointResourceStateManager@@QEAAXXZ.c)
 *     ?RemarshalAllResourceStates@CEndpointResourceStateManager@@QEAAXXZ @ 0x1C0086EDC (-RemarshalAllResourceStates@CEndpointResourceStateManager@@QEAAXXZ.c)
 */

void __fastcall CFlipManager::ProcessConsumerDisconnect(PRKEVENT *this)
{
  CFlipManager::FreeCurrentUpdates((CFlipManager *)this);
  CEndpointResourceStateManager::RemarshalAllResourceStates((CEndpointResourceStateManager *)(this + 7));
  CEndpointResourceStateManager::DestroyAllResourceStates((CEndpointResourceStateManager *)(this + 13));
  CFlipManager::FreeQueuedUpdates((CFlipManager *)this);
  KeResetEvent(this[36]);
  this[6] = 0LL;
}
