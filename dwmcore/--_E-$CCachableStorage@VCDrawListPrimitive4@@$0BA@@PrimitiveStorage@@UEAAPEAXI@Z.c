_QWORD *__fastcall PrimitiveStorage::CCachableStorage<CDrawListPrimitive4,16>::`vector deleting destructor'(
        _QWORD *lpMem,
        char a2)
{
  _QWORD *Value; // rbx
  CThreadContext *v5; // rax
  __int64 v6; // rcx
  CThreadContext *v7; // rax
  void *retaddr; // [rsp+38h] [rbp+0h]

  --CHWDrawListEngineMetrics::s_cDrawListPrimitives;
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 4) != 0 )
    {
      __global_delete(lpMem, 0x1B0uLL);
    }
    else
    {
      Value = TlsGetValue(CThreadContext::s_dwTlsIndex);
      if ( !Value )
      {
        v5 = (CThreadContext *)operator new(0x190uLL);
        if ( !v5 || (v7 = CThreadContext::CThreadContext(v5), (Value = v7) == 0LL) )
        {
          MilInstrumentationCheckHR_MaybeFailFast(v6, 0LL, 0, -2147024882, 0x42u, 0LL);
          ModuleFailFastForHRESULT(2147942414LL, retaddr);
        }
        TlsSetValue(CThreadContext::s_dwTlsIndex, v7);
      }
      if ( *((_DWORD *)Value + 53) >= *((_DWORD *)Value + 52) )
      {
        operator delete(lpMem);
      }
      else
      {
        *lpMem = Value[27];
        ++*((_DWORD *)Value + 53);
        Value[27] = lpMem;
      }
    }
  }
  return lpMem;
}
