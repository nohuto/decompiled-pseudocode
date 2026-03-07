void __fastcall CInteractionTracker::SetMinScale(CInteractionTracker *this, float a2)
{
  __int64 v2; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  CInteractionTracker *v7; // [rsp+40h] [rbp+8h] BYREF
  int v8; // [rsp+48h] [rbp+10h] BYREF

  if ( *((float *)this + 35) != a2 )
  {
    *((float *)this + 35) = a2;
    CInteractionTracker::EnsureScaleIsGreaterThanOrEqualToMin(this, v2);
    CInteractionTracker::SetMaxScale(this, fmaxf(*((float *)this + 35), *((float *)this + 36)));
    CResource::InvalidateAnimationSources(this, 29);
    if ( (unsigned int)dword_1803E07D0 > 4 )
    {
      if ( tlgKeywordOn((__int64)&dword_1803E07D0, 2LL) )
      {
        v8 = *((_DWORD *)this + 35);
        v7 = this;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
          v4,
          byte_18037DAAE,
          v5,
          v6,
          (__int64)&v7,
          (__int64)&v8);
      }
    }
  }
}
