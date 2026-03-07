__int64 __fastcall FxPkgPnp::PnpEventStartingFromStopped(FxPkgPnp *This)
{
  unsigned __int8 matched; // [rsp+38h] [rbp+10h] BYREF
  FxCxCallbackProgress progress; // [rsp+40h] [rbp+18h] BYREF

  matched = 0;
  progress = FxCxCallbackProgressInitialized;
  if ( FxPkgPnp::PnpPrepareHardware(This, &matched, &progress) >= 0 )
    return 280LL;
  if ( matched )
    return (unsigned int)(progress == FxCxCallbackProgressInitialized) + 298;
  return 299LL;
}
