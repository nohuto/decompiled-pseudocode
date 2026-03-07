void __fastcall FxDmaEnabler::AllocateCommonBuffer(
        FxDmaEnabler *this,
        unsigned __int64 Length,
        void **BufferVA,
        _LARGE_INTEGER *BufferPA)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  _LARGE_INTEGER *v5; // r10
  const void *globals; // rax
  __int64 level; // rdx
  unsigned int v8; // r8d

  m_Globals = this->m_Globals;
  *BufferVA = 0LL;
  v5 = BufferPA;
  BufferPA->QuadPart = 0LL;
  if ( Length > 0xFFFFFFFF )
  {
    globals = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qi(m_Globals, level, v8, 0x1Cu, WPP_FxDmaEnabler_cpp_Traceguids, globals, level);
    FxVerifierDbgBreakPoint(m_Globals);
  }
  else
  {
    LOBYTE(BufferPA) = 1;
    *BufferVA = this->m_SimplexAdapterInfo.AdapterObject->DmaOperations->AllocateCommonBuffer(
                  this->m_SimplexAdapterInfo.AdapterObject,
                  Length,
                  v5,
                  BufferPA);
  }
}
