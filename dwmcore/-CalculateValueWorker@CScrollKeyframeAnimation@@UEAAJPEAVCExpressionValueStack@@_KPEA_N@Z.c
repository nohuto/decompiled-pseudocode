__int64 __fastcall CScrollKeyframeAnimation::CalculateValueWorker(
        CScrollKeyframeAnimation *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        bool *a4)
{
  int v8; // edi
  __int64 v9; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v8 = CScrollKeyframeAnimation::EnsureInertiaStateChangeAdded(this);
  if ( v8 < 0 )
  {
    v9 = 64LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollkeyframeanimation.cpp",
      (const char *)(unsigned int)v8);
    return (unsigned int)v8;
  }
  v8 = (*(__int64 (__fastcall **)(CScrollKeyframeAnimation *, struct CExpressionValueStack *, __int64))(*(_QWORD *)this + 312LL))(
         this,
         a2,
         a3);
  if ( v8 < 0 )
  {
    v9 = 72LL;
    goto LABEL_3;
  }
  v8 = CKeyframeAnimation::CalculateValueWorker(this, a2, a3, a4);
  if ( v8 < 0 )
  {
    v9 = 80LL;
    goto LABEL_3;
  }
  (*(void (__fastcall **)(CScrollKeyframeAnimation *, struct CExpressionValueStack *, __int64))(*(_QWORD *)this + 320LL))(
    this,
    a2,
    a3);
  return 0LL;
}
