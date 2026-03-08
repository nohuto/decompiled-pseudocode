/*
 * XREFs of ?Initialize@FxDpc@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_DPC_CONFIG@@PEAVFxObject@@PEAPEAUWDFDPC__@@@Z @ 0x1C0023328
 * Callers:
 *     ?_Create@FxDpc@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_DPC_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@PEAPEAUWDFDPC__@@@Z @ 0x1C0023470 (-_Create@FxDpc@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_DPC_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAV.c)
 * Callees:
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C00054D0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C0006470 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z @ 0x1C0039624 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z.c)
 *     ?_GetEffectiveLock@FxObject@@SAJPEAV1@PEAVIFxHasCallbacks@@EEPEAPEAVFxCallbackLock@@PEAPEAV1@@Z @ 0x1C00465C0 (-_GetEffectiveLock@FxObject@@SAJPEAV1@PEAVIFxHasCallbacks@@EEPEAPEAVFxCallbackLock@@PEAPEAV1@@Z.c)
 */

int __fastcall FxDpc::Initialize(
        FxDpc *this,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        _WDF_DPC_CONFIG *Config,
        FxObject *ParentObject,
        WDFDPC__ **Dpc)
{
  void (__fastcall *EvtDpcFunc)(WDFDPC__ *); // rax
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  FxDeviceBase *v11; // rax
  int EffectiveLock; // edi
  void **v14; // r8
  IFxHasCallbacks *pCallbacks; // [rsp+60h] [rbp+8h] BYREF

  EvtDpcFunc = Config->EvtDpcFunc;
  m_Globals = this->m_Globals;
  pCallbacks = 0LL;
  this->m_Callback = EvtDpcFunc;
  KeInitializeDpc(&this->m_Dpc, (PKDEFERRED_ROUTINE)FxDpc::FxDpcThunk, this);
  FxObject::AddRef(this, this, 170, "minkernel\\wdf\\framework\\kmdf\\src\\core\\fxdpc.cpp");
  v11 = FxDeviceBase::_SearchForDevice(ParentObject, &pCallbacks);
  this->m_DeviceBase = v11;
  if ( !v11 )
    return -1073741808;
  EffectiveLock = FxObject::_GetEffectiveLock(
                    ParentObject,
                    pCallbacks,
                    Config->AutomaticSerialization,
                    0,
                    &this->m_CallbackLock,
                    &this->m_CallbackLockObject);
  if ( EffectiveLock >= 0 )
  {
    FxObject::AddRef(ParentObject, this, 242, "minkernel\\wdf\\framework\\kmdf\\src\\core\\fxdpc.cpp");
    v14 = (void **)Dpc;
    this->m_Object = ParentObject;
    return FxObject::Commit(this, Attributes, v14, (_FX_DRIVER_GLOBALS *)ParentObject, 1u);
  }
  else
  {
    if ( EffectiveLock == -1071644148 )
      WPP_IFR_SF_qd(m_Globals, 2u, 0x12u, 0xBu, WPP_FxDpc_cpp_Traceguids, Attributes->ParentObject, -1071644148);
    return EffectiveLock;
  }
}
