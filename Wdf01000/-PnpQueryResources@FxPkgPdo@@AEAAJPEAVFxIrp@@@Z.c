__int64 __fastcall FxPkgPdo::PnpQueryResources(FxPkgPdo *this, FxIrp *Irp, FxDevice *a3, _WDF_OBJECT_ATTRIBUTES *a4)
{
  _CM_RESOURCE_LIST *WdmList; // rbx
  FxIrp *v5; // r14
  FxPkgPdo *v6; // rsi
  unsigned int v7; // r8d
  int v8; // edi
  FxCmResList *v9; // r15
  unsigned __int64 ObjectHandleUnchecked; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *, WDFCMRESLIST__ *); // rax
  FxCmResList *status; // [rsp+50h] [rbp+8h] BYREF
  WDFCMRESLIST__ *list; // [rsp+60h] [rbp+18h] BYREF

  WdmList = 0LL;
  v5 = Irp;
  v6 = this;
  status = 0LL;
  list = 0LL;
  if ( this->m_DeviceResourcesQuery.m_Method )
  {
    v8 = FxCmResList::_CreateAndInit(&status, this->m_Globals, a3, a4, 3u);
    if ( v8 < 0 )
    {
$exit_23:
      v7 = v8;
      Irp = v5;
      this = v6;
      v5->m_Irp->IoStatus.Information = (unsigned __int64)WdmList;
      return FxPkgPnp::CompletePnpRequest(this, Irp, v7);
    }
    v9 = status;
    v8 = FxObject::Commit(status, 0LL, (void **)&list, 0LL, 1u);
    if ( v8 >= 0 )
    {
      ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(v6->m_DeviceBase);
      m_Method = v6->m_DeviceResourcesQuery.m_Method;
      if ( !m_Method )
      {
        v8 = 0;
        goto LABEL_9;
      }
      v8 = m_Method((WDFDEVICE__ *)ObjectHandleUnchecked, list);
      if ( v8 >= 0 )
      {
LABEL_9:
        if ( v9->m_Count )
        {
          WdmList = FxCmResList::CreateWdmList(v9, 0x100uLL);
        }
        else
        {
          v8 = v5->m_Irp->IoStatus.Status;
          WdmList = (_CM_RESOURCE_LIST *)v5->m_Irp->IoStatus.Information;
        }
      }
    }
    v9->DeleteObject(v9);
    goto $exit_23;
  }
  v7 = Irp->m_Irp->IoStatus.Status;
  return FxPkgPnp::CompletePnpRequest(this, Irp, v7);
}
