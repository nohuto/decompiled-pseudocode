/*
 * XREFs of ?CloseCompanionLibraryInterface@FxCompanionLibrary@@AEAAXXZ @ 0x1C002CDF8
 * Callers:
 *     ?LoadCompanion@FxCompanionLibrary@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_DEVICE_OBJECT@@PEAUIDeviceCompanionCallbacks@@PEAPEAUIDeviceCompanion@@@Z @ 0x1C002D3FC (-LoadCompanion@FxCompanionLibrary@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAU_DEVICE_OBJECT@@PEAUIDeviceC.c)
 *     ?Dispose@FxCompanionTarget@@EEAAEXZ @ 0x1C002DDC0 (-Dispose@FxCompanionTarget@@EEAAEXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall FxCompanionLibrary::CloseCompanionLibraryInterface(FxCompanionLibrary *this)
{
  KeWaitForSingleObject(this, Executive, 0, 0, 0LL);
  if ( this->m_InitCount-- == 1 )
  {
    ObfDereferenceObject(this->m_RdNonPnPFile);
    ObfDereferenceObject(this->m_RdNonPnPDevice);
    this->m_RdNonPnPFile = 0LL;
    this->m_RdNonPnPDevice = 0LL;
    this->m_RdCompanionLibrary = 0LL;
  }
  KeSetEvent(&this->m_CompanionLibrarySyncEvent, 0, 0);
}
