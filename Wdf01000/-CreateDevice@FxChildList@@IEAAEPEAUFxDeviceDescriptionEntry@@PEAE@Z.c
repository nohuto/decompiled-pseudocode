char __fastcall FxChildList::CreateDevice(
        FxChildList *this,
        FxDeviceDescriptionEntry *Entry,
        unsigned __int8 *InvalidateRelations)
{
  char v6; // r14
  _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *m_IdentificationDescription; // rdx
  char v8; // al
  FxDevice *CreatedDevice; // rax
  WDFCHILDLIST__ *ObjectHandleUnchecked; // rax
  _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *v11; // rdx
  int _a1; // ebx
  void *v13; // r13
  unsigned __int64 *p_m_ListLock; // rcx
  KIRQL v15; // al
  bool v16; // zf
  _LIST_ENTRY *p_m_ModificationLink; // rsi
  _LIST_ENTRY *Flink; // rdx
  _LIST_ENTRY *Blink; // rcx
  const void *v20; // rax
  KIRQL v21; // bl
  _LIST_ENTRY freeHead; // [rsp+40h] [rbp-C0h] BYREF
  WDFDEVICE_INIT init; // [rsp+50h] [rbp-B0h] BYREF

  WDFDEVICE_INIT::WDFDEVICE_INIT(&init, this->m_DeviceBase->m_Driver);
  init.Characteristics |= 0x80u;
  v6 = 1;
  m_IdentificationDescription = Entry->m_IdentificationDescription;
  init.Pdo.Parent = this->m_Device;
  init.CreatedOnStack = 1;
  init.InitType = FxDeviceInitTypePdo;
  v8 = -init.Pdo.Parent->m_PowerPageableCapable;
  init.Pdo.DescriptionEntry = Entry;
  init.PowerPageable &= -(v8 != 0);
  if ( !this->m_StaticList )
  {
    ObjectHandleUnchecked = (WDFCHILDLIST__ *)FxObject::GetObjectHandleUnchecked(this);
    _a1 = this->m_EvtCreateDevice.m_Method(ObjectHandleUnchecked, v11, &init);
    if ( _a1 == -1073741267 )
    {
      if ( init.CreatedDevice )
        FxDevice::Destroy((FxDevice *)init.CreatedDevice);
      *InvalidateRelations = 1;
    }
    else
    {
      if ( _a1 >= 0 )
      {
        CreatedDevice = (FxDevice *)init.CreatedDevice;
        if ( init.CreatedDevice )
          goto LABEL_3;
        WPP_IFR_SF_D(this->m_Globals, 2u, 0xCu, 0x20u, WPP_FxChildList_cpp_Traceguids, _a1);
        FxVerifierDbgBreakPoint(this->m_Globals);
        _a1 = -1073740951;
      }
      v13 = init.CreatedDevice;
      p_m_ListLock = &this->m_ListLock;
      if ( init.CreatedDevice )
      {
        v15 = KeAcquireSpinLockRaiseToDpc(p_m_ListLock);
        v16 = Entry->m_ModificationState == ModificationUnspecified;
        Entry->m_DescriptionState = DescriptionReportedMissing;
        if ( !v16 )
        {
          p_m_ModificationLink = &Entry->m_ModificationLink;
          Flink = p_m_ModificationLink->Flink;
          if ( p_m_ModificationLink->Flink->Blink != p_m_ModificationLink
            || (Blink = p_m_ModificationLink->Blink, Blink->Flink != p_m_ModificationLink) )
          {
            __fastfail(3u);
          }
          Blink->Flink = Flink;
          Flink->Blink = Blink;
        }
        KeReleaseSpinLock(&this->m_ListLock, v15);
        v20 = (const void *)FxObject::GetObjectHandleUnchecked((FxObject *)v13);
        WPP_IFR_SF_qid(
          this->m_Globals,
          2u,
          0xCu,
          0x21u,
          WPP_FxChildList_cpp_Traceguids,
          v20,
          *((_QWORD *)v13 + 18),
          _a1);
        FxDevice::DeleteDeviceFromFailedCreate((FxDevice *)v13, _a1, 1u);
        init.CreatedDevice = 0LL;
      }
      else
      {
        freeHead.Blink = &freeHead;
        freeHead.Flink = &freeHead;
        v21 = KeAcquireSpinLockRaiseToDpc(p_m_ListLock);
        FxChildList::MarkDescriptionNotPresentWorker(this, Entry, 1u);
        FxChildList::ProcessModificationsLocked(this, &freeHead);
        KeReleaseSpinLock(&this->m_ListLock, v21);
        FxChildList::DrainFreeListHead(this, &freeHead);
      }
    }
    v6 = 0;
    goto LABEL_20;
  }
  CreatedDevice = *(FxDevice **)&m_IdentificationDescription[2].IdentificationDescriptionSize;
  init.CreatedDevice = CreatedDevice;
LABEL_3:
  Entry->m_Pdo = CreatedDevice;
  Entry->m_DescriptionState = DescriptionInstantiatedHasObject;
LABEL_20:
  WDFDEVICE_INIT::~WDFDEVICE_INIT(&init);
  return v6;
}
