int __fastcall FxPkgPnp::Initialize(FxPkgPnp *this, WDFDEVICE_INIT *DeviceInit)
{
  FxWaitLockInternal *p_m_QueryInterfaceLock; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  FxDevice *v6; // r8
  _WDF_OBJECT_ATTRIBUTES *v7; // r9
  _WDF_TRI_STATE PowerPolicyOwner; // eax
  char Raw; // al
  bool v10; // zf
  ULONG Tag; // ecx
  void *v12; // rax
  FX_POOL **v13; // rax
  int result; // eax
  FxObject **p_m_Resources; // rbx
  int v16; // eax
  FxObject *v17; // rcx
  int v18; // r14d
  __int64 v19; // rcx
  FxObject **p_m_ResourcesRaw; // rbx
  FxDevice *v21; // r8
  _WDF_OBJECT_ATTRIBUTES *v22; // r9
  int v23; // eax
  FxObject *v24; // rcx
  int v25; // ebp
  __int64 v26; // rcx
  int v27; // r10d
  __m128i v28; // [rsp+30h] [rbp-18h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  p_m_QueryInterfaceLock = &this->m_QueryInterfaceLock;
  m_Globals = this->m_Globals;
  this->m_ReleaseHardwareAfterDescendantsOnFailure = DeviceInit->ReleaseHardwareOrderOnFailure == WdfReleaseHardwareOrderOnFailureAfterDescendants;
  KeInitializeEvent(&this->m_QueryInterfaceLock.m_Event.m_Event, SynchronizationEvent, 1u);
  p_m_QueryInterfaceLock->m_Event.m_DbgFlagIsInitialized = 1;
  KeInitializeEvent(&this->m_DeviceInterfaceLock.m_Event.m_Event, SynchronizationEvent, 1u);
  this->m_DeviceInterfaceLock.m_Event.m_DbgFlagIsInitialized = 1;
  PowerPolicyOwner = DeviceInit->PnpPower.PowerPolicyOwner;
  if ( PowerPolicyOwner != WdfTrue )
  {
    if ( PowerPolicyOwner == WdfFalse
      || (DeviceInit->InitType != FxDeviceInitTypePdo
        ? (Raw = DeviceInit->Fdo.Filter == 0)
        : (Raw = DeviceInit->Pdo.Raw),
          !Raw) )
    {
LABEL_16:
      p_m_Resources = &this->m_Resources;
      result = FxCmResList::_CreateAndInit(&this->m_Resources, m_Globals, v6, v7, 0);
      if ( result >= 0 )
      {
        v16 = FxObject::Commit(*p_m_Resources, 0LL, 0LL, (_FX_DRIVER_GLOBALS *)this->m_DeviceBase, 1u);
        v17 = *p_m_Resources;
        v18 = v16;
        if ( v16 >= 0 )
        {
          FxObject::AddRef(v17, this, 587, "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgpnp.cpp");
          p_m_ResourcesRaw = &this->m_ResourcesRaw;
          result = FxCmResList::_CreateAndInit(&this->m_ResourcesRaw, m_Globals, v21, v22, 0);
          if ( result >= 0 )
          {
            v23 = FxObject::Commit(*p_m_ResourcesRaw, 0LL, 0LL, (_FX_DRIVER_GLOBALS *)this->m_DeviceBase, 1u);
            v24 = *p_m_ResourcesRaw;
            v25 = v23;
            if ( v23 >= 0 )
            {
              FxObject::AddRef(v24, this, 616, "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgpnp.cpp");
              v27 = FxPkgPnp::RegisterCallbacks(this, &DeviceInit->PnpPower.PnpPowerEventCallbacks);
              if ( v27 >= 0 )
              {
                if ( this->m_PowerPolicyMachine.m_Owner )
                  FxPkgPnp::RegisterPowerPolicyCallbacks(this, &DeviceInit->PnpPower.PolicyEventCallbacks);
              }
              return v27;
            }
            else
            {
              FxObject::ClearEvtCallbacks(v24);
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 48LL))(v26);
              *p_m_ResourcesRaw = 0LL;
              return v25;
            }
          }
        }
        else
        {
          FxObject::ClearEvtCallbacks(v17);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 48LL))(v19);
          *p_m_Resources = 0LL;
          return v18;
        }
      }
      return result;
    }
  }
  v10 = m_Globals->FxPoolTrackingOn == 0;
  Tag = m_Globals->Tag;
  v28.m128i_i64[0] = 0LL;
  v28.m128i_i64[1] = 64LL;
  if ( v10 )
    v12 = 0LL;
  else
    v12 = retaddr;
  v13 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v28, 0x3B8uLL, Tag, v12);
  if ( v13 )
    FxPowerPolicyOwnerSettings::FxPowerPolicyOwnerSettings((FxPowerPolicyOwnerSettings *)v13, this);
  this->m_PowerPolicyMachine.m_Owner = (FxPowerPolicyOwnerSettings *)v13;
  if ( !v13 )
    return -1073741670;
  result = FxPowerPolicyOwnerSettings::Init((FxPowerPolicyOwnerSettings *)v13);
  if ( result >= 0 )
  {
    FxPkgPnp::QueryForD3ColdInterface(this);
    goto LABEL_16;
  }
  return result;
}
