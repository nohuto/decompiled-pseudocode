bool __fastcall FxpIsAddressKnownToWdf(unsigned __int64 Address, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  void *ImageAddress; // r8
  bool result; // al

  result = 0;
  if ( Address )
  {
    if ( FxDriverGlobals )
    {
      ImageAddress = FxDriverGlobals->ImageAddress;
      if ( Address >= (unsigned __int64)ImageAddress
        && Address < (unsigned __int64)ImageAddress + FxDriverGlobals->ImageSize )
      {
        return 1;
      }
    }
  }
  return result;
}
