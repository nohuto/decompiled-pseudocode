void __fastcall CHolographicDisplay::DetachFromChannel(CHolographicDisplay *this, struct CChannelContext *a2)
{
  RTL_SRWLOCK *v3; // rcx

  v3 = (RTL_SRWLOCK *)*((_QWORD *)this + 10);
  if ( v3 && *((_BYTE *)this + 124) )
    CHolographicManager::RemoveHolographicDisplay(v3, this);
  CNotificationResource::DetachFromChannel(this, a2);
}
