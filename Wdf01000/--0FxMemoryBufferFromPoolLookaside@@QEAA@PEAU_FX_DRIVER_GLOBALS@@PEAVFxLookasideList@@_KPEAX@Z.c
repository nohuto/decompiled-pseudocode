void __fastcall FxMemoryBufferFromPoolLookaside::FxMemoryBufferFromPoolLookaside(
        FxMemoryBufferFromPoolLookaside *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        FxLookasideList *Lookaside,
        unsigned __int64 BufferSize,
        void *Buffer)
{
  FxMemoryBufferFromLookaside::FxMemoryBufferFromLookaside(this, FxDriverGlobals, Lookaside, BufferSize);
  this->FxMemoryBufferFromLookaside::FxMemoryObject::FxObject::__vftable = (FxMemoryBufferFromPoolLookaside_vtbl *)FxMemoryBufferFromPoolLookaside::`vftable'{for `FxObject'};
  this->FxMemoryBufferFromLookaside::FxMemoryObject::IFxMemory::__vftable = (IFxMemory_vtbl *)FxMemoryBufferFromPoolLookaside::`vftable'{for `IFxMemory'};
  this->m_Pool = Buffer;
}
