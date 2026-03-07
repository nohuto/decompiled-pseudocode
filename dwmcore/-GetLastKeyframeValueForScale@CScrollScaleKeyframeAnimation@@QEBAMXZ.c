float __fastcall CScrollScaleKeyframeAnimation::GetLastKeyframeValueForScale(CScrollScaleKeyframeAnimation *this)
{
  KeyframeValue *LastKeyframeValue; // rbx
  int Value; // eax
  const char *v3; // r9
  float v4; // xmm6_4
  int v6[16]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v7; // [rsp+60h] [rbp-28h] BYREF
  int v8; // [rsp+68h] [rbp-20h]
  char v9; // [rsp+6Ch] [rbp-1Ch]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]

  LastKeyframeValue = CKeyframeAnimation::GetLastKeyframeValue(this);
  memset_0(v6, 0, sizeof(v6));
  v7 = 0LL;
  v8 = 18;
  v9 = 0;
  Value = KeyframeValue::GetValue(LastKeyframeValue, 0LL, (struct CExpressionValue *)v6);
  if ( Value < 0 )
    wil::details::in1diag3::FailFast_Hr(
      retaddr,
      47LL,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollscalekeyframeanimation.cpp",
      (const char *)(unsigned int)Value,
      v6[0]);
  if ( v8 != 18 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      48LL,
      (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollscalekeyframeanimation.cpp",
      v3);
  v4 = *(float *)v6;
  Microsoft::WRL::ComPtr<ID2D1PathGeometry>::InternalRelease(&v7);
  return v4;
}
