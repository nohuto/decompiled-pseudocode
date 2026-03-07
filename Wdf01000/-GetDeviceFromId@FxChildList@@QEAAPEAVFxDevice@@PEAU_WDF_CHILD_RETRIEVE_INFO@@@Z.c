FxDevice *__fastcall FxChildList::GetDeviceFromId(FxChildList *this, _WDF_CHILD_RETRIEVE_INFO *Info)
{
  unsigned __int64 *p_m_ListLock; // r14
  FxDevice *m_Pdo; // rbp
  KIRQL v6; // r15
  FxDeviceDescriptionEntry *v7; // rax
  _WDF_CHILD_LIST_RETRIEVE_DEVICE_STATUS v8; // ebx
  FxChildListDescriptionState m_DescriptionState; // ecx
  _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *AddressDescription; // rdx
  FxDevice *result; // rax

  p_m_ListLock = &this->m_ListLock;
  m_Pdo = 0LL;
  v6 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  v7 = FxChildList::SearchBackwardsForMatchingModificationLocked(this, Info->IdentificationDescription);
  if ( v7 && v7->m_ModificationState == ModificationInsert )
  {
    v8 = WdfChildListRetrieveDeviceNotYetCreated;
  }
  else
  {
    v7 = FxChildList::SearchBackwardsForMatchingDescriptionLocked(this, Info->IdentificationDescription);
    if ( !v7 )
    {
      v8 = WdfChildListRetrieveDeviceNoSuchDevice;
      goto LABEL_11;
    }
    m_DescriptionState = v7->m_DescriptionState;
    if ( m_DescriptionState != DescriptionPresentNeedsInstantiation )
      m_Pdo = v7->m_Pdo;
    v8 = (m_DescriptionState == DescriptionPresentNeedsInstantiation) + 1;
  }
  AddressDescription = Info->AddressDescription;
  if ( AddressDescription )
    FxChildList::CopyAddress(this, AddressDescription, v7->m_AddressDescription);
LABEL_11:
  KeReleaseSpinLock(p_m_ListLock, v6);
  result = m_Pdo;
  Info->Status = v8;
  return result;
}
