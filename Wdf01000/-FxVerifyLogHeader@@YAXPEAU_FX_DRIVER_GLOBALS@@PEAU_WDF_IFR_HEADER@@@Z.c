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
