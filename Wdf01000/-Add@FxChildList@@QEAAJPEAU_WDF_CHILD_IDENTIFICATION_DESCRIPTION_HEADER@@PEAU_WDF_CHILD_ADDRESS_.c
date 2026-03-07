__int64 __fastcall FxChildList::Add(
        FxChildList *this,
        _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *IdentificationDescription,
        _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *AddressDescription,
        unsigned int *a4)
{
  unsigned __int64 *p_m_ListLock; // r13
  int v8; // esi
  FxDeviceDescriptionEntry *v9; // rax
  FxDeviceDescriptionEntry *v10; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int64 m_TotalDescriptionSize; // r9
  void *v13; // rax
  ULONG Tag; // r8d
  FX_POOL **v15; // rax
  __int64 v16; // rax
  __int64 v17; // r14
  _LIST_ENTRY *v18; // rdx
  _LIST_ENTRY *v19; // rax
  __int64 v20; // rbx
  _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *m_AddressDescription; // rdx
  FxDeviceDescriptionEntry *v22; // rax
  _LIST_ENTRY *Blink; // rax
  _LIST_ENTRY freeHead; // [rsp+38h] [rbp-28h] BYREF
  __m128i v26; // [rsp+50h] [rbp-10h] BYREF
  void *retaddr; // [rsp+88h] [rbp+28h]
  KIRQL NewIrql; // [rsp+A8h] [rbp+48h]

  freeHead.Blink = &freeHead;
  p_m_ListLock = &this->m_ListLock;
  freeHead.Flink = &freeHead;
  v8 = -1073741823;
  NewIrql = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  v9 = FxChildList::SearchBackwardsForMatchingModificationLocked(this, IdentificationDescription);
  v10 = v9;
  if ( !v9 )
  {
    v22 = FxChildList::SearchBackwardsForMatchingDescriptionLocked(this, IdentificationDescription);
    v10 = v22;
    if ( !v22 || (unsigned int)(v22->m_DescriptionState - 1) > 1 )
      goto LABEL_4;
    if ( this->m_AddressDescriptionSize )
    {
      m_AddressDescription = v22->m_AddressDescription;
      goto LABEL_16;
    }
LABEL_17:
    v10->m_FoundInLastScan = 1;
    v8 = 0x40000000;
    goto LABEL_26;
  }
  if ( v9->m_ModificationState == ModificationInsert )
  {
    if ( this->m_AddressDescriptionSize )
    {
      m_AddressDescription = v9->m_AddressDescription;
LABEL_16:
      FxChildList::CopyAddress(this, m_AddressDescription, AddressDescription);
      goto LABEL_17;
    }
    goto LABEL_17;
  }
  if ( (unsigned int)(v9->m_ModificationState - 2) > 1 )
    goto LABEL_26;
LABEL_4:
  m_Globals = this->m_Globals;
  m_TotalDescriptionSize = this->m_TotalDescriptionSize;
  v13 = retaddr;
  v26 = 0LL;
  Tag = m_Globals->Tag;
  v26.m128i_i64[1] = 64LL;
  if ( !m_Globals->FxPoolTrackingOn )
    v13 = 0LL;
  v15 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v26, m_TotalDescriptionSize, Tag, v13);
  if ( !v15
    || (FxDeviceDescriptionEntry::FxDeviceDescriptionEntry(
          (FxDeviceDescriptionEntry *)v15,
          this,
          this->m_IdentificationDescriptionSize,
          this->m_AddressDescriptionSize),
        (v17 = v16) == 0) )
  {
    v8 = -1073741670;
    goto LABEL_26;
  }
  v8 = FxChildList::DuplicateId(
         this,
         *(_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER **)(v16 + 24),
         IdentificationDescription);
  if ( v8 < 0
    || this->m_AddressDescriptionSize
    && (v8 = FxChildList::DuplicateAddress(
               this,
               *(_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER **)(v17 + 32),
               AddressDescription),
        v8 < 0) )
  {
    Blink = freeHead.Blink;
    if ( freeHead.Blink->Flink == &freeHead )
    {
      *(_QWORD *)(v17 + 8) = freeHead.Blink;
      *(_QWORD *)v17 = &freeHead;
      Blink->Flink = (_LIST_ENTRY *)v17;
      freeHead.Blink = (_LIST_ENTRY *)v17;
      goto LABEL_26;
    }
LABEL_23:
    __fastfail(3u);
  }
  *(_BYTE *)(v17 + 80) = 1;
  v18 = this->m_ModificationListHead.Blink;
  v19 = (_LIST_ENTRY *)(v17 + 40);
  if ( v18->Flink != &this->m_ModificationListHead )
    goto LABEL_23;
  v19->Flink = &this->m_ModificationListHead;
  *(_QWORD *)(v17 + 48) = v18;
  v18->Flink = v19;
  this->m_ModificationListHead.Blink = v19;
  if ( this->m_StaticList )
  {
    v20 = *(_QWORD *)(*(_QWORD *)(v17 + 24) + 8LL);
    FxObject::MarkNoDeleteDDI((FxObject *)v20, ObjectLock);
    *(_QWORD *)(*(_QWORD *)(v20 + 648) + 1704LL) = v17;
    *(_BYTE *)(*(_QWORD *)(v20 + 648) + 1778LL) = 1;
  }
LABEL_26:
  FxChildList::ProcessModificationsLocked(this, &freeHead);
  KeReleaseSpinLock(p_m_ListLock, NewIrql);
  FxChildList::DrainFreeListHead(this, &freeHead);
  return (unsigned int)v8;
}
