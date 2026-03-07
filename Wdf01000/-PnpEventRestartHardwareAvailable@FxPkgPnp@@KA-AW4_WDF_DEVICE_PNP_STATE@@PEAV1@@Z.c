__int64 __fastcall FxPkgPnp::PnpEventRestartHardwareAvailable(FxPkgPnp *This)
{
  unsigned __int8 v2; // r8
  unsigned __int8 matched; // [rsp+38h] [rbp+10h] BYREF
  FxCxCallbackProgress progress; // [rsp+40h] [rbp+18h] BYREF

  matched = 0;
  progress = FxCxCallbackProgressInitialized;
  if ( FxPkgPnp::PnpPrepareHardware(This, &matched, &progress) >= 0 )
  {
    FxPkgPnp::PowerPolicyProcessEvent(This, PwrPolStart, v2);
    return 314LL;
  }
  else if ( matched )
  {
    return (unsigned int)(progress == FxCxCallbackProgressInitialized) + 298;
  }
  else
  {
    return 299LL;
  }
}
