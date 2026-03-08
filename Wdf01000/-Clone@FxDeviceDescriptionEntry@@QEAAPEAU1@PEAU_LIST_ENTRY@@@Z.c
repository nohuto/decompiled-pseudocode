/*
 * XREFs of ?Clone@FxDeviceDescriptionEntry@@QEAAPEAU1@PEAU_LIST_ENTRY@@@Z @ 0x1C0023B6C
 * Callers:
 *     ?CloneEntryLocked@FxChildList@@IEAAEPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntry@@E@Z @ 0x1C0023C7C (-CloneEntryLocked@FxChildList@@IEAAEPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntry@@E@Z.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x1C0002834 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     ??0FxDeviceDescriptionEntry@@QEAA@PEAVFxChildList@@KK@Z @ 0x1C00236A0 (--0FxDeviceDescriptionEntry@@QEAA@PEAVFxChildList@@KK@Z.c)
 *     ?DuplicateAddress@FxChildList@@IEAAJPEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@0@Z @ 0x1C00242F4 (-DuplicateAddress@FxChildList@@IEAAJPEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@0@Z.c)
 *     ?DuplicateId@FxChildList@@IEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@0@Z @ 0x1C0024344 (-DuplicateId@FxChildList@@IEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@0@Z.c)
 */

FxDeviceDescriptionEntry *__fastcall FxDeviceDescriptionEntry::Clone(
        FxDeviceDescriptionEntry *this,
        _LIST_ENTRY *FreeListHead)
{
  FxChildList *m_DeviceList; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  unsigned __int64 m_TotalDescriptionSize; // r9
  void *v7; // rax
  FX_POOL **v8; // rax
  __int64 v9; // rax
  __int64 v10; // rbx
  FxChildList *v11; // rcx
  _LIST_ENTRY *Blink; // rax
  __m128i v14; // [rsp+30h] [rbp-18h] BYREF
  void *retaddr; // [rsp+48h] [rbp+0h]

  m_DeviceList = this->m_DeviceList;
  v14.m128i_i64[0] = 0LL;
  v14.m128i_i64[1] = 64LL;
  m_Globals = m_DeviceList->m_Globals;
  m_TotalDescriptionSize = m_DeviceList->m_TotalDescriptionSize;
  if ( m_Globals->FxPoolTrackingOn )
    v7 = retaddr;
  else
    v7 = 0LL;
  v8 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v14, m_TotalDescriptionSize, m_Globals->Tag, v7);
  if ( !v8 )
    return 0LL;
  FxDeviceDescriptionEntry::FxDeviceDescriptionEntry(
    (FxDeviceDescriptionEntry *)v8,
    this->m_DeviceList,
    this->m_DeviceList->m_IdentificationDescriptionSize,
    this->m_DeviceList->m_AddressDescriptionSize);
  v10 = v9;
  if ( !v9 )
    return 0LL;
  if ( FxChildList::DuplicateId(
         this->m_DeviceList,
         *(_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER **)(v9 + 24),
         this->m_IdentificationDescription) < 0
    || (v11 = this->m_DeviceList, v11->m_AddressDescriptionSize)
    && FxChildList::DuplicateAddress(
         v11,
         *(_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER **)(v10 + 32),
         this->m_AddressDescription) < 0 )
  {
    Blink = FreeListHead->Blink;
    if ( Blink->Flink != FreeListHead )
      __fastfail(3u);
    *(_QWORD *)v10 = FreeListHead;
    *(_QWORD *)(v10 + 8) = Blink;
    Blink->Flink = (_LIST_ENTRY *)v10;
    FreeListHead->Blink = (_LIST_ENTRY *)v10;
    return 0LL;
  }
  else
  {
    *(_BYTE *)(v10 + 80) = 1;
  }
  return (FxDeviceDescriptionEntry *)v10;
}
