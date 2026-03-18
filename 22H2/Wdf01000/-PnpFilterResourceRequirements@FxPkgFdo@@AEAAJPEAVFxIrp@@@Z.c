/*
 * XREFs of ?PnpFilterResourceRequirements@FxPkgFdo@@AEAAJPEAVFxIrp@@@Z @ 0x1C008BFF8
 * Callers:
 *     ?_PnpFilterResourceRequirements@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0084A10 (-_PnpFilterResourceRequirements@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C0003FA0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C0004B54 (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A9D8 (WPP_IFR_SF_d.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000B520 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C001D510 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_ @ 0x1C00325D4 (WPP_IFR_SF_.c)
 *     ?CreateWdmList@FxIoResReqList@@QEAAPEAU_IO_RESOURCE_REQUIREMENTS_LIST@@XZ @ 0x1C00614C4 (-CreateWdmList@FxIoResReqList@@QEAAPEAU_IO_RESOURCE_REQUIREMENTS_LIST@@XZ.c)
 *     ?_CreateFromWdmList@FxIoResReqList@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_REQUIREMENTS_LIST@@E@Z @ 0x1C006175C (-_CreateFromWdmList@FxIoResReqList@@SAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAU_IO_RESOURCE_REQUIREMENT.c)
 *     ?FilterResourceRequirements@FxPkgPnp@@IEAAJPEAPEAU_IO_RESOURCE_REQUIREMENTS_LIST@@@Z @ 0x1C0084E2C (-FilterResourceRequirements@FxPkgPnp@@IEAAJPEAPEAU_IO_RESOURCE_REQUIREMENTS_LIST@@@Z.c)
 */

__int64 __fastcall FxPkgFdo::PnpFilterResourceRequirements(FxPkgFdo *this, FxIrp *Irp, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  int _a1; // ebx
  _IO_RESOURCE_REQUIREMENTS_LIST *Information; // r15
  FxIoResReqList *v8; // rax
  FxIoResReqList *v9; // rsi
  unsigned __int64 ObjectHandleUnchecked; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *, WDFIORESREQLIST__ *); // rax
  _IO_RESOURCE_REQUIREMENTS_LIST *WdmList; // rax
  unsigned __int64 v13; // rbp
  int v14; // eax
  unsigned __int8 v15; // r8
  _IO_RESOURCE_REQUIREMENTS_LIST *v16; // r15
  FxIoResReqList *v17; // rax
  FxIoResReqList *v18; // rsi
  unsigned __int64 v19; // rcx
  int (__fastcall *v20)(WDFDEVICE__ *, WDFIORESREQLIST__ *); // rax
  _IO_RESOURCE_REQUIREMENTS_LIST *v21; // rax
  unsigned __int64 v22; // rbp
  _FX_DRIVER_GLOBALS *v23; // rcx
  WDFIORESREQLIST__ *reqlist; // [rsp+50h] [rbp+8h] BYREF

  reqlist = 0LL;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_(m_Globals, 5u, 0xCu, 0xAu, WPP_FxPkgFdoKm_cpp_Traceguids);
  if ( this->m_DeviceFilterRemoveResourceRequirements.m_Method )
  {
    _a1 = -1073741670;
    Information = (_IO_RESOURCE_REQUIREMENTS_LIST *)Irp->m_Irp->IoStatus.Information;
    v8 = FxIoResReqList::_CreateFromWdmList(this->m_Globals, Information, a3);
    v9 = v8;
    if ( !v8 )
      goto LABEL_36;
    FxObject::Commit(v8, 0LL, (void **)&reqlist, 0LL, 1u);
    FxObject::GetObjectHandleUnchecked(v9);
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
    m_Method = this->m_DeviceFilterRemoveResourceRequirements.m_Method;
    if ( m_Method )
      _a1 = ((__int64 (__fastcall *)(unsigned __int64))m_Method)(ObjectHandleUnchecked);
    else
      _a1 = 0;
    if ( _a1 >= 0 && v9->m_Changed )
    {
      WdmList = FxIoResReqList::CreateWdmList(v9);
      v13 = (unsigned __int64)WdmList;
      if ( WdmList )
      {
        if ( Information )
        {
          WdmList->BusNumber = Information->BusNumber;
          ExFreePoolWithTag(Information, 0);
        }
        Irp->m_Irp->IoStatus.Information = v13;
      }
      else
      {
        _a1 = -1073741670;
      }
    }
    v9->DeleteObject(v9);
  }
  else
  {
    _a1 = 0;
  }
  if ( _a1 >= 0 && (_a1 = this->SendIrpSynchronously(this, Irp), _a1 >= 0) || _a1 == -1073741637 )
  {
    v14 = FxPkgPnp::FilterResourceRequirements(
            this,
            (_IO_RESOURCE_REQUIREMENTS_LIST **)&Irp->m_Irp->IoStatus.Information);
    if ( v14 >= 0 )
    {
      if ( this->m_DeviceFilterAddResourceRequirements.m_Method )
      {
        v16 = (_IO_RESOURCE_REQUIREMENTS_LIST *)Irp->m_Irp->IoStatus.Information;
        v17 = FxIoResReqList::_CreateFromWdmList(this->m_Globals, v16, v15);
        v18 = v17;
        if ( v17 )
        {
          FxObject::Commit(v17, 0LL, (void **)&reqlist, 0LL, 1u);
          v19 = FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
          v20 = this->m_DeviceFilterAddResourceRequirements.m_Method;
          if ( v20 )
            _a1 = v20((WDFDEVICE__ *)v19, reqlist);
          else
            _a1 = 0;
          if ( _a1 >= 0 && v18->m_Changed )
          {
            v21 = FxIoResReqList::CreateWdmList(v18);
            v22 = (unsigned __int64)v21;
            if ( v21 )
            {
              if ( v16 )
              {
                v21->BusNumber = v16->BusNumber;
                ExFreePoolWithTag(v16, 0);
              }
              Irp->m_Irp->IoStatus.Information = v22;
            }
            else
            {
              _a1 = -1073741670;
            }
          }
          v18->DeleteObject(v18);
        }
        else
        {
          _a1 = -1073741670;
        }
      }
    }
    else
    {
      _a1 = v14;
    }
  }
LABEL_36:
  FxPkgPnp::CompletePnpRequest(this, Irp, _a1);
  v23 = this->m_Globals;
  if ( v23->FxVerboseOn )
    WPP_IFR_SF_d(v23, 5u, 0xCu, 0xBu, WPP_FxPkgFdoKm_cpp_Traceguids, _a1);
  return (unsigned int)_a1;
}
