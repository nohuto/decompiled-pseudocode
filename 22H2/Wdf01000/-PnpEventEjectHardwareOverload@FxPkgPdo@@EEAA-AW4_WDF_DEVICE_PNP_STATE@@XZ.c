/*
 * XREFs of ?PnpEventEjectHardwareOverload@FxPkgPdo@@EEAA?AW4_WDF_DEVICE_PNP_STATE@@XZ @ 0x1C0079420
 * Callers:
 *     <none>
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_q @ 0x1C0013820 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C0013DA4 (WPP_IFR_SF_qq.c)
 *     ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C00150E8 (-IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002E65C (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C002FD7C (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_ @ 0x1C00325D4 (WPP_IFR_SF_.c)
 *     ?UpdateAsMissing@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z @ 0x1C003C498 (-UpdateAsMissing@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z.c)
 */

__int64 __fastcall FxPkgPdo::PnpEventEjectHardwareOverload(FxPkgPdo *this)
{
  unsigned __int64 ObjectHandleUnchecked; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *); // rax
  int _a3; // edi
  FxDeviceDescriptionEntry *m_Description; // rdx
  FxChildList *m_DeviceList; // rbp
  const void *_a1; // rax
  __int64 v8; // rdx
  MxEvent *p_m_ScanEvent; // rcx
  _FX_DRIVER_GLOBALS *v10; // rax
  unsigned int v11; // ebp
  unsigned int v12; // edx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _FX_DRIVER_GLOBALS *v14; // rcx
  MxEvent *event; // [rsp+50h] [rbp+8h] BYREF

  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
  m_Method = this->m_DeviceEject.m_Method;
  if ( m_Method )
    _a3 = m_Method((WDFDEVICE__ *)ObjectHandleUnchecked);
  else
    _a3 = 0;
  if ( _a3 < 0 )
  {
    v11 = 258;
    WPP_IFR_SF_d(this->m_Globals, 2u, 0xCu, 0x11u, (const _GUID *)&WPP_FxPkgPdo_cpp_Traceguids, _a3);
    if ( _a3 == -1073741637 )
    {
      WPP_IFR_SF_(this->m_Globals, 2u, 0x12u, 0x12u, (const _GUID *)&WPP_FxPkgPdo_cpp_Traceguids);
      m_Globals = this->m_Globals;
      if ( m_Globals->FxVerifierOn )
      {
        if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v12, 0xBu) || v14->FxVerifyDownlevel )
          FxVerifierDbgBreakPoint(v14);
      }
    }
  }
  else
  {
    m_Description = this->m_Description;
    m_DeviceList = m_Description->m_DeviceList;
    _a3 = FxChildList::UpdateAsMissing(m_DeviceList, m_Description->m_IdentificationDescription);
    _a1 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    if ( _a3 < 0 )
      WPP_IFR_SF_qid(
        this->m_Globals,
        2u,
        0xCu,
        0xFu,
        (const _GUID *)&WPP_FxPkgPdo_cpp_Traceguids,
        _a1,
        *(_QWORD *)(v8 + 144),
        _a3);
    else
      WPP_IFR_SF_qq(
        this->m_Globals,
        4u,
        0xCu,
        0xEu,
        (const _GUID *)&WPP_FxPkgPdo_cpp_Traceguids,
        _a1,
        *(const void **)(v8 + 144));
    p_m_ScanEvent = &m_DeviceList->m_ScanEvent;
    event = &m_DeviceList->m_ScanEvent;
    v10 = this->m_Globals;
    if ( v10->FxVerboseOn )
    {
      WPP_IFR_SF_q(v10, 5u, 0xCu, 0x10u, (const _GUID *)&WPP_FxPkgPdo_cpp_Traceguids, &event);
      p_m_ScanEvent = event;
    }
    KeWaitForSingleObject(p_m_ScanEvent, Executive, 0, 0, 0LL);
    v11 = 260;
  }
  this->m_PendingPnPIrp->IoStatus.Status = _a3;
  KeSetEvent(&this->m_DeviceEjectProcessed->m_Event, 0, 0);
  return v11;
}
