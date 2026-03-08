/*
 * XREFs of ??_E?$CCachableStorage@VCDrawListPrimitive4@@$0BA@@PrimitiveStorage@@UEAAPEAXI@Z @ 0x1800DA640
 * Callers:
 *     <none>
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180034790 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800893D4 (--3@YAXPEAX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800C01B0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??0CThreadContext@@AEAA@XZ @ 0x1800FE0E0 (--0CThreadContext@@AEAA@XZ.c)
 *     ?__global_delete@@YAXPEAX_K@Z @ 0x1801046B4 (-__global_delete@@YAXPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

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
