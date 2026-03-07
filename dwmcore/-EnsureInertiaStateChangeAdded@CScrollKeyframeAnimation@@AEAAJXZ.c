__int64 __fastcall CScrollKeyframeAnimation::EnsureInertiaStateChangeAdded(CScrollKeyframeAnimation *this)
{
  char v1; // al
  __int64 v3; // rbx
  float CurrentValue; // xmm0_4
  __int64 v5; // rbx
  float v6; // xmm0_4
  __int64 v7; // rbx
  float v8; // xmm0_4
  int v9; // eax
  unsigned int v10; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v1 = *((_BYTE *)this + 752);
  if ( (v1 & 1) != 0 )
    return 0LL;
  v3 = *((_QWORD *)this + 73);
  *((_BYTE *)this + 752) = v1 | 1;
  CurrentValue = CInteractionTracker::GetCurrentValue(v3, 0);
  CInteractionTracker::AddOrUpdatePendingInertiaStateChange(v3, 0, CurrentValue, 0);
  v5 = *((_QWORD *)this + 73);
  v6 = CInteractionTracker::GetCurrentValue(v5, 1);
  CInteractionTracker::AddOrUpdatePendingInertiaStateChange(v5, 1u, v6, 0);
  v7 = *((_QWORD *)this + 73);
  v8 = CInteractionTracker::GetCurrentValue(v7, 2);
  CInteractionTracker::AddOrUpdatePendingInertiaStateChange(v7, 2u, v8, 0);
  v9 = CScrollKeyframeAnimation::EnsureInertiaStateChangeInfo(this);
  v10 = v9;
  if ( v9 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xCB,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollkeyframeanimation.cpp",
    (const char *)(unsigned int)v9);
  return v10;
}
