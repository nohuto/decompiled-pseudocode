/*
 * XREFs of ?PnpSendStartDeviceDownTheStackOverload@FxPkgFdo@@EEAAEXZ @ 0x1C00780C0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0002834 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ?SetCompletionRoutineEx@FxIrp@@QEAAXPEAU_DEVICE_OBJECT@@P6AJ0PEAU_IRP@@PEAX@Z2EEE@Z @ 0x1C0006FCC (-SetCompletionRoutineEx@FxIrp@@QEAAXPEAU_DEVICE_OBJECT@@P6AJ0PEAU_IRP@@PEAX@Z2EEE@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     ?CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z @ 0x1C000927C (-CompletePnpRequest@FxPkgPnp@@IEAAJPEAVFxIrp@@J@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     ?BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z @ 0x1C004E964 (-BuildFromWdmList@FxCmResList@@QEAAJPEAU_CM_RESOURCE_LIST@@E@Z.c)
 *     ?CreateWdmList@FxCmResList@@QEAAPEAU_CM_RESOURCE_LIST@@_K@Z @ 0x1C004EBA0 (-CreateWdmList@FxCmResList@@QEAAPEAU_CM_RESOURCE_LIST@@_K@Z.c)
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C006BE64 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 *     ??_GFxFilteredStartContext@@QEAAPEAXI@Z @ 0x1C0077AA0 (--_GFxFilteredStartContext@@QEAAPEAXI@Z.c)
 */

unsigned __int8 __fastcall FxPkgFdo::PnpSendStartDeviceDownTheStackOverload(FxPkgFdo *this)
{
  _IRP *m_PendingPnPIrp; // r13
  char v3; // r12
  FxPkgFdo *v4; // rsi
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  _CM_RESOURCE_LIST *AllocatedResources; // rdx
  _CM_RESOURCE_LIST *AllocatedResourcesTranslated; // rbp
  signed int _a1; // ebx
  $2577F5D74A6AFCBEE1DF62E423AAEAA5 *v9; // r15
  unsigned __int64 ObjectHandleUnchecked; // rcx
  int (__fastcall *m_Method)(WDFDEVICE__ *, WDFCMRESLIST__ *, WDFCMRESLIST__ *); // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  void *v13; // rax
  FxFilteredStartContext *v14; // r14
  FxCmResList *m_ResourcesRaw; // rcx
  _CM_RESOURCE_LIST *WdmList; // rax
  FxCmResList *m_Resources; // rcx
  _CM_RESOURCE_LIST *v18; // rax
  unsigned __int8 v19; // r8
  FxPkgFdo *v20; // r9
  int (__fastcall *v21)(_DEVICE_OBJECT *, _IRP *, void *); // r8
  __m128i v23; // [rsp+40h] [rbp-48h] BYREF
  void *retaddr; // [rsp+88h] [rbp+0h]
  FxIrp irp; // [rsp+98h] [rbp+10h] BYREF

  m_PendingPnPIrp = this->m_PendingPnPIrp;
  this->m_PendingPnPIrp = 0LL;
  irp.m_Irp = m_PendingPnPIrp;
  v3 = 0;
  v4 = 0LL;
  CurrentStackLocation = m_PendingPnPIrp->Tail.Overlay.CurrentStackLocation;
  AllocatedResources = CurrentStackLocation->Parameters.StartDevice.AllocatedResources;
  AllocatedResourcesTranslated = CurrentStackLocation->Parameters.StartDevice.AllocatedResourcesTranslated;
  *(_OWORD *)&CurrentStackLocation[-1].MajorFunction = *(_OWORD *)&CurrentStackLocation->MajorFunction;
  *(_OWORD *)&CurrentStackLocation[-1].Parameters.NotifyDirectoryEx.CompletionFilter = *(_OWORD *)&CurrentStackLocation->Parameters.NotifyDirectoryEx.CompletionFilter;
  *(_OWORD *)(&CurrentStackLocation[-1].Parameters.SetQuota + 6) = *(_OWORD *)(&CurrentStackLocation->Parameters.SetQuota
                                                                             + 6);
  CurrentStackLocation[-1].FileObject = CurrentStackLocation->FileObject;
  CurrentStackLocation[-1].Control = 0;
  if ( !this->m_DeviceRemoveAddedResources.m_Method || !AllocatedResources || !AllocatedResourcesTranslated )
  {
    v9 = &this->96;
    goto LABEL_24;
  }
  this->m_ResourcesRaw->m_Changed = 0;
  this->m_Resources->m_Changed = 0;
  _a1 = FxCmResList::BuildFromWdmList(this->m_ResourcesRaw, AllocatedResources, 3u);
  if ( _a1 < 0 )
    goto LABEL_22;
  _a1 = FxCmResList::BuildFromWdmList(this->m_Resources, AllocatedResourcesTranslated, 3u);
  if ( _a1 < 0 )
    goto LABEL_22;
  FxObject::GetObjectHandleUnchecked(this->m_Resources);
  FxObject::GetObjectHandleUnchecked(this->m_ResourcesRaw);
  v9 = &this->96;
  ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this->m_DeviceBase);
  m_Method = this->m_DeviceRemoveAddedResources.m_Method;
  if ( m_Method )
  {
    _a1 = ((__int64 (__fastcall *)(unsigned __int64))m_Method)(ObjectHandleUnchecked);
    if ( _a1 >= 0 )
      goto LABEL_10;
LABEL_22:
    WPP_IFR_SF_D(this->m_Globals, 2u, 0xCu, 0x17u, WPP_fxpkgfdo_cpp_Traceguids, _a1);
    FxPkgPnp::PnpProcessEvent(this, PnpEventStartDeviceFailed, v19);
    FxPkgPnp::CompletePnpRequest(this, &irp, _a1);
    return 0;
  }
  _a1 = 0;
