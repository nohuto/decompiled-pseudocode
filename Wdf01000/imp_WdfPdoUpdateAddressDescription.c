/*
 * XREFs of imp_WdfPdoUpdateAddressDescription @ 0x1C0021EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPdoPackageFromDeviceHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEADPEAPEAVFxPkgPdo@@PEAPEAU1@PEAPEAVFxDevice@@@Z @ 0x1C00031D0 (-GetPdoPackageFromDeviceHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEADPEAPEAVFxPkgPdo@.c)
 *     ?UpdateAddressDescriptionFromEntry@FxChildList@@QEAAXPEAUFxDeviceDescriptionEntry@@PEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@@Z @ 0x1C0026470 (-UpdateAddressDescriptionFromEntry@FxChildList@@QEAAXPEAUFxDeviceDescriptionEntry@@PEAU_WDF_CHIL.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0045BD8 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfPdoUpdateAddressDescription(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *AddressDescription)
{
  __int64 result; // rax
  FxDeviceDescriptionEntry *m_Description; // rdx
  FxChildList *m_DeviceList; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+40h] [rbp+8h] BYREF
  FxPkgPdo *pPkgPdo; // [rsp+50h] [rbp+18h] BYREF

  pFxDriverGlobals = 0LL;
  pPkgPdo = 0LL;
  result = GetPdoPackageFromDeviceHandle(
             (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
             Device,
             "imp_WdfPdoUpdateAddressDescription",
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
          m_DeviceList->m_AddressDescriptionSize == AddressDescription->AddressDescriptionSize) )
    {
      FxChildList::UpdateAddressDescriptionFromEntry(m_DeviceList, m_Description, AddressDescription);
      return 0LL;
    }
    else
    {
      return 3221225488LL;
    }
  }
  return result;
}
