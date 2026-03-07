void __fastcall CFlipManager::ProcessDiscardedProducerPresentUpdate(CFlipManager *this, struct CFlipPresentUpdate *a2)
{
  CFlipManager::ReleaseKernelPresentUpdateReferences(this, a2);
  CEndpointResourceStateManager::CancelPendingUpdates((CFlipManager *)((char *)this + 56));
  if ( !*((_BYTE *)a2 + 72) )
    CEndpointResourceStateManager::ClearAllContentBindings((CFlipManager *)((char *)this + 56));
  if ( *((_QWORD *)this + 6) == 1LL )
    CFlipManager::MarkAsLost((__int64)this, -1073741823, 20, *((_QWORD *)a2 + 8));
}
