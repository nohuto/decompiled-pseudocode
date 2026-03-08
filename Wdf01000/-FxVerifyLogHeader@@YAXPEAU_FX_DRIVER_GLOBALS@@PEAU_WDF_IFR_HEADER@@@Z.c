/*
 * XREFs of ?FxVerifyLogHeader@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_IFR_HEADER@@@Z @ 0x1C0007F9C
 * Callers:
 *     FxIFR @ 0x1C0007DD4 (FxIFR.c)
 * Callees:
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0017BA8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     FxIsEqualGuid @ 0x1C00229A0 (FxIsEqualGuid.c)
 */

void __fastcall FxVerifyLogHeader(_FX_DRIVER_GLOBALS *FxDriverGlobals, _WDF_IFR_HEADER *Header)
{
  unsigned int Size; // ecx

  if ( FxDriverGlobals->FxVerifierOn )
  {
    if ( strncmp(Header->DriverName, FxDriverGlobals->Public.DriverName, 0x20uLL)
      || !FxIsEqualGuid(&Header->Guid, &WdfTraceGuid)
      || (_WDF_IFR_HEADER *)Header->Base != &Header[1]
      || (Size = Header->Size, Header->Offset.u.s.Current > Size)
      || Header->Offset.u.s.Previous > Size
      || Size >= 0x10000 )
    {
      FxVerifierDbgBreakPoint(FxDriverGlobals);
    }
  }
}
