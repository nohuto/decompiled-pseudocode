void __fastcall CFlipManager::ProcessProducerDisconnect(CBackchannelManager **this)
{
  CEndpointResourceStateManager::RemoveAllResourceStates((CEndpointResourceStateManager *)(this + 7));
  CBackchannelManager::Clear(this[28]);
  this[5] = 0LL;
}
