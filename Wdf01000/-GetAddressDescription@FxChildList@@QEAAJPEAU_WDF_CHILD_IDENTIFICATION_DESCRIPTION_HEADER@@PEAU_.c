/*
 * XREFs of ?GetAddressDescription@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@@Z @ 0x1C0024750
 * Callers:
 *     imp_WdfChildListRetrieveAddressDescription @ 0x1C00212E0 (imp_WdfChildListRetrieveAddressDescription.c)
 * Callees:
 *     ?CopyAddress@FxChildList@@IEAAXPEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@0@Z @ 0x1C0023E80 (-CopyAddress@FxChildList@@IEAAXPEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@0@Z.c)
 *     ?SearchBackwardsForMatchingDescriptionLocked@FxChildList@@IEAAPEAUFxDeviceDescriptionEntry@@PEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z @ 0x1C002638C (-SearchBackwardsForMatchingDescriptionLocked@FxChildList@@IEAAPEAUFxDeviceDescriptionEntry@@PEAU.c)
 *     ?SearchBackwardsForMatchingModificationLocked@FxChildList@@IEAAPEAUFxDeviceDescriptionEntry@@PEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z @ 0x1C00263F8 (-SearchBackwardsForMatchingModificationLocked@FxChildList@@IEAAPEAUFxDeviceDescriptionEntry@@PEA.c)
 */

__int64 __fastcall FxChildList::GetAddressDescription(
        FxChildList *this,
        _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *IdentificationDescription,
        _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *AddressDescription)
{
  unsigned __int64 *p_m_ListLock; // rsi
  KIRQL v7; // r14
  FxDeviceDescriptionEntry *v8; // rax
  unsigned int v9; // ebx

  p_m_ListLock = &this->m_ListLock;
  v7 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  v8 = FxChildList::SearchBackwardsForMatchingModificationLocked(this, IdentificationDescription);
  v9 = 0;
  if ( v8 || (v8 = FxChildList::SearchBackwardsForMatchingDescriptionLocked(this, IdentificationDescription)) != 0LL )
    FxChildList::CopyAddress(this, AddressDescription, v8->m_AddressDescription);
  else
    v9 = -1073741810;
  KeReleaseSpinLock(p_m_ListLock, v7);
  return v9;
}
