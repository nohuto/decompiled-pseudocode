void __fastcall FxCommonBuffer::FxCommonBuffer(
        FxCommonBuffer *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxDmaEnabler *pDmaEnabler)
{
  FxNonPagedObject::FxNonPagedObject(this, 0x1402u, 0xB8u, FxDriverGlobals);
  this->m_DmaEnabler = pDmaEnabler;
  this->__vftable = (FxCommonBuffer_vtbl *)FxCommonBuffer::`vftable';
  this->m_BufferRawVA = 0LL;
  this->m_BufferAlignedVA = 0LL;
  this->m_BufferAlignedLA.QuadPart = 0LL;
  this->m_BufferRawLA.QuadPart = 0LL;
  this->m_Length = 0LL;
  this->m_RawLength = 0LL;
  this->m_ObjectFlags |= 0x800u;
  this->m_Alignment = pDmaEnabler->m_CommonBufferAlignment;
}
