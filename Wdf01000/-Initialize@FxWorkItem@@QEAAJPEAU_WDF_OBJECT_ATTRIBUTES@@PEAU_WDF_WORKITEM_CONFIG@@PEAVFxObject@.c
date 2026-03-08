/*
 * XREFs of ?Initialize@FxWorkItem@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WORKITEM_CONFIG@@PEAVFxObject@@PEAPEAUWDFWORKITEM__@@@Z @ 0x1C0040A48
 * Callers:
 *     ?_Create@FxWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WORKITEM_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@PEAPEAUWDFWORKITEM__@@@Z @ 0x1C0040C60 (-_Create@FxWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_WORKITEM_CONFIG@@PEAU_WDF_OBJECT_ATTRIB.c)
 * Callees:
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C00054D0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C0006470 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z @ 0x1C0039624 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z.c)
 *     ?Allocate@MxWorkItem@@QEAAJPEAU_DEVICE_OBJECT@@PEAX@Z @ 0x1C0040930 (-Allocate@MxWorkItem@@QEAAJPEAU_DEVICE_OBJECT@@PEAX@Z.c)
 *     ?_GetEffectiveLock@FxObject@@SAJPEAV1@PEAVIFxHasCallbacks@@EEPEAPEAVFxCallbackLock@@PEAPEAV1@@Z @ 0x1C00465C0 (-_GetEffectiveLock@FxObject@@SAJPEAV1@PEAVIFxHasCallbacks@@EEPEAPEAVFxCallbackLock@@PEAPEAV1@@Z.c)
 */

int __fastcall FxWorkItem::Initialize(
        FxWorkItem *this,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        _WDF_WORKITEM_CONFIG *Config,
        FxObject *ParentObject,
        WDFWORKITEM__ **WorkItem)
{
  void (__fastcall *EvtWorkItemFunc)(WDFWORKITEM__ *); // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rbp
  FxDeviceBase *v11; // rax
  int EffectiveLock; // ebx
  void *v14; // r8
  void **v15; // r8
  IFxHasCallbacks *pCallbacks; // [rsp+60h] [rbp+8h] BYREF

  EvtWorkItemFunc = Config->EvtWorkItemFunc;
  pCallbacks = 0LL;
  m_Globals = this->m_Globals;
  this->m_Callback = EvtWorkItemFunc;
  FxObject::AddRef(this, this, 178, "minkernel\\wdf\\framework\\shared\\core\\fxworkitem.cpp");
  v11 = FxDeviceBase::_SearchForDevice(ParentObject, &pCallbacks);
  this->m_DeviceBase = v11;
  if ( !v11 )
    return -1073741808;
  EffectiveLock = FxObject::_GetEffectiveLock(
                    ParentObject,
                    pCallbacks,
                    Config->AutomaticSerialization,
                    1u,
                    &this->m_CallbackLock,
                    &this->m_CallbackLockObject);
  if ( EffectiveLock < 0 )
  {
    if ( EffectiveLock == -1071644148 )
      WPP_IFR_SF_qd(m_Globals, 2u, 0x12u, 0xCu, WPP_FxWorkItem_cpp_Traceguids, Attributes->ParentObject, -1071644148);
    return EffectiveLock;
  }
  MxWorkItem::Allocate(&this->m_WorkItem, this->m_DeviceBase->m_DeviceObject.m_DeviceObject, v14);
  if ( !this->m_WorkItem.m_WorkItem )
  {
    EffectiveLock = -1073741670;
    WPP_IFR_SF_D(m_Globals, 2u, 0x12u, 0xDu, WPP_FxWorkItem_cpp_Traceguids, 0xC000009A);
    return EffectiveLock;
  }
  FxObject::AddRef(ParentObject, this, 269, "minkernel\\wdf\\framework\\shared\\core\\fxworkitem.cpp");
  v15 = (void **)WorkItem;
  this->m_Object = ParentObject;
  return FxObject::Commit(this, Attributes, v15, (_FX_DRIVER_GLOBALS *)ParentObject, 1u);
}
