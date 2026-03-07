__int64 __fastcall CExpressionManager::AddSortedAnimation(
        CExpressionManager *this,
        struct CBaseExpression *a2,
        __int64 a3,
        const char *a4)
{
  __int64 v5; // rcx
  char *v6; // r8
  unsigned int v7; // eax
  unsigned int v8; // r9d
  unsigned int v9; // ebx
  int v11; // eax
  __int64 v12; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct CBaseExpression *v14; // [rsp+48h] [rbp+10h] BYREF

  v14 = a2;
  if ( (*((_BYTE *)a2 + 232) & 8) == 0 )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xF1,
      (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\expressionmanager.cpp",
      a4);
  v5 = 32LL * (unsigned int)(1 - *((_DWORD *)this + 41));
  v6 = (char *)this + v5;
  v7 = *((_DWORD *)v6 + 48);
  v8 = v7 + 1;
  if ( v7 + 1 < v7 )
  {
    v9 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(v5, 0LL, 0, -2147024362, 0xB5u, 0LL);
  }
  else
  {
    v9 = 0;
    if ( v8 > *((_DWORD *)v6 + 47) )
    {
      v11 = DynArrayImpl<1>::AddMultipleAndSet((__int64)(v6 + 168), 8u, (__int64)v6, &v14);
      v9 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(v12, 0LL, 0, v11, 0xC0u, 0LL);
    }
    else
    {
      *(_QWORD *)(*((_QWORD *)v6 + 21) + 8LL * v7) = a2;
      *((_DWORD *)v6 + 48) = v8;
    }
  }
  return v9;
}
