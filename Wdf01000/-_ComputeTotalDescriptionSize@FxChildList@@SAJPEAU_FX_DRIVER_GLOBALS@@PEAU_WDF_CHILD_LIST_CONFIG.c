__int64 __fastcall FxChildList::_ComputeTotalDescriptionSize(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_CHILD_LIST_CONFIG *Config,
        unsigned __int64 *TotalDescriptionSize)
{
  unsigned __int64 _a1; // rcx
  unsigned __int64 v5; // rax
  unsigned __int64 AddressDescriptionSize; // rdx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rax
  unsigned __int16 v10; // r9

  *TotalDescriptionSize = 0LL;
  _a1 = Config->IdentificationDescriptionSize;
  v5 = (_a1 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( v5 < _a1 )
  {
    WPP_IFR_SF_dd(FxDriverGlobals, 2u, 0xCu, 0x38u, WPP_FxChildList_cpp_Traceguids, _a1, -1073741811);
    return 3221225485LL;
  }
  AddressDescriptionSize = Config->AddressDescriptionSize;
  v8 = (AddressDescriptionSize + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( v8 < AddressDescriptionSize )
  {
    WPP_IFR_SF_dd(FxDriverGlobals, 2u, 0xCu, 0x39u, WPP_FxChildList_cpp_Traceguids, AddressDescriptionSize, -1073741811);
    return 3221225485LL;
  }
  v9 = v5 + 88;
  if ( v9 < 0x58 )
  {
    *TotalDescriptionSize = -1LL;
    v10 = 58;
  }
  else
  {
    if ( v9 + v8 >= v9 )
    {
      *TotalDescriptionSize = v9 + v8;
      return 0LL;
    }
    *TotalDescriptionSize = -1LL;
    v10 = 59;
  }
  WPP_IFR_SF_D(FxDriverGlobals, 2u, 0xCu, v10, WPP_FxChildList_cpp_Traceguids, 0xC0000095);
  return 3221225621LL;
}
