void __fastcall FxInternalIoctlOthersContext::ReleaseAndRestore(
        FxInternalIoctlOthersContext *this,
        FxRequestBase *Request)
{
  IFxMemory **m_MemoryObjects; // rbx
  __int64 v5; // rsi

  m_MemoryObjects = this->m_MemoryObjects;
  v5 = 2LL;
  do
  {
    if ( *m_MemoryObjects )
    {
      (*m_MemoryObjects)->Release(
        *m_MemoryObjects,
        this,
        153,
        "minkernel\\wdf\\framework\\shared\\inc\\private\\common\\FxIoTarget.hpp");
      *m_MemoryObjects = 0LL;
    }
    ++m_MemoryObjects;
    --v5;
  }
  while ( v5 );
  FxRequestContext::ReleaseAndRestore(this, Request);
}
