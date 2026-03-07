struct CObjectCache *__fastcall CThreadContext::GetObjectCache(struct CRoundedRectangleShape *a1)
{
  char *Value; // rbx
  CThreadContext *v3; // rax
  unsigned int v4; // ecx
  CThreadContext *v5; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  Value = (char *)TlsGetValue(CThreadContext::s_dwTlsIndex);
  if ( !Value )
  {
    v3 = (CThreadContext *)operator new(0x190uLL);
    if ( !v3 || (v5 = CThreadContext::CThreadContext(v3), (Value = (char *)v5) == 0LL) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(v4, 0LL, 0, -2147024882, 0x42u, 0LL);
      ModuleFailFastForHRESULT(2147942414LL, retaddr);
    }
    TlsSetValue(CThreadContext::s_dwTlsIndex, v5);
  }
  return (struct CObjectCache *)(Value + 48);
}
