/*
 * XREFs of DriverUnload @ 0x1C002E050
 * Callers:
 *     <none>
 * Callees:
 *     ?FxLibraryCleanup@@YAXXZ @ 0x1C002D6FC (-FxLibraryCleanup@@YAXXZ.c)
 *     ?WdfDeleteKmdfVersionFromRegistry@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C002D830 (-WdfDeleteKmdfVersionFromRegistry@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     ?wil_UninitializeFeatureStaging@@YAXXZ @ 0x1C00BC008 (-wil_UninitializeFeatureStaging@@YAXXZ.c)
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
  wil_UninitializeFeatureStaging();
}
