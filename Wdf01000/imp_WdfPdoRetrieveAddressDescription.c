__int64 __fastcall imp_WdfPdoRetrieveAddressDescription(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *AddressDescription)
{
  __int64 result; // rax
  FxDeviceDescriptionEntry *m_Description; // rdx
  FxChildList *m_DeviceList; // rcx
  unsigned int m_AddressDescriptionSize; // eax
  void *retaddr; // [rsp+38h] [rbp+0h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+40h] [rbp+8h] BYREF
  FxPkgPdo *pPkgPdo; // [rsp+50h] [rbp+18h] BYREF

  pFxDriverGlobals = 0LL;
  pPkgPdo = 0LL;
  result = GetPdoPackageFromDeviceHandle(
             (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
             Device,
             "imp_WdfPdoRetrieveAddressDescription",
             &pPkgPdo,
             &pFxDriverGlobals,
             0LL);
  if ( !AddressDescription )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  if ( (int)result >= 0 )
  {
    m_Description = pPkgPdo->m_Description;
    if ( m_Description
      && (m_DeviceList = m_Description->m_DeviceList,
          (m_AddressDescriptionSize = m_DeviceList->m_AddressDescriptionSize) != 0)
      && m_AddressDescriptionSize == AddressDescription->AddressDescriptionSize )
    {
      FxChildList::GetAddressDescriptionFromEntry(m_DeviceList, m_Description, AddressDescription);
      return 0LL;
    }
    else
    {
      return 3221225488LL;
    }
  }
  return result;
}
