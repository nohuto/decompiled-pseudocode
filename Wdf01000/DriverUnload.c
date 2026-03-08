/*
 * XREFs of DriverUnload @ 0x1C0017570
 * Callers:
 *     <none>
 * Callees:
 *     ?FxLibraryCleanup@@YAXXZ @ 0x1C0016C00 (-FxLibraryCleanup@@YAXXZ.c)
 *     ?WdfDeleteKmdfVersionFromRegistry@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0016D34 (-WdfDeleteKmdfVersionFromRegistry@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 */

void __fastcall DriverUnload(_DRIVER_OBJECT *DriverObject)
{
  if ( WdfLdrDbgPrintOn )
  {
    DbgPrintEx(0x65u, 0, "%s: ", "Wdf01000");
    DbgPrintEx(0x65u, 0, "DriverUnload\n");
  }
  WdfDeleteKmdfVersionFromRegistry(DriverObject);
  FxLibraryCleanup();
  if ( wil_details_featureChangeNotification )
  {
    RtlUnregisterFeatureConfigurationChangeNotification();
    wil_details_featureChangeNotification = 0LL;
  }
}
