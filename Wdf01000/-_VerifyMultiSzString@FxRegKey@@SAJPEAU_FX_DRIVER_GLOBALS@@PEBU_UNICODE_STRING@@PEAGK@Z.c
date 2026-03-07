__int64 __fastcall FxRegKey::_VerifyMultiSzString(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        const _UNICODE_STRING *RegValueName,
        wchar_t *DataString,
        unsigned int DataLength)
{
  const _UNICODE_STRING *_a2; // r11
  unsigned __int16 v6; // r9

  _a2 = RegValueName;
  if ( (DataLength & 1) != 0 )
  {
    v6 = 10;
  }
  else
  {
    LODWORD(RegValueName) = DataLength >> 1;
    if ( DataLength >> 1 >= 2 && !DataString[(_DWORD)RegValueName - 1] && !DataString[(_DWORD)RegValueName - 2] )
      return 0LL;
    v6 = 11;
  }
  WPP_IFR_SF_Zd(FxDriverGlobals, (unsigned __int8)RegValueName, 2u, v6, WPP_FxRegKey_cpp_Traceguids, _a2, DataLength);
  return 3221225508LL;
}
