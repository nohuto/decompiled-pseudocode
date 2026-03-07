__int64 __fastcall CScrollAnimation::CalculateInertiaValue(
        CScrollAnimation *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        float *a4)
{
  struct CInteractionTracker *InteractionTracker; // rax
  struct CExpressionValueStack *v8; // rdx
  CScrollAnimation *v9; // rcx
  __int64 v10; // r8
  int v11; // eax
  __int64 v12; // rcx
  unsigned int v13; // ebx
  float CurrentValue; // xmm0_4
  int v15; // eax
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  __int64 (__fastcall *v19)(CScrollAnimation *, struct CExpressionValueStack *, __int64); // r9
  int v20; // eax
  __int64 v21; // rcx
  _QWORD v23[5]; // [rsp+30h] [rbp-28h] BYREF
  float v24; // [rsp+60h] [rbp+8h] BYREF

  InteractionTracker = CScrollAnimation::GetInteractionTracker(this);
  if ( *((_DWORD *)v9 + 84) == 1 )
  {
    v11 = CScrollAnimation::CalculateInContactValue(v9, v8, v10, &v24);
    v13 = v11;
    if ( v11 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0x2CDu, 0LL);
      return v13;
    }
    CurrentValue = v24;
  }
  else
  {
    CurrentValue = CInteractionTracker::GetCurrentValue((__int64)InteractionTracker, *((_DWORD *)v9 + 85));
    v24 = CurrentValue;
  }
  if ( *((_DWORD *)this + 84) == 2 )
  {
    if ( (*((_BYTE *)this + 368) & 4) != 0 )
      CScrollAnimation::StartInertia(this, CurrentValue, 1);
  }
  else
  {
    CScrollAnimation::StartInertia(this, CurrentValue, 0);
    v15 = CScrollAnimation::SelectInertiaModifier(this);
    v13 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v16, 0LL, 0, v15, 0x2E3u, 0LL);
      return v13;
    }
  }
  if ( (*((_BYTE *)this + 396) & 1) != 0 && (v17 = CScrollAnimation::SelectInertiaModifier(this), v13 = v17, v17 < 0) )
  {
    MilInstrumentationCheckHR_MaybeFailFast(v18, 0LL, 0, v17, 0x2F1u, 0LL);
  }
  else
  {
    v23[0] = *(_QWORD *)(*((_QWORD *)this + 2) + 608LL) - *((_QWORD *)this + 45);
    TimeDelta::ToSeconds((TimeDelta *)v23);
    v20 = v19(this, a2, a3);
    v13 = v20;
    if ( v20 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(v21, 0LL, 0, v20, 0x2F4u, 0LL);
    else
      return 0;
  }
  return v13;
}
