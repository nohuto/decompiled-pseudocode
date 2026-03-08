/*
 * XREFs of ??1FxDevice@@UEAA@XZ @ 0x1C003D530
 * Callers:
 *     ??_GFxDevice@@UEAAPEAXI@Z @ 0x1C003D7D0 (--_GFxDevice@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0006E9C (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     WPP_IFR_SF_qq @ 0x1C001828C (WPP_IFR_SF_qq.c)
 *     ??1FxDeviceBase@@MEAA@XZ @ 0x1C0038CC8 (--1FxDeviceBase@@MEAA@XZ.c)
 *     ??_GFxIrpPreprocessInfo@@QEAAPEAXI@Z @ 0x1C003BB8C (--_GFxIrpPreprocessInfo@@QEAAPEAXI@Z.c)
 *     ?DeleteSymbolicLink@FxDevice@@QEAAXXZ @ 0x1C003C5B4 (-DeleteSymbolicLink@FxDevice@@QEAAXXZ.c)
 *     ??1FxCxDeviceInfo@@QEAA@XZ @ 0x1C003D4F4 (--1FxCxDeviceInfo@@QEAA@XZ.c)
 *     ?IsDisposed@FxObject@@QEAAEXZ @ 0x1C003E6F8 (-IsDisposed@FxObject@@QEAAEXZ.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0045B6C (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ??1FxTransactionedList@@QEAA@XZ @ 0x1C004F69C (--1FxTransactionedList@@QEAA@XZ.c)
 */

