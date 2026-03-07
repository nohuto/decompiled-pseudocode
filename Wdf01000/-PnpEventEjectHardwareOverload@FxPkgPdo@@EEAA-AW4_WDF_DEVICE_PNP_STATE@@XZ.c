__int64 __fastcall FxPkgPdo::PnpEventEjectHardwareOverload(FxPkgPdo *this)
{
  unsigned __int64 ObjectHandleUnchecked; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *); // rax
  signed int _a1; // eax
  int _a3; // ebx
  unsigned int v6; // ebp
  unsigned int v7; // edx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  _FX_DRIVER_GLOBALS *v9; // rcx
  FxDeviceDescriptionEntry *m_Description; // rdx
  FxChildList *m_DeviceList; // rbp
  const void *v12; // rax
  __int64 v13; // rdx
  MxEvent *p_m_ScanEvent; // rcx
  _FX_DRIVER_GLOBALS *v15; // rax
  MxEvent *event; // [rsp+50h] [rbp+8h] BYREF

  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
  m_Method = this->m_DeviceEject.m_Method;
  if ( m_Method && (_a1 = m_Method((WDFDEVICE__ *)ObjectHandleUnchecked), _a3 = _a1, _a1 < 0) )
  {
    v6 = 258;
    WPP_IFR_SF_D(this->m_Globals, 2u, 0xCu, 0x11u, (const _GUID *)&WPP_FxPkgPdo_cpp_Traceguids, _a1);
    if ( _a3 == -1073741637 )
    {
      WPP_IFR_SF_(this->m_Globals, 2u, 0x12u, 0x12u, (const _GUID *)&WPP_FxPkgPdo_cpp_Traceguids);
      m_Globals = this->m_Globals;
      if ( m_Globals->FxVerifierOn )
      {
        if ( _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(m_Globals, v7, 0xBu) || v9->FxVerifyDownlevel )
          FxVerifierDbgBreakPoint(v9);
      }
    }
  }
  else
  {
    m_Description = this->m_Description;
    m_DeviceList = m_Description->m_DeviceList;
    _a3 = FxChildList::UpdateAsMissing(m_DeviceList, m_Description->m_IdentificationDescription);
    v12 = (const void *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    if ( _a3 < 0 )
      WPP_IFR_SF_qid(
        this->m_Globals,
        2u,
        0xCu,
        0xFu,
        (const _GUID *)&WPP_FxPkgPdo_cpp_Traceguids,
        v12,
        *(_QWORD *)(v13 + 144),
        _a3);
    else
      WPP_IFR_SF_qq(
        this->m_Globals,
        4u,
        0xCu,
        0xEu,
        (const _GUID *)&WPP_FxPkgPdo_cpp_Traceguids,
        v12,
        *(const void **)(v13 + 144));
    p_m_ScanEvent = &m_DeviceList->m_ScanEvent;
    event = &m_DeviceList->m_ScanEvent;
    v15 = this->m_Globals;
    if ( v15->FxVerboseOn )
    {
      WPP_IFR_SF_q(v15, 5u, 0xCu, 0x10u, (const _GUID *)&WPP_FxPkgPdo_cpp_Traceguids, &event);
      p_m_ScanEvent = event;
    }
    KeWaitForSingleObject(p_m_ScanEvent, Executive, 0, 0, 0LL);
    v6 = 260;
  }
  this->m_PendingPnPIrp->IoStatus.Status = _a3;
  KeSetEvent(&this->m_DeviceEjectProcessed->m_Event, 0, 0);
  return v6;
}
