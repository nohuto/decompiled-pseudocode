__int64 __fastcall CThreadContext::RegisterGraphWalkRoot(const void *a1)
{
  _QWORD *Value; // rbx
  __int64 v3; // r8
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rdx
  int v6; // ebx
  __int64 v8; // rdx
  CThreadContext *v9; // rax
  unsigned int v10; // ecx
  CThreadContext *v11; // rax
  __int64 v12; // rdx
  unsigned int v13; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    v9 = (CThreadContext *)operator new(0x190uLL);
    if ( !v9 || (v11 = CThreadContext::CThreadContext(v9), (Value = v11) == 0LL) )
    {
      v6 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(v10, 0LL, 0, -2147024882, 0x42u, 0LL);
      v12 = 208LL;
      goto LABEL_15;
    }
    TlsSetValue(CThreadContext::s_dwTlsIndex, v11);
  }
  v3 = Value[3];
  if ( (v3 & 2) != 0 )
    v4 = *(_QWORD *)(v3 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    v4 = Value[3] & 1LL;
  v5 = 0LL;
  if ( v4 )
  {
    while ( a1 != (const void *)CPtrArrayBase::operator[](Value + 3, v5) )
    {
      v5 = v8 + 1;
      if ( v5 >= v4 )
        goto LABEL_5;
    }
    v6 = -2147467260;
    v12 = 217LL;
  }
  else
  {
LABEL_5:
    v6 = CPtrArrayBase::InsertAt((CPtrArrayBase *)(Value + 3), (unsigned __int64)a1, v4);
    if ( v6 >= 0 )
      return 0LL;
    v12 = 221LL;
  }
LABEL_15:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\common\\threadcontext.cpp",
    (const char *)(unsigned int)v6,
    v13);
  return (unsigned int)v6;
}
