__int64 __fastcall CScrollKeyframeAnimation::TryProcessInertiaModifier(
        __int64 a1,
        struct CExpressionValueStack *a2,
        wchar_t *a3,
        const char *a4,
        int a5,
        _DWORD *a6)
{
  CConditionalExpression *v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  _DWORD *v10; // rax
  float v11[6]; // [rsp+30h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  int v13; // [rsp+68h] [rbp+20h] BYREF

  if ( (_DWORD)a4 )
  {
    if ( (_DWORD)a4 != 1 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        123LL,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollkeyframeanimation.cpp",
        a4);
    v6 = *(CConditionalExpression **)(*(_QWORD *)(a1 + 584) + 8LL * a5 + 368);
  }
  else
  {
    v6 = *(CConditionalExpression **)(*(_QWORD *)(a1 + 584) + 8LL * a5 + 384);
  }
  LOBYTE(v13) = 0;
  if ( v6 )
  {
    v11[0] = 0.0;
    v7 = CConditionalExpression::ProcessConditionalExpression(v6, a2, a3, 0, (bool *)&v13, v11);
    v8 = v7;
    if ( v7 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x94,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\scrollkeyframeanimation.cpp",
        (const char *)(unsigned int)v7);
      return v8;
    }
    if ( (_BYTE)v13 )
    {
      v10 = a6;
      *a6 = LODWORD(v11[0]);
      v10[18] = 18;
      *((_BYTE *)v10 + 76) = 1;
    }
  }
  return 0LL;
}
