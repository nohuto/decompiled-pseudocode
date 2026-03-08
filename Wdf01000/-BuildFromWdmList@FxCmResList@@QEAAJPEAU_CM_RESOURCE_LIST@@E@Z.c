/*
 * XREFs of ?BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z @ 0x1C004E964
 * Callers:
 *     ?PnpMatchResources@FxPkgPnp@@IEAAJXZ @ 0x1C006BA08 (-PnpMatchResources@FxPkgPnp@@IEAAJXZ.c)
 *     ?PnpSendStartDeviceDownTheStackOverload@FxPkgFdo@@EEAAEXZ @ 0x1C00780C0 (-PnpSendStartDeviceDownTheStackOverload@FxPkgFdo@@EEAAEXZ.c)
 * Callees:
 *     ?FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00026A4 (-FxObjectHandleAllocCommon@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@UFxPoolTypeOrPoolFlags@@_KKPEAU_WDF_OB.c)
 *     ?AssignParentObject@FxObject@@QEAAJPEAV1@@Z @ 0x1C0005600 (-AssignParentObject@FxObject@@QEAAJPEAV1@@Z.c)
 *     ??0FxResourceCm@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z @ 0x1C00489FC (--0FxResourceCm@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@@Z.c)
 *     ?Add@FxCollectionInternal@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C004F080 (-Add@FxCollectionInternal@@QEAAEPEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?Clear@FxCollectionInternal@@QEAAXXZ @ 0x1C004F1A4 (-Clear@FxCollectionInternal@@QEAAXXZ.c)
 */

__int64 __fastcall FxCmResList::BuildFromWdmList(
        FxCmResList *this,
        _CM_RESOURCE_LIST *WdmResourceList,
        unsigned __int8 AccessFlags)
{
  FxCollectionInternal *v3; // r14
  unsigned int v7; // edi
  unsigned int Count; // r15d
  unsigned int v9; // ebx
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *PartialDescriptors; // rsi
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxResourceCm *v12; // rax
  FxObject *v13; // rax
  FxObject *v14; // rdi
  FxPoolTypeOrPoolFlags v16; // [rsp+40h] [rbp-28h] BYREF

  v3 = &this->FxCollectionInternal;
  v7 = 0;
  FxCollectionInternal::Clear(&this->FxCollectionInternal);
  this->m_AccessFlags = AccessFlags;
  if ( WdmResourceList )
  {
    Count = WdmResourceList->List[0].PartialResourceList.Count;
    v9 = 0;
    PartialDescriptors = WdmResourceList->List[0].PartialResourceList.PartialDescriptors;
    if ( Count )
    {
      while ( 1 )
      {
        m_Globals = this->m_Globals;
        *(_QWORD *)&v16.UsePoolType = 0LL;
        v16.u.PoolFlags = 64LL;
        v12 = (FxResourceCm *)FxObjectHandleAllocCommon(m_Globals, &v16, 0x90uLL, 0, 0LL, 0, FxObjectTypeInternal);
        if ( !v12 )
          break;
        FxResourceCm::FxResourceCm(v12, this->m_Globals, PartialDescriptors);
        v14 = v13;
        if ( !v13 )
          break;
        FxObject::AssignParentObject(v13, this);
        if ( !FxCollectionInternal::Add(v3, this->m_Globals, v14) )
          break;
        ++v9;
        ++PartialDescriptors;
        v7 = 0;
        if ( v9 >= Count )
          return v7;
      }
      v7 = -1073741670;
      FxCollectionInternal::Clear(v3);
    }
  }
  return v7;
}
