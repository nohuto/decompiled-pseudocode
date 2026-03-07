__int64 __fastcall FxPkgFdo::PnpFilterResourceRequirements(FxPkgFdo *this, FxIrp *Irp, unsigned __int8 a3)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  signed int _a1; // ebx
  _IO_RESOURCE_REQUIREMENTS_LIST *Information; // rbp
  FxObject *v8; // rax
  FxIoResReqList *v9; // rsi
  WDFDEVICE__ *ObjectHandleUnchecked; // rax
  WDFIORESREQLIST__ *v11; // r8
  _IO_RESOURCE_REQUIREMENTS_LIST *WdmList; // r15
  int v13; // eax
  unsigned __int8 v14; // r8
  _IO_RESOURCE_REQUIREMENTS_LIST *v15; // rbp
  FxObject *v16; // rax
  FxIoResReqList *v17; // rsi
  WDFDEVICE__ *v18; // rax
  _IO_RESOURCE_REQUIREMENTS_LIST *v19; // rax
  unsigned __int64 v20; // r15
  _FX_DRIVER_GLOBALS *v21; // rcx
  WDFIORESREQLIST__ *reqlist; // [rsp+50h] [rbp+8h] BYREF

  reqlist = 0LL;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
    WPP_IFR_SF_(m_Globals, 5u, 0xCu, 0xAu, WPP_FxPkgFdoKm_cpp_Traceguids);
  if ( !this->m_DeviceFilterRemoveResourceRequirements.m_Method )
    goto LABEL_33;
  _a1 = -1073741670;
  Information = (_IO_RESOURCE_REQUIREMENTS_LIST *)Irp->m_Irp->IoStatus.Information;
  FxIoResReqList::_CreateFromWdmList(this->m_Globals, Information, a3);
  v9 = (FxIoResReqList *)v8;
  if ( !v8 )
    goto LABEL_28;
  FxObject::Commit(v8, 0LL, (void **)&reqlist, 0LL, 1u);
  FxObject::GetObjectHandleUnchecked(v9);
  ObjectHandleUnchecked = (WDFDEVICE__ *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
  _a1 = (unsigned int)FxPnpDeviceFilterResourceRequirements::Invoke(
                        &this->m_DeviceFilterRemoveResourceRequirements,
                        ObjectHandleUnchecked,
                        v11);
  if ( _a1 >= 0 && v9->m_Changed )
  {
    WdmList = FxIoResReqList::CreateWdmList(v9);
    if ( WdmList )
    {
      if ( Information )
      {
        WdmList->BusNumber = Information->BusNumber;
        ExFreePoolWithTag(Information, 0);
      }
      Irp->m_Irp->IoStatus.Information = (unsigned __int64)WdmList;
    }
    else
    {
      _a1 = -1073741670;
    }
  }
  v9->DeleteObject(v9);
  if ( _a1 >= 0 )
  {
LABEL_33:
    _a1 = this->SendIrpSynchronously(this, Irp);
    if ( _a1 >= 0 )
      goto LABEL_15;
  }
  if ( _a1 == -1073741637 )
  {
LABEL_15:
    v13 = FxPkgPnp::FilterResourceRequirements(
            this,
            (_IO_RESOURCE_REQUIREMENTS_LIST **)&Irp->m_Irp->IoStatus.Information);
    if ( v13 >= 0 )
    {
      if ( this->m_DeviceFilterAddResourceRequirements.m_Method )
      {
        v15 = (_IO_RESOURCE_REQUIREMENTS_LIST *)Irp->m_Irp->IoStatus.Information;
        FxIoResReqList::_CreateFromWdmList(this->m_Globals, v15, v14);
        v17 = (FxIoResReqList *)v16;
        if ( v16 )
        {
          FxObject::Commit(v16, 0LL, (void **)&reqlist, 0LL, 1u);
          v18 = (WDFDEVICE__ *)FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
          _a1 = (unsigned int)FxPnpDeviceFilterResourceRequirements::Invoke(
                                &this->m_DeviceFilterAddResourceRequirements,
                                v18,
                                reqlist);
          if ( _a1 >= 0 && v17->m_Changed )
          {
            v19 = FxIoResReqList::CreateWdmList(v17);
            v20 = (unsigned __int64)v19;
            if ( v19 )
            {
              if ( v15 )
              {
                v19->BusNumber = v15->BusNumber;
                ExFreePoolWithTag(v15, 0);
              }
              Irp->m_Irp->IoStatus.Information = v20;
            }
            else
            {
              _a1 = -1073741670;
            }
          }
          v17->DeleteObject(v17);
        }
        else
        {
          _a1 = -1073741670;
        }
      }
    }
    else
    {
      _a1 = v13;
    }
  }
LABEL_28:
  FxPkgPnp::CompletePnpRequest(this, Irp, _a1);
  v21 = this->m_Globals;
  if ( v21->FxVerboseOn )
    WPP_IFR_SF_D(v21, 5u, 0xCu, 0xBu, WPP_FxPkgFdoKm_cpp_Traceguids, _a1);
  return (unsigned int)_a1;
}
