/*
 * XREFs of ?AddPowerPolicyProviderAndInstance@FxWmiIrpHandler@@QEAAJPEAU_WDF_WMI_PROVIDER_CONFIG@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x1C0029BA0
 * Callers:
 *     ?RegisterPowerPolicyWmiInstance@FxPkgPnp@@QEAAJPEBU_GUID@@PEAUFxWmiInstanceInternalCallbacks@@PEAPEAVFxWmiInstanceInternal@@@Z @ 0x1C0075598 (-RegisterPowerPolicyWmiInstance@FxPkgPnp@@QEAAJPEBU_GUID@@PEAUFxWmiInstanceInternalCallbacks@@PE.c)
 * Callees:
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00026A4 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x1C0005600 (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0006060 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0006094 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_ @ 0x1C001BC64 (WPP_IFR_SF_.c)
 *     FxIsEqualGuid @ 0x1C00229A0 (FxIsEqualGuid.c)
 *     ??0FxWmiProvider@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAVFxDevice@@@Z @ 0x1C0028094 (--0FxWmiProvider@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAVFxDevice@@@Z.c)
 *     ?AddInstanceLocked@FxWmiProvider@@IEAAJPEAVFxWmiInstance@@EPEAEW4AddInstanceAction@1@@Z @ 0x1C00282C0 (-AddInstanceLocked@FxWmiProvider@@IEAAJPEAVFxWmiInstance@@EPEAEW4AddInstanceAction@1@@Z.c)
 *     ??0FxWmiInstanceInternal@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxWmiInstanceInternalCallbacks@@PEAVFxWmiProvider@@@Z @ 0x1C0028B00 (--0FxWmiInstanceInternal@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxWmiInstanceInternalCallbacks@@PEAVF.c)
 *     ?AddProviderLocked@FxWmiIrpHandler@@IEAAJPEAVFxWmiProvider@@EPEAE@Z @ 0x1C0029EE8 (-AddProviderLocked@FxWmiIrpHandler@@IEAAJPEAVFxWmiProvider@@EPEAE@Z.c)
 *     ?DeferUpdateLocked@FxWmiIrpHandler@@AEAAEE@Z @ 0x1C002A168 (-DeferUpdateLocked@FxWmiIrpHandler@@AEAAEE@Z.c)
 *     ?FindProviderLocked@FxWmiIrpHandler@@IEAAPEAVFxWmiProvider@@PEAU_GUID@@@Z @ 0x1C002A5B0 (-FindProviderLocked@FxWmiIrpHandler@@IEAAPEAVFxWmiProvider@@PEAU_GUID@@@Z.c)
 *     ?RemoveProviderLocked@FxWmiIrpHandler@@IEAAXPEAVFxWmiProvider@@@Z @ 0x1C002A760 (-RemoveProviderLocked@FxWmiIrpHandler@@IEAAXPEAVFxWmiProvider@@@Z.c)
 *     ?UpdateGuids@FxWmiIrpHandler@@AEAAXXZ @ 0x1C002A79C (-UpdateGuids@FxWmiIrpHandler@@AEAAXXZ.c)
 */

