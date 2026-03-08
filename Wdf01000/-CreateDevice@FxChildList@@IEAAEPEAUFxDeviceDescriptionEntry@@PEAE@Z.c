/*
 * XREFs of ?CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z @ 0x1C0023ED4
 * Callers:
 *     ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C00255CC (-ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z.c)
 * Callees:
 *     ?GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ @ 0x1C00072C0 (-GetObjectHandleUnchecked@FxObject@@IEAAPEAXXZ.c)
 *     __security_check_cookie @ 0x1C0009B10 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C000AB80 (_guard_dispatch_icall_nop.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_D @ 0x1C0017F78 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_qid @ 0x1C00195EC (WPP_IFR_SF_qid.c)
 *     ?DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00241C0 (-DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?MarkDescriptionNotPresentWorker@FxChildList@@IEAAXPEAUFxDeviceDescriptionEntry@@E@Z @ 0x1C00250D8 (-MarkDescriptionNotPresentWorker@FxChildList@@IEAAXPEAUFxDeviceDescriptionEntry@@E@Z.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0025E58 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ??0WDFDEVICE_INIT@@QEAA@PEAVFxDriver@@@Z @ 0x1C003B840 (--0WDFDEVICE_INIT@@QEAA@PEAVFxDriver@@@Z.c)
 *     ??1WDFDEVICE_INIT@@QEAA@XZ @ 0x1C003BA20 (--1WDFDEVICE_INIT@@QEAA@XZ.c)
 *     ?Destroy@FxDevice@@QEAAXXZ @ 0x1C003C60C (-Destroy@FxDevice@@QEAAXXZ.c)
 *     ?DeleteDeviceFromFailedCreate@FxDevice@@QEAAJJE@Z @ 0x1C003DC30 (-DeleteDeviceFromFailedCreate@FxDevice@@QEAAJJE@Z.c)
 */

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