void __fastcall FxDevice::~FxDevice(FxDevice *this)
{
  const void *_a2; // rax
  unsigned __int64 ObjectHandleUnchecked; // rax
  FxPkgIo *m_PkgIo; // rcx
  FxPkgPnp *m_PkgPnp; // rcx
  FxPkgGeneral *m_PkgGeneral; // rcx
  FxWmiIrpHandler *m_PkgWmi; // rcx
  FxDefaultIrpHandler *m_PkgDefault; // rcx
  _LIST_ENTRY *p_m_PreprocessInfoListHead; // rdi
  FxIrpPreprocessInfo *Flink; // rcx
  _LIST_ENTRY *v11; // rax
  _LIST_ENTRY *p_m_CxDeviceInfoListHead; // rsi
  FxCxDeviceInfo *v13; // rdi
  _LIST_ENTRY *v14; // rax
  wchar_t *Buffer; // rcx
  wchar_t *v16; // rcx
  FxDevice *m_ParentDevice; // rcx
  unsigned int v18; // edx

  this->FxDeviceBase::FxNonPagedObject::FxObject::__vftable = (FxDevice_vtbl *)FxDevice::`vftable'{for `FxNonPagedObject'};
  this->FxDeviceBase::IFxHasCallbacks::__vftable = (IFxHasCallbacks_vtbl *)FxDevice::`vftable'{for `IFxHasCallbacks'};
  if ( !FxObject::IsDisposed(this) )
  {
    _a2 = (const void *)FxObject::GetObjectHandleUnchecked(this);
    WPP_IFR_SF_qq(this->m_Globals, 1u, 0x12u, 0xAu, WPP_FxDevice_cpp_Traceguids, this, _a2);
    ObjectHandleUnchecked = FxObject::GetObjectHandleUnchecked(this);
    FxVerifierBugCheckWorker(this->m_Globals, WDF_OBJECT_ERROR, ObjectHandleUnchecked, (unsigned __int64)this);
  }
  m_PkgIo = this->m_PkgIo;
  if ( m_PkgIo )
  {
    m_PkgIo->Release(m_PkgIo, 0LL, 295, "minkernel\\wdf\\framework\\shared\\core\\fxdevice.cpp");
    this->m_PkgIo = 0LL;
  }
  m_PkgPnp = this->m_PkgPnp;
  if ( m_PkgPnp )
  {
    m_PkgPnp->Release(m_PkgPnp, 0LL, 300, "minkernel\\wdf\\framework\\shared\\core\\fxdevice.cpp");
    this->m_PkgPnp = 0LL;
  }
  m_PkgGeneral = this->m_PkgGeneral;
  if ( m_PkgGeneral )
  {
    m_PkgGeneral->Release(m_PkgGeneral, 0LL, 305, "minkernel\\wdf\\framework\\shared\\core\\fxdevice.cpp");
    this->m_PkgGeneral = 0LL;
  }
  m_PkgWmi = this->m_PkgWmi;
  if ( m_PkgWmi )
  {
    m_PkgWmi->Release(m_PkgWmi, 0LL, 310, "minkernel\\wdf\\framework\\shared\\core\\fxdevice.cpp");
    this->m_PkgWmi = 0LL;
  }
  m_PkgDefault = this->m_PkgDefault;
  if ( m_PkgDefault )
  {
    m_PkgDefault->Release(m_PkgDefault, 0LL, 315, "minkernel\\wdf\\framework\\shared\\core\\fxdevice.cpp");
    this->m_PkgDefault = 0LL;
  }
  p_m_PreprocessInfoListHead = &this->m_PreprocessInfoListHead;
  while ( 1 )
  {
    Flink = (FxIrpPreprocessInfo *)p_m_PreprocessInfoListHead->Flink;
    if ( p_m_PreprocessInfoListHead->Flink == p_m_PreprocessInfoListHead )
      break;
    if ( Flink->ListEntry.Blink != p_m_PreprocessInfoListHead
      || (v11 = Flink->ListEntry.Flink, (FxIrpPreprocessInfo *)Flink->ListEntry.Flink->Blink != Flink) )
    {
LABEL_23:
      __fastfail(3u);
    }
    p_m_PreprocessInfoListHead->Flink = v11;
    v11->Blink = p_m_PreprocessInfoListHead;
    Flink->ListEntry.Blink = (_LIST_ENTRY *)Flink;
    Flink->ListEntry.Flink = (_LIST_ENTRY *)Flink;
    FxIrpPreprocessInfo::`scalar deleting destructor'(Flink);
  }
  p_m_CxDeviceInfoListHead = &this->m_CxDeviceInfoListHead;
  while ( 1 )
  {
    v13 = (FxCxDeviceInfo *)p_m_CxDeviceInfoListHead->Flink;
    if ( p_m_CxDeviceInfoListHead->Flink == p_m_CxDeviceInfoListHead )
      break;
    if ( v13->ListEntry.Blink != p_m_CxDeviceInfoListHead )
      goto LABEL_23;
    v14 = v13->ListEntry.Flink;
    if ( (FxCxDeviceInfo *)v13->ListEntry.Flink->Blink != v13 )
      goto LABEL_23;
    p_m_CxDeviceInfoListHead->Flink = v14;
    v14->Blink = p_m_CxDeviceInfoListHead;
    v13->ListEntry.Blink = (_LIST_ENTRY *)v13;
    v13->ListEntry.Flink = (_LIST_ENTRY *)v13;
    FxCxDeviceInfo::~FxCxDeviceInfo(v13);
    FxPoolFree((FX_POOL_TRACKER *)v13);
  }
  Buffer = this->m_DeviceName.Buffer;
  if ( Buffer )
  {
    FxPoolFree((FX_POOL_TRACKER *)Buffer);
    this->m_DeviceName = 0LL;
  }
  FxDevice::DeleteSymbolicLink(this);
  v16 = this->m_MofResourceName.Buffer;
  if ( v16 )
  {
    FxPoolFree((FX_POOL_TRACKER *)v16);
    this->m_MofResourceName = 0LL;
  }
  if ( this->m_RequestLookasideListElementSize )
  {
    ExDeleteNPagedLookasideList(&this->m_RequestLookasideList);
    this->m_RequestLookasideListElementSize = 0LL;
  }
  m_ParentDevice = this->m_ParentDevice;
  if ( m_ParentDevice )
    m_ParentDevice->Release(m_ParentDevice, this, 360, "minkernel\\wdf\\framework\\shared\\core\\fxdevice.cpp");
  this->m_IoTargetsList.m_ListLock.m_DbgFlagIsInitialized = 0;
  FxTransactionedList::~FxTransactionedList(&this->m_IoTargetsList);
  FxDeviceBase::~FxDeviceBase(this, v18);
}
