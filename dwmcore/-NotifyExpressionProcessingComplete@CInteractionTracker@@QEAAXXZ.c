void __fastcall CInteractionTracker::NotifyExpressionProcessingComplete(CInteractionTracker *this)
{
  bool v1; // al
  __int64 v3; // rdx
  __int64 v4; // rdx
  CChainingHelper *ActiveChainingHelper; // rax

  v1 = 1;
  if ( (*((_BYTE *)this + 541) & 1) == 0 )
    v1 = *((_QWORD *)this + 80) == 0LL;
  if ( !*((_DWORD *)this + 44) )
  {
    if ( v1 )
      goto LABEL_8;
LABEL_7:
    if ( (*((_BYTE *)this + 541) & 8) == 0 )
      goto LABEL_9;
    goto LABEL_8;
  }
  if ( !v1 )
    goto LABEL_7;
  CInteractionTracker::CheckForIdle(this);
LABEL_8:
  CInteractionTracker::EnsurePositionIsGreaterThanOrEqualToMin((__int64)this, 7);
  CInteractionTracker::EnsurePositionIsLessThanOrEqualToMax(this, 7LL);
  CInteractionTracker::EnsureScaleIsGreaterThanOrEqualToMin(this, v3);
  CInteractionTracker::EnsureScaleIsLessThanOrEqualToMax(this, v4);
LABEL_9:
  *((_BYTE *)this + 541) &= ~8u;
  ActiveChainingHelper = InteractionSourceManager::TryGetActiveChainingHelper((CInteractionTracker *)((char *)this + 200));
  if ( ActiveChainingHelper )
    CChainingHelper::UpdateConfigurationIfDirty(ActiveChainingHelper);
  CInteractionTracker::SendPendingCallbacks(this);
}
