int __fastcall FxMemoryObject::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        _POOL_TYPE PoolType,
        unsigned int PoolTag,
        unsigned __int64 BufferSize,
        FxMemoryObject **Object)
{
  unsigned int v6; // r11d
  _FX_DRIVER_GLOBALS *v7; // r10
  unsigned __int64 v8; // r9

  v6 = PoolTag;
  v7 = FxDriverGlobals;
  v8 = BufferSize;
  if ( BufferSize >= 0x1000
    || FxDriverGlobals->FxVerifierOn && FxDriverGlobals->FxPoolTrackingOn
    || FxIsPagedPoolType(PoolType) )
  {
    return FxMemoryBufferFromPool::_Create(v7, Attributes, PoolType, v6, v8, Object);
  }
  if ( PoolType == NonPagedPoolMustSucceed
    || PoolType == NonPagedPoolCacheAligned
    || PoolType == NonPagedPoolCacheAlignedMustS )
  {
    PoolType = ExDefaultNonPagedPoolType;
  }
  return FxMemoryBuffer::_Create(v7, Attributes, v6, v8, PoolType, Object);
}
