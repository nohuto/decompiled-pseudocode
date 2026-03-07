_QWORD *__fastcall CCachedVisualImage::CalcOcclusion(_QWORD *a1, __int64 a2)
{
  _QWORD *v2; // rdi
  __int64 v5; // rsi
  gsl::details **v6; // rax
  gsl::details *v7; // rcx
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF

  v2 = a1 + 27;
  v5 = 0LL;
  if ( COcclusionContext::IsCurrent((COcclusionContext *)(a1 + 27))
    && (*(__int64 (__fastcall **)(_QWORD *))(*a1 + 216LL))(a1) == a1[28] )
  {
    return v2;
  }
  v6 = (gsl::details **)(*(__int64 (__fastcall **)(_QWORD *))(*a1 + 216LL))(a1);
  v7 = *v6;
  v9[0] = 1LL;
  v9[1] = a2;
  if ( !a2 )
  {
    gsl::details::terminate(v7);
    JUMPOUT(0x1800EBC8DLL);
  }
  if ( (*((int (__fastcall **)(gsl::details **, _QWORD *, _QWORD *))v7 + 25))(v6, v9, v2) >= 0 )
    return v2;
  return (_QWORD *)v5;
}
