/*
 * XREFs of ?ValidateInterruptResourceCm@FxPkgPnp@@QEAAJPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C006C554
 * Callers:
 *     imp_WdfInterruptCreate @ 0x1C0067D20 (imp_WdfInterruptCreate.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_qd @ 0x1C0007FCC (WPP_IFR_SF_qd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C00195EC (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_qqq @ 0x1C001C308 (WPP_IFR_SF_qqq.c)
 *     ?ValidateCmResource@FxPkgPnp@@QEAAJPEAPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0@Z @ 0x1C006C388 (-ValidateCmResource@FxPkgPnp@@QEAAJPEAPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0@Z.c)
 */

__int64 __fastcall FxPkgPnp::ValidateInterruptResourceCm(
        FxPkgPnp *this,
        _CM_PARTIAL_RESOURCE_DESCRIPTOR *CmIntResourceRaw,
        _CM_PARTIAL_RESOURCE_DESCRIPTOR *CmIntResource,
        _WDF_INTERRUPT_CONFIG *Configuration)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  int v8; // ebx
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *v9; // rdx
  unsigned __int64 _a2; // rax
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *v11; // r13
  unsigned __int64 ObjectHandleUnchecked; // rax
  _LIST_ENTRY *p_m_InterruptListHead; // rcx
  int v14; // r15d
  _LIST_ENTRY *Flink; // rbx
  _LIST_ENTRY **p_Blink; // r9
  const void *v17; // rax
  unsigned __int64 v18; // rax
  FxObject *v19; // r9
  const void *v20; // rax
  const void *_a3; // rdx
  FxObject *v23; // r9
  const void *v24; // rax
  const void *v25; // r8
  FxObject *v26; // r9
  const void *v27; // rax
  const void *v28; // rdx
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *v29; // [rsp+80h] [rbp+8h] BYREF
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *v30; // [rsp+88h] [rbp+10h] BYREF
  _WDF_INTERRUPT_CONFIG *v31; // [rsp+98h] [rbp+20h]

  v31 = Configuration;
  m_Globals = this->m_Globals;
  v29 = CmIntResourceRaw;
  v30 = CmIntResource;
  v8 = FxPkgPnp::ValidateCmResource(this, &v29, &v30);
  if ( v8 < 0 )
    return (unsigned int)v8;
  v9 = v29;
  if ( v29->Type != 2 )
  {
    v8 = -1073741811;
    _a2 = FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    WPP_IFR_SF_qid(m_Globals, 2u, 0xCu, 0x26u, WPP_PnpStateMachine_cpp_Traceguids, CmIntResourceRaw, _a2, -1073741811);
    goto LABEL_5;
  }
  v11 = v30;
  if ( v30->Type != 2 )
  {
    v8 = -1073741811;
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    WPP_IFR_SF_qid(
      m_Globals,
      2u,
      0xCu,
      0x27u,
      WPP_PnpStateMachine_cpp_Traceguids,
      CmIntResource,
      ObjectHandleUnchecked,
      -1073741811);
LABEL_5:
    FxVerifierDbgBreakPoint(m_Globals);
    return (unsigned int)v8;
  }
  p_m_InterruptListHead = &this->m_InterruptListHead;
  v14 = 0;
  Flink = this->m_InterruptListHead.Flink;
  if ( Flink == &this->m_InterruptListHead )
    return 0;
  while ( 1 )
  {
    p_Blink = &Flink[-28].Blink;
    if ( v11 != (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)Flink[-2].Blink )
    {
      if ( v14 )
      {
        v8 = -1073741811;
        v17 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
        WPP_IFR_SF_qd(m_Globals, 2u, 0xCu, 0x28u, WPP_PnpStateMachine_cpp_Traceguids, v17, -1073741811);
        goto LABEL_5;
      }
      goto LABEL_20;
    }
    if ( p_Blink[34] && v31->PassiveHandling )
    {
      FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
      v24 = (const void *)FxObject::GetObjectHandleUnchecked(v23);
      WPP_IFR_SF_qqq(m_Globals, 4u, 0xCu, 0x29u, WPP_PnpStateMachine_cpp_Traceguids, CmIntResource, v24, v25);
      return (unsigned int)-1073741811;
    }
    if ( *((_BYTE *)p_Blink + 258) && v31->CanWakeDevice )
      break;
    if ( (v11->Flags & 2) != 0 )
    {
      if ( ++v14 > (unsigned int)v9->u.MessageInterrupt.Raw.MessageCount )
      {
        v8 = -1073741811;
        v18 = FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
        WPP_IFR_SF_qid(m_Globals, 2u, 0xCu, 0x2Cu, WPP_PnpStateMachine_cpp_Traceguids, CmIntResource, v18, -1073741811);
        goto LABEL_5;
      }
    }
    else
    {
      FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
      v20 = (const void *)FxObject::GetObjectHandleUnchecked(v19);
      WPP_IFR_SF_qqq(m_Globals, 4u, 0xCu, 0x2Bu, WPP_PnpStateMachine_cpp_Traceguids, CmIntResource, v20, _a3);
      v9 = v29;
      p_m_InterruptListHead = &this->m_InterruptListHead;
    }
LABEL_20:
    Flink = Flink->Flink;
    if ( Flink == p_m_InterruptListHead )
      return 0;
  }
  FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
  v27 = (const void *)FxObject::GetObjectHandleUnchecked(v26);
  WPP_IFR_SF_qqq(m_Globals, 4u, 0xCu, 0x2Au, WPP_PnpStateMachine_cpp_Traceguids, CmIntResource, v27, v28);
  return (unsigned int)-1073741811;
}
