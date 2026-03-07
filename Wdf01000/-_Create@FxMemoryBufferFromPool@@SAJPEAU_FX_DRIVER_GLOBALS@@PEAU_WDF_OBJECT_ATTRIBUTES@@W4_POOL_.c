__int64 __fastcall FxMemoryBufferFromPool::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        _POOL_TYPE PoolType,
        ULONG PoolTag,
        unsigned __int64 BufferSize,
        FxMemoryObject **Buffer)
{
  _WDF_OBJECT_ATTRIBUTES *v10; // rdx
  bool IsPagedPoolType; // r14
  FxDeviceBase *v12; // rbp
  FxMemoryObject *v13; // rax
  FxMemoryObject *v14; // rbx
  FxMemoryObject *v16; // rax
  SIZE_T v17; // rax
  FxMemoryObject_vtbl *PoolWithTag; // rax
  FxPoolTypeOrPoolFlags v19; // [rsp+40h] [rbp-28h] BYREF

  IsPagedPoolType = FxIsPagedPoolType(PoolType);
  if ( IsPagedPoolType && (v12 = FxDeviceBase::_SearchForDevice(FxDriverGlobals, v10)) != 0LL )
  {
    *(_QWORD *)&v19.UsePoolType = 0LL;
    v19.u.PoolFlags = 64LL;
    v13 = (FxMemoryObject *)FxObjectHandleAllocCommon(
                              FxDriverGlobals,
                              &v19,
                              0x80uLL,
                              0,
                              Attributes,
                              0,
                              FxObjectTypeExternal);
    v14 = v13;
    if ( v13 )
    {
      FxMemoryObject::FxMemoryObject(v13, FxDriverGlobals, 0x80u, BufferSize);
      v14[1].FxObject::__vftable = 0LL;
      v14->FxObject::__vftable = (FxMemoryObject_vtbl *)FxMemoryPagedBufferFromPool::`vftable'{for `FxObject'};
      v14->IFxMemory::__vftable = (IFxMemory_vtbl *)FxMemoryBufferFromPool::`vftable'{for `IFxMemory'};
      v14->m_DeviceBase = v12;
    }
    else
    {
      v14 = 0LL;
    }
    if ( !v14 )
      return 3221225626LL;
  }
  else
  {
    *(_QWORD *)&v19.UsePoolType = 0LL;
    v19.u.PoolFlags = 64LL;
    v16 = (FxMemoryObject *)FxObjectHandleAllocCommon(
                              FxDriverGlobals,
                              &v19,
                              0x80uLL,
                              0,
                              Attributes,
                              0,
                              FxObjectTypeExternal);
    v14 = v16;
    if ( !v16 )
      return 3221225626LL;
    FxMemoryObject::FxMemoryObject(v16, FxDriverGlobals, 0x80u, BufferSize);
    v14[1].FxObject::__vftable = 0LL;
    v14->FxObject::__vftable = (FxMemoryObject_vtbl *)FxMemoryPagedBufferFromPool::`vftable'{for `FxObject'};
    v14->IFxMemory::__vftable = (IFxMemory_vtbl *)FxMemoryBufferFromPool::`vftable'{for `IFxMemory'};
  }
  v17 = v14->GetBufferSize(&v14->IFxMemory);
  PoolWithTag = (FxMemoryObject_vtbl *)ExAllocatePoolWithTag(PoolType, v17, PoolTag);
  v14[1].FxObject::__vftable = PoolWithTag;
  if ( !PoolWithTag )
  {
    FxObject::ClearEvtCallbacks(v14);
    v14->DeleteObject(v14);
    return 3221225626LL;
  }
  if ( IsPagedPoolType )
    v14->m_ObjectFlags |= 0x11u;
  *Buffer = v14;
  return 0LL;
}
