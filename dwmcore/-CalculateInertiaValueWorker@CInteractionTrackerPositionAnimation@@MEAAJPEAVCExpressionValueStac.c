__int64 __fastcall CInteractionTrackerPositionAnimation::CalculateInertiaValueWorker(
        CInteractionTrackerPositionAnimation *this,
        struct CExpressionValueStack *a2,
        unsigned __int64 a3,
        float a4,
        float *a5)
{
  __int64 v9; // rcx
  CInteractionTracker *InteractionTracker; // rbx
  float MostRecentCenterPoint; // xmm7_4
  float CurrentVelocity; // xmm6_4
  float CurrentValue; // xmm3_4
  float v14; // xmm2_4
  _DWORD *v15; // rcx
  int v16; // r11d
  float v17; // xmm0_4
  int v18; // ecx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  wchar_t *v23; // [rsp+50h] [rbp-58h] BYREF
  CInteractionTrackerPositionAnimation *v24; // [rsp+58h] [rbp-50h] BYREF
  float v25; // [rsp+B0h] [rbp+8h] BYREF
  float v26; // [rsp+C8h] [rbp+20h] BYREF

  v26 = a4;
  InteractionTracker = CScrollAnimation::GetInteractionTracker(this);
  MostRecentCenterPoint = CInteractionTracker::GetMostRecentCenterPoint(
                            (__int64)InteractionTracker,
                            2,
                            *(_DWORD *)(v9 + 340));
  v25 = MostRecentCenterPoint;
  CurrentVelocity = CInteractionTracker::GetCurrentVelocity(InteractionTracker, 2);
  CurrentValue = CInteractionTracker::GetCurrentValue((__int64)InteractionTracker, 2);
  v14 = CInteractionTracker::ValueFromBoundary(InteractionTracker, 2LL, *((_DWORD *)this + 85));
  v17 = CInteractionTracker::ValueFromBoundary(v15, 1LL, v16);
  LODWORD(v23) = CPositionMotion::AdvanceInertiaToTime(
                   (CInteractionTrackerPositionAnimation *)((char *)this + 456),
                   a2,
                   a3,
                   a4,
                   v17,
                   v14,
                   CurrentValue,
                   CurrentVelocity,
                   MostRecentCenterPoint);
  *(_DWORD *)a5 = (_DWORD)v23;
  if ( (unsigned int)dword_1803E07D0 > 4 && tlgKeywordOn((__int64)&dword_1803E07D0, 2LL) )
  {
    v18 = *((_DWORD *)this + 85);
    *(float *)&a5 = v25;
    v25 = *(float *)&v23;
    v23 = (wchar_t *)ScrollAxisToString(v18);
    v24 = this;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      v19,
      byte_18037EB2A,
      v20,
      v21,
      (__int64)&v24,
      &v23,
      (__int64)&v25,
      (__int64)&a5,
      (__int64)&v26);
  }
  return 0LL;
}
