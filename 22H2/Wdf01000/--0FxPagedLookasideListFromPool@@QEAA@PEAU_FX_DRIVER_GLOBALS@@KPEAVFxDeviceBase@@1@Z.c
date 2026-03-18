/*
 * XREFs of ??0FxPagedLookasideListFromPool@@QEAA@PEAU_FX_DRIVER_GLOBALS@@KPEAVFxDeviceBase@@1@Z @ 0x1C00549FC
 * Callers:
 *     imp_WdfLookasideListCreate @ 0x1C004C8E0 (imp_WdfLookasideListCreate.c)
 * Callees:
 *     ??0FxLookasideList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GK@Z @ 0x1C00561C8 (--0FxLookasideList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GK@Z.c)
 */

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
