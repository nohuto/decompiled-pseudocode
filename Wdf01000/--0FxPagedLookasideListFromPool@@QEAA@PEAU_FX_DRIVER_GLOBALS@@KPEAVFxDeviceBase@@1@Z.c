void __fastcall FxPagedLookasideListFromPool::FxPagedLookasideListFromPool(
        FxPagedLookasideListFromPool *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned int PoolTag,
        FxDeviceBase *DeviceBase,
        FxDeviceBase *MemoryDeviceBase)
{
  FxLookasideList::FxLookasideList(this, FxDriverGlobals, 0x200u, PoolTag);
  this->m_RawBufferSize = 0LL;
  this->m_ObjectFlags |= 0x11u;
  this->__vftable = (FxPagedLookasideListFromPool_vtbl *)FxPagedLookasideListFromPool::`vftable';
  this->m_MemoryDeviceBase = MemoryDeviceBase;
  this->m_DeviceBase = DeviceBase;
}
