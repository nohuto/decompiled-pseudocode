__int64 __fastcall CScrollKeyframeAnimation::EnsureInertiaStateChangeInfo(CScrollKeyframeAnimation *this)
{
  char v2; // al
  KeyframeValue *LastKeyframeValue; // rax
  float *v4; // rsi
  int Value; // eax
  const char *v6; // r9
  unsigned int v7; // edi
  const char *v9; // r9
  float AnimationTimeLength; // xmm7_4
  float v11; // xmm0_4
  float v12; // xmm1_4
  float CurrentValue; // xmm6_4
  float v14; // xmm0_4
  float v15; // xmm4_4
  float v16; // xmm2_4
  float v17; // xmm1_4
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v2 = *((_BYTE *)this + 752);
  if ( (v2 & 2) == 0 )
  {
    *((_BYTE *)this + 752) = v2 | 2;
    LastKeyframeValue = CKeyframeAnimation::GetLastKeyframeValue(this);
    v4 = (float *)((char *)this + 592);
    Value = KeyframeValue::GetValue(LastKeyframeValue, 0LL, (CScrollKeyframeAnimation *)((char *)this + 592));
    v7 = Value;
    if ( Value < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE2,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollkeyframeanimation.cpp",
        (const char *)(unsigned int)Value);
      return v7;
    }
    if ( !*((_BYTE *)this + 668) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        228LL,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollkeyframeanimation.cpp",
        v6);
    AnimationTimeLength = CKeyframeAnimation::GetAnimationTimeLength(this);
    if ( AnimationTimeLength != 0.0 )
    {
      if ( *((_DWORD *)this + 48) == 1 )
      {
        if ( *((_DWORD *)this + 166) != 52 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            237LL,
            (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollkeyframeanimation.cpp",
            v9);
        CurrentValue = CInteractionTracker::GetCurrentValue(*((_QWORD *)this + 73), 1);
        v14 = CInteractionTracker::GetCurrentValue(*((_QWORD *)this + 73), 0);
        v15 = *v4;
        v16 = *((float *)this + 149);
        v17 = *((float *)this + 150);
        *((_DWORD *)this + 186) = 52;
        *((float *)this + 168) = (float)(v15 - v14) * (float)(1.0 / AnimationTimeLength);
        *((float *)this + 169) = (float)(v16 - CurrentValue) * (float)(1.0 / AnimationTimeLength);
        *((float *)this + 170) = (float)(v17 - 0.0) * (float)(1.0 / AnimationTimeLength);
      }
      else
      {
        if ( *((_DWORD *)this + 48) != 2 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            258LL,
            (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollkeyframeanimation.cpp",
            v9);
        if ( *((_DWORD *)this + 166) != 18 )
          wil::details::in1diag3::_FailFast_Unexpected(
            retaddr,
            249LL,
            (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollkeyframeanimation.cpp",
            v9);
        v11 = CInteractionTracker::GetCurrentValue(*((_QWORD *)this + 73), 2);
        v12 = *v4;
        *((_DWORD *)this + 186) = 18;
        *((float *)this + 168) = (float)(v12 - v11) / AnimationTimeLength;
      }
      *((_BYTE *)this + 748) = 1;
    }
  }
  return 0LL;
}
