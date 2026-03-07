CCommonRenderingEffect *__fastcall CCommonRenderingEffect::`scalar deleting destructor'(
        CCommonRenderingEffect *this,
        char a2)
{
  CDrawListBitmap *v3; // rsi
  __int64 v5; // rbx
  _QWORD *Value; // rbx
  CThreadContext *v8; // rax
  __int64 v9; // rcx
  CThreadContext *v10; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  v3 = (CCommonRenderingEffect *)((char *)this + 64);
  v5 = 2LL;
  do
  {
    v3 = (CDrawListBitmap *)((char *)v3 - 24);
    CDrawListBitmap::~CDrawListBitmap(v3);
    --v5;
  }
  while ( v5 );
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      __global_delete(this, 0x48uLL);
    }
    else
    {
      Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
      if ( !Value )
      {
        v8 = (CThreadContext *)operator new(0x190uLL);
        if ( !v8 || (v10 = CThreadContext::CThreadContext(v8), (Value = v10) == 0LL) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v9, 0LL, 0, -2147024882, 0x42u, 0LL);
          ModuleFailFastForHRESULT(2147942414LL, retaddr);
        }
        TlsSetValue(CThreadContext::s_dwTlsIndex, v10);
      }
      if ( *((_DWORD *)Value + 61) >= *((_DWORD *)Value + 60) )
      {
        operator delete(this);
      }
      else
      {
        *(_QWORD *)this = Value[31];
        ++*((_DWORD *)Value + 61);
        Value[31] = this;
      }
    }
  }
  return this;
}
