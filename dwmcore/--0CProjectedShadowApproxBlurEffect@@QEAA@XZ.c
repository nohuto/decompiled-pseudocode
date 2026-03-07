CProjectedShadowApproxBlurEffect *__fastcall CProjectedShadowApproxBlurEffect::CProjectedShadowApproxBlurEffect(
        CProjectedShadowApproxBlurEffect *this)
{
  unsigned int v1; // edx
  _WORD *v2; // r8
  __int16 v3; // ax
  CProjectedShadowApproxBlurEffect *result; // rax
  __int128 v5; // [rsp+20h] [rbp-18h]

  *(_QWORD *)this = &CProjectedShadowApproxBlurEffect::`vftable'{for `CMILRefCountBaseT<Windows::UI::Composition::IEffectInstance>'};
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = &CProjectedShadowApproxBlurEffect::`vftable'{for `Windows::UI::Composition::ICompiledEffect'};
  v1 = 0;
  *((_QWORD *)this + 7) = 0LL;
  v2 = (_WORD *)((char *)this + 24);
  *((_QWORD *)this + 8) = 0LL;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  do
  {
    v3 = v1++ | 0x200;
    *v2++ = v3;
  }
  while ( v1 < 2 );
  *(_QWORD *)&v5 = 2LL;
  if ( this == (CProjectedShadowApproxBlurEffect *)-24LL )
  {
    gsl::details::terminate((gsl::details *)0xFFFFFFFFFFFFFFE8LL);
    __debugbreak();
  }
  *((_QWORD *)&v5 + 1) = (char *)this + 24;
  *(_OWORD *)((char *)this + 56) = v5;
  *((_QWORD *)this + 9) = 86686LL;
  *((_QWORD *)this + 10) = &unk_180356910;
  *((_QWORD *)this + 12) = "ProjectedShadowApproxBlur_PS";
  *((_WORD *)this + 54) = 10;
  result = this;
  *((_BYTE *)this + 88) = 1;
  *((_DWORD *)this + 26) = 20;
  return result;
}
