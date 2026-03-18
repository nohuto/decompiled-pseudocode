/*
 * XREFs of ?FxIFRStop@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0039B00
 * Callers:
 *     ?FxIFRCreateSnapshot@@YAPEAU_WDF_IFR_HEADER@@PEBDPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003CB74 (-FxIFRCreateSnapshot@@YAPEAU_WDF_IFR_HEADER@@PEBDPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     FxLibraryCommonUnregisterClient @ 0x1C0041E9C (FxLibraryCommonUnregisterClient.c)
 *     FxInitialize @ 0x1C00570B8 (FxInitialize.c)
 * Callees:
 *     <none>
 */

void __fastcall FxIFRStop(_FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  if ( !FxLibraryGlobals.IfrDisabled
    && FxDriverGlobals
    && FxDriverGlobals->WdfLogHeader
    && _InterlockedExchangeAdd(&FxDriverGlobals->WdfLogHeaderRefCount, 0xFFFFFFFF) == 1 )
  {
    ExFreePoolWithTag(FxDriverGlobals->WdfLogHeader, 0x674C7846u);
    FxDriverGlobals->WdfLogHeader = 0LL;
  }
}