__int64 __fastcall FxWmiIrpHandler::AddPowerPolicyProviderAndInstance(
        FxWmiIrpHandler *this,
        _WDF_WMI_PROVIDER_CONFIG *ProviderConfig,
        FxWmiInstanceInternalCallbacks *InstanceCallbacks,
        FxWmiInstanceInternal **Instance)
{
  char v5; // r12
  unsigned __int8 updated; // r15
  FxWmiInstance *v7; // rsi
  FxWmiInstanceInternalCallbacks *v8; // r13
  FxWmiProvider *ProviderLocked; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxWmiProvider *v12; // rax
  unsigned __int8 v13; // r8
  FxWmiProvider *v14; // rax
  int v15; // edi
  _FX_DRIVER_GLOBALS *v16; // rcx
  FxWmiInstanceInternal *v17; // rax
  FxObject *v18; // rax
  char v19; // al
  unsigned __int8 PreviousIrql[16]; // [rsp+48h] [rbp-29h] BYREF
  FxPoolTypeOrPoolFlags v22; // [rsp+58h] [rbp-19h]
  FxPoolTypeOrPoolFlags v23; // [rsp+68h] [rbp-9h]
  FxPoolTypeOrPoolFlags v24; // [rsp+78h] [rbp+7h] BYREF
  FxPoolTypeOrPoolFlags v25; // [rsp+88h] [rbp+17h] BYREF
  unsigned __int8 update; // [rsp+E0h] [rbp+6Fh] BYREF
  FxWmiInstanceInternalCallbacks *Callbacks; // [rsp+E8h] [rbp+77h]
  volatile signed __int64 *v28; // [rsp+F0h] [rbp+7Fh]

  v28 = (volatile signed __int64 *)Instance;
  Callbacks = InstanceCallbacks;
  PreviousIrql[0] = 0;
  v5 = 0;
  update = 0;
  updated = 0;
  v7 = 0LL;
  v8 = InstanceCallbacks;
  FxNonPagedObject::Lock(this, PreviousIrql, (unsigned __int8)InstanceCallbacks);
  ProviderLocked = FxWmiIrpHandler::FindProviderLocked(this, &ProviderConfig->Guid);
  if ( ProviderLocked )
  {
    if ( ProviderLocked->m_NumInstances
      && (FxIsEqualGuid(&ProviderLocked->m_Guid, &GUID_POWER_DEVICE_ENABLE)
       || FxIsEqualGuid(&ProviderLocked->m_Guid, &GUID_POWER_DEVICE_WAKE_ENABLE)) )
    {
      WPP_IFR_SF_(this->m_Globals, 2u, 0xDu, 0xDu, WPP_FxWmiIrpHandler_cpp_Traceguids);
      v15 = -1073741055;
      goto LABEL_25;
    }
    goto LABEL_13;
  }
  m_Globals = this->m_Globals;
  *(_QWORD *)&v22.UsePoolType = 0LL;
  v22.u.PoolFlags = 64LL;
  v24 = v22;
  v12 = (FxWmiProvider *)FxObjectHandleAllocCommon(m_Globals, &v24, 0xD8uLL, 0, 0LL, 0, FxObjectTypeExternal);
  if ( !v12 )
  {
    ProviderLocked = 0LL;
    goto LABEL_8;
  }
  FxWmiProvider::FxWmiProvider(v12, this->m_Globals, ProviderConfig, this->m_Device);
  ProviderLocked = v14;
  if ( !v14 )
  {
LABEL_8:
    v15 = -1073741670;
    goto LABEL_25;
  }
  v5 = 1;
  v15 = FxWmiIrpHandler::AddProviderLocked(this, v14, PreviousIrql[0], 0LL);
  if ( v15 < 0 )
    goto LABEL_25;
  v15 = FxObject::AssignParentObject(ProviderLocked, this->m_DeviceBase);
  if ( v15 < 0 )
  {
LABEL_24:
    FxWmiIrpHandler::RemoveProviderLocked(this, ProviderLocked);
    goto LABEL_25;
  }
  v8 = Callbacks;
LABEL_13:
  v16 = this->m_Globals;
  *(_QWORD *)&v23.UsePoolType = 0LL;
  v23.u.PoolFlags = 64LL;
  v25 = v23;
  v17 = (FxWmiInstanceInternal *)FxObjectHandleAllocCommon(v16, &v25, 0xB0uLL, 0, 0LL, 0, FxObjectTypeExternal);
  if ( !v17
    || (FxWmiInstanceInternal::FxWmiInstanceInternal(v17, this->m_Globals, v8, ProviderLocked),
        (v7 = (FxWmiInstance *)v18) == 0LL) )
  {
    v15 = -1073741670;
    goto LABEL_23;
  }
  v15 = FxObject::AssignParentObject(v18, ProviderLocked);
  if ( v15 < 0 )
    goto LABEL_23;
  if ( _InterlockedCompareExchange64(v28, (signed __int64)v7, 0LL) )
  {
    updated = update;
    v15 = -1073741771;
    goto LABEL_23;
  }
  v15 = FxWmiProvider::AddInstanceLocked(ProviderLocked, v7, 0, &update, AddInstanceToHead);
  updated = update;
  v19 = v5;
  if ( v15 < 0 )
  {
LABEL_23:
    if ( !v5 )
      goto LABEL_25;
    goto LABEL_24;
  }
  if ( update )
  {
    updated = FxWmiIrpHandler::DeferUpdateLocked(this, PreviousIrql[0]);
    v19 = v5;
  }
  v5 = v19;
LABEL_25:
  FxNonPagedObject::Unlock(this, PreviousIrql[0], v13);
  if ( v15 < 0 )
  {
    if ( v7 )
      v7->DeleteObject(v7);
    if ( v5 )
      ProviderLocked->DeleteObject(ProviderLocked);
  }
  else if ( updated )
  {
    FxWmiIrpHandler::UpdateGuids(this);
  }
  return (unsigned int)v15;
}
