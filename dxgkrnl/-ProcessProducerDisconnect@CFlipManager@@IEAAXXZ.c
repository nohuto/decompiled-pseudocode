/*
 * XREFs of ?ProcessProducerDisconnect@CFlipManager@@IEAAXXZ @ 0x1C0084068
 * Callers:
 *     ?DisconnectEndpoint@FlipManagerObject@@QEAAJ_N@Z @ 0x1C007F368 (-DisconnectEndpoint@FlipManagerObject@@QEAAJ_N@Z.c)
 *     ?Close@CFlipManager@@MEAAJPEAU_EPROCESS@@PEAX_K2@Z @ 0x1C0081D60 (-Close@CFlipManager@@MEAAJPEAU_EPROCESS@@PEAX_K2@Z.c)
 * Callees:
 *     ?RemoveAllResourceStates@CEndpointResourceStateManager@@QEAAXXZ @ 0x1C0086FA4 (-RemoveAllResourceStates@CEndpointResourceStateManager@@QEAAXXZ.c)
 *     ?Clear@CBackchannelManager@@QEAAXXZ @ 0x1C0087328 (-Clear@CBackchannelManager@@QEAAXXZ.c)
 */

void __fastcall CFlipManager::ProcessProducerDisconnect(CBackchannelManager **this)
{
  CEndpointResourceStateManager::RemoveAllResourceStates((CEndpointResourceStateManager *)(this + 7));
  CBackchannelManager::Clear(this[28]);
  this[5] = 0LL;
}