LABEL_10:
  if ( this->m_ResourcesRaw->m_Changed || this->m_Resources->m_Changed )
  {
    m_Globals = this->m_Globals;
    v13 = retaddr;
    v23.m128i_i64[0] = 0LL;
    v23.m128i_i64[1] = 64LL;
    if ( !m_Globals->FxPoolTrackingOn )
      v13 = 0LL;
    v14 = (FxFilteredStartContext *)FxPoolAllocator(
                                      m_Globals,
                                      &m_Globals->FxPoolFrameworks,
                                      &v23,
                                      0x18uLL,
                                      m_Globals->Tag,
                                      v13);
    if ( v14 )
    {
      v14->ResourcesRaw = 0LL;
      v4 = (FxPkgFdo *)v14;
      v14->ResourcesTranslated = 0LL;
      v14->PkgFdo = this;
      m_ResourcesRaw = this->m_ResourcesRaw;
      if ( (!m_ResourcesRaw->m_Count
         || (WdmList = FxCmResList::CreateWdmList(m_ResourcesRaw, 0x40uLL), (v14->ResourcesRaw = WdmList) != 0LL))
        && ((m_Resources = this->m_Resources, !m_Resources->m_Count)
         || (v18 = FxCmResList::CreateWdmList(m_Resources, 0x40uLL), (v14->ResourcesTranslated = v18) != 0LL)) )
      {
        v3 = 1;
        m_PendingPnPIrp->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)v14->ResourcesRaw;
        m_PendingPnPIrp->Tail.Overlay.CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = (_UNICODE_STRING *)v14->ResourcesTranslated;
      }
      else
      {
        _a1 = -1073741670;
        FxFilteredStartContext::`scalar deleting destructor'(v14);
      }
    }
  }
  if ( _a1 < 0 )
    goto LABEL_22;
LABEL_24:
  if ( v3 )
  {
    v20 = v4;
    v21 = FxPkgFdo::_PnpFilteredStartDeviceCompletionRoutine;
  }
  else
  {
    v20 = this;
    v21 = FxPkgFdo::_PnpStartDeviceCompletionRoutine;
  }
  FxIrp::SetCompletionRoutineEx(&irp, v9->m_DeviceBase->m_DeviceObject.m_DeviceObject, v21, v20);
  IofCallDriver(v9->m_DeviceBase->m_AttachedDevice.m_DeviceObject, m_PendingPnPIrp);
  return 0;
}
