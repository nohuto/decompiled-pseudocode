/*
 * XREFs of ?_Create@FxMemoryObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_KPEAPEAV1@@Z @ 0x1C0001B44
 * Callers:
 *     imp_WdfMemoryCreate @ 0x1C0001970 (imp_WdfMemoryCreate.c)
 *     ?_AllocAndQueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVICE_OBJECT@@W4DEVICE_REGISTRY_PROPERTY@@W4_POOL_TYPE@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@@Z @ 0x1C003EB40 (-_AllocAndQueryProperty@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAU_DEVI.c)
 *     ?_AllocAndQueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4FxPropertyType@@W4_POOL_TYPE@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFMEMORY__@@PEAK@Z @ 0x1C003ED24 (-_AllocAndQueryPropertyEx@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE_INIT@@PEAV1@PEAXW4F.c)
 *     imp_WdfRegistryQueryMemory @ 0x1C004B1B0 (imp_WdfRegistryQueryMemory.c)
 *     imp_WdfUsbTargetDeviceAllocAndQueryString @ 0x1C0058490 (imp_WdfUsbTargetDeviceAllocAndQueryString.c)
 * Callees:
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C0001948 (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     ?_Create@FxMemoryBuffer@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K_KW4_POOL_TYPE@@PEAPEAVFxMemoryObject@@@Z @ 0x1C0001BC0 (-_Create@FxMemoryBuffer@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K_KW4_POOL_TYPE@.c)
 *     ?_Create@FxMemoryBufferFromPool@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_TYPE@@K_KPEAPEAVFxMemoryObject@@@Z @ 0x1C0042930 (-_Create@FxMemoryBufferFromPool@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@W4_POOL_.c)
 */

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
