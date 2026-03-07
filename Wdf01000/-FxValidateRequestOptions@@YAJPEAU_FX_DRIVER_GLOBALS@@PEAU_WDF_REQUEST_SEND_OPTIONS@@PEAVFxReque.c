__int64 __fastcall FxValidateRequestOptions(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_REQUEST_SEND_OPTIONS *Options,
        FxRequestBase *a3)
{
  unsigned int globals; // r8d

  if ( !Options )
    return 0LL;
  if ( Options->Size == 16 )
  {
    globals = Options->Flags;
    if ( (globals & 0xFFFFFFF0) != 0 )
    {
      WPP_IFR_SF_qDd(
        FxDriverGlobals,
        (unsigned __int8)Options,
        6u,
        0xBu,
        WPP_FxRequestValidateFunctions_hpp_Traceguids,
        Options,
        globals,
        0xFu);
    }
    else
    {
      if ( (globals & 0xFFFFFFF7) == 0 || (globals & 8) == 0 )
        return 0LL;
      WPP_IFR_SF_qDd(
        FxDriverGlobals,
        (unsigned __int8)Options,
        6u,
        0xCu,
        WPP_FxRequestValidateFunctions_hpp_Traceguids,
        Options,
        8u,
        globals);
    }
    return 3221225485LL;
  }
  else
  {
    WPP_IFR_SF_qdd(
      FxDriverGlobals,
      2u,
      6u,
      0xAu,
      WPP_FxRequestValidateFunctions_hpp_Traceguids,
      Options,
      16,
      Options->Size);
    return 3221225476LL;
  }
}
