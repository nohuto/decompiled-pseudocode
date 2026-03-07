int __fastcall imp_WdfPdoRetrieveIdentificationDescription(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *IdentificationDescription)
{
  int result; // eax
  FxDeviceDescriptionEntry *m_Description; // r8
  FxChildList *m_DeviceList; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+40h] [rbp+8h] BYREF
  FxPkgPdo *pPkgPdo; // [rsp+50h] [rbp+18h] BYREF

  pFxDriverGlobals = 0LL;
  pPkgPdo = 0LL;
  result = GetPdoPackageFromDeviceHandle(
             (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
             Device,
             "imp_WdfPdoRetrieveIdentificationDescription",
             &pPkgPdo,
             &pFxDriverGlobals,
             0LL);
  if ( !IdentificationDescription )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  if ( result >= 0 )
  {
    m_Description = pPkgPdo->m_Description;
    if ( m_Description
      && (m_DeviceList = m_Description->m_DeviceList, !m_DeviceList->m_StaticList)
      && m_DeviceList->m_IdentificationDescriptionSize == IdentificationDescription->IdentificationDescriptionSize )
    {
      FxChildList::CopyId(m_DeviceList, IdentificationDescription, m_Description->m_IdentificationDescription);
      return 0;
    }
    else
    {
      return -1073741808;
    }
  }
  return result;
}
