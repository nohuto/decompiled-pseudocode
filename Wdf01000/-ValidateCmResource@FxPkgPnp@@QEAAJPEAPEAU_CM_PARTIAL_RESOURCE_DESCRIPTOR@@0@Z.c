/*
 * XREFs of ?ValidateCmResource@FxPkgPnp@@QEAAJPEAPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0@Z @ 0x1C006C388
 * Callers:
 *     ?ValidateInterruptResourceCm@FxPkgPnp@@QEAAJPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C006C554 (-ValidateInterruptResourceCm@FxPkgPnp@@QEAAJPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0PEAU_WDF_INTER.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C00195EC (WPP_IFR_SF_qid.c)
 */

__int64 __fastcall FxPkgPnp::ValidateCmResource(
        FxPkgPnp *this,
        _CM_PARTIAL_RESOURCE_DESCRIPTOR **CmResourceRaw,
        _CM_PARTIAL_RESOURCE_DESCRIPTOR **CmResource)
{
  FxCmResList *m_Resources; // r9
  _FX_DRIVER_GLOBALS *m_Globals; // r12
  _LIST_ENTRY *Flink; // r10
  FxCollectionInternal *v9; // r9
  _LIST_ENTRY **p_Blink; // r10
  _LIST_ENTRY **v11; // r11
  _LIST_ENTRY *v12; // rcx
  _LIST_ENTRY *v13; // rbp
  unsigned int v14; // ebx
  unsigned __int64 ObjectHandleUnchecked; // rax
  const void **v16; // r8
  int v17; // edx
  const void *v19; // rbx
  unsigned __int64 v20; // rax
  int v21; // edx
  const void *_a1; // r8
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *v23; // r15
  unsigned __int64 v24; // rax
  int v25; // edx
  unsigned __int16 v26; // r9
  const void *v27; // rax
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *v28; // rbp
  unsigned __int64 v29; // rax
  int v30; // edx
  __int64 _a2; // [rsp+30h] [rbp-28h]
  int _a3; // [rsp+38h] [rbp-20h]

  m_Resources = this->m_Resources;
  m_Globals = this->m_Globals;
  Flink = m_Resources->m_ListHead.Flink;
  v9 = &m_Resources->FxCollectionInternal;
  p_Blink = &Flink[-1].Blink;
  v11 = &this->m_ResourcesRaw->m_ListHead.Flink[-1].Blink;
  if ( p_Blink == (_LIST_ENTRY **)v9 )
  {
LABEL_4:
    v14 = -1073741811;
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    WPP_IFR_SF_qid(m_Globals, 2u, 0xCu, 0x22u, WPP_PnpStateMachine_cpp_Traceguids, *v16, ObjectHandleUnchecked, v17);
  }
  else
  {
    while ( 1 )
    {
      v12 = *p_Blink;
      v13 = *v11;
      if ( (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)((char *)&(*p_Blink)[7].Blink + 4) == *CmResource )
        break;
      p_Blink = &p_Blink[1][-1].Blink;
      v11 = &v11[1][-1].Blink;
      if ( p_Blink == (_LIST_ENTRY **)v9 )
        goto LABEL_4;
    }
    v19 = (char *)&v13[7].Blink + 4;
    if ( (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)((char *)&v13[7].Blink + 4) == *CmResourceRaw )
    {
      v23 = (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)&v12[6].Blink;
      if ( RtlCompareMemory((char *)&v12[7].Blink + 4, &v12[6].Blink, 0x14uLL) == 20 )
      {
        v28 = (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)&v13[6].Blink;
        if ( RtlCompareMemory(v19, v28, 0x14uLL) == 20 )
        {
          *CmResource = v23;
          v14 = 0;
          *CmResourceRaw = v28;
          return v14;
        }
        v14 = -1073741811;
        v29 = FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
        _a3 = v30;
        v26 = 37;
        _a2 = v29;
        v27 = *CmResourceRaw;
      }
      else
      {
        v14 = -1073741811;
        v24 = FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
        _a3 = v25;
        v26 = 36;
        _a2 = v24;
        v27 = *CmResource;
      }
      WPP_IFR_SF_qid(m_Globals, 2u, 0xCu, v26, WPP_PnpStateMachine_cpp_Traceguids, v27, _a2, _a3);
    }
    else
    {
      v14 = -1073741811;
      v20 = FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
      WPP_IFR_SF_qid(m_Globals, 2u, 0xCu, 0x23u, WPP_PnpStateMachine_cpp_Traceguids, _a1, v20, v21);
    }
  }
  FxVerifierDbgBreakPoint(m_Globals);
  return v14;
}
