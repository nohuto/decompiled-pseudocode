/*
 * XREFs of ??0FxDeviceDescriptionEntry@@QEAA@PEAVFxChildList@@KK@Z @ 0x1C003A7D0
 * Callers:
 *     ?Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@PEAK@Z @ 0x1C003A8B4 (-Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_.c)
 *     ?Clone@FxDeviceDescriptionEntry@@QEAAPEAU1@PEAU_LIST_ENTRY@@@Z @ 0x1C003ABB0 (-Clone@FxDeviceDescriptionEntry@@QEAAPEAU1@PEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C000CA80 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 */

void __fastcall FxDeviceDescriptionEntry::FxDeviceDescriptionEntry(
        FxDeviceDescriptionEntry *this,
        FxChildList *DeviceList,
        unsigned int IdentificationDescriptionSize,
        unsigned int AddressDescriptionSize)
{
  _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *v5; // rcx

  this->m_IdentificationDescription = (_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *)&this[1];
  LODWORD(this[1].m_DescriptionLink.Flink) = IdentificationDescriptionSize;
  if ( AddressDescriptionSize )
  {
    v5 = (_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *)((char *)this->m_IdentificationDescription
                                                 + ((IdentificationDescriptionSize + 7LL) & 0xFFFFFFFFFFFFFFF8uLL));
    this->m_AddressDescription = v5;
    v5->AddressDescriptionSize = AddressDescriptionSize;
  }
  *(_WORD *)&this->m_FoundInLastScan = 0;
  this->m_PendingDeleteOnScanEnd = 0;
  this->m_ModificationLink.Blink = &this->m_ModificationLink;
  this->m_ModificationLink.Flink = &this->m_ModificationLink;
  this->m_DescriptionLink.Blink = (_LIST_ENTRY *)this;
  this->m_DescriptionLink.Flink = (_LIST_ENTRY *)this;
  this->m_ModificationState = ModificationInsert;
  this->m_DeviceList = DeviceList;
  FxObject::AddRef(DeviceList, this, 72, "minkernel\\wdf\\framework\\kmdf\\src\\core\\fxchildlist.cpp");
}
