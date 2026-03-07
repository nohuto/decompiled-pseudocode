__int64 __fastcall FxPkgPnp::AddUsageDevice(FxPkgPnp *this, _DEVICE_OBJECT *DependentDevice, unsigned __int8 a3)
{
  unsigned __int8 v5; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  void *v7; // rax
  FX_POOL **v8; // rax
  FxRelatedDeviceList *v9; // rcx
  _QWORD *v10; // rax
  int v11; // edi
  const void *_a1; // rax
  _FX_DRIVER_GLOBALS *v14; // rcx
  FxRelatedDevice *v15; // rax
  __int64 v16; // rax
  FxObject *v17; // rdi
  int v18; // ebx
  FxPoolTypeOrPoolFlags v19; // [rsp+40h] [rbp-10h] BYREF
  void *retaddr; // [rsp+68h] [rbp+18h]
  unsigned __int8 irql; // [rsp+70h] [rbp+20h] BYREF

  if ( this->m_UsageDependentDeviceList )
    goto LABEL_11;
  irql = 0;
  FxNonPagedObject::Lock(this, &irql, a3);
  if ( this->m_UsageDependentDeviceList )
    goto LABEL_7;
  m_Globals = this->m_Globals;
  v7 = retaddr;
  *(_QWORD *)&v19.UsePoolType = 0LL;
  v19.u.PoolFlags = 64LL;
  if ( !m_Globals->FxPoolTrackingOn )
    v7 = 0LL;
  v8 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, (__m128i *)&v19, 0x50uLL, m_Globals->Tag, v7);
  v9 = (FxRelatedDeviceList *)v8;
  if ( v8 )
  {
    *((_DWORD *)v8 + 12) = 0;
    *(_WORD *)((char *)v8 + 53) = 0;
    v8[5] = 0LL;
    v10 = v8 + 1;
    v9->m_ListLock.m_Lock = 0LL;
    v9->m_ListLock.m_DbgFlagIsInitialized = 1;
    v10[1] = v10;
    *v10 = v10;
    v9->m_TransactionHead.Blink = &v9->m_TransactionHead;
    v9->m_TransactionHead.Flink = &v9->m_TransactionHead;
    v9->__vftable = (FxRelatedDeviceList_vtbl *)FxRelatedDeviceList::`vftable';
    v9->m_DeleteOnRemove = 1;
    v9->m_NeedReportMissing = 0;
    this->m_UsageDependentDeviceList = v9;
LABEL_7:
    v11 = 0;
    goto LABEL_8;
  }
  this->m_UsageDependentDeviceList = 0LL;
  v11 = -1073741670;
  _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
  WPP_IFR_SF_qd(this->m_Globals, 2u, 0xCu, 0x48u, (const _GUID *)&WPP_FxPkgPnp_cpp_Traceguids, _a1, -1073741670);
LABEL_8:
  FxNonPagedObject::Unlock(this, irql, v5);
  if ( v11 < 0 )
    return (unsigned int)v11;
LABEL_11:
  v14 = this->m_Globals;
  *(_QWORD *)&v19.UsePoolType = 0LL;
  v19.u.PoolFlags = 64LL;
  v15 = (FxRelatedDevice *)FxObjectHandleAllocCommon(v14, &v19, 0xA8uLL, 0, 0LL, 0, FxObjectTypeInternal);
  if ( !v15 )
    return 3221225626LL;
  FxRelatedDevice::FxRelatedDevice(v15, DependentDevice, this->m_Globals);
  v17 = (FxObject *)v16;
  if ( !v16 )
    return 3221225626LL;
  v18 = FxTransactionedList::Add(this->m_UsageDependentDeviceList, this->m_Globals, (FxTransactionedEntry *)(v16 + 104));
  if ( v18 < 0 )
  {
    FxObject::ClearEvtCallbacks(v17);
    v17->DeleteObject(v17);
  }
  return (unsigned int)v18;
}
