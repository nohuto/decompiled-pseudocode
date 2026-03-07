__int64 __fastcall CFlipManager::ApplyUpdateToConsumer(CFlipManager *this, struct CFlipPresentUpdate *a2)
{
  unsigned int v4; // ebx
  int v5; // eax

  if ( *((_BYTE *)this + 32) )
  {
    return 128;
  }
  else
  {
    v5 = CEndpointResourceStateManager::ApplyIncrementalUpdate((CFlipManager *)((char *)this + 104), a2);
    v4 = v5;
    if ( v5 < 0 )
      CFlipManager::MarkAsLost(this, (unsigned int)v5, 21LL, *((_QWORD *)a2 + 8));
    else
      CFlipManager::UpdateNextConsumerPresentIdForUpdate(this, a2, 1u);
  }
  return v4;
}
