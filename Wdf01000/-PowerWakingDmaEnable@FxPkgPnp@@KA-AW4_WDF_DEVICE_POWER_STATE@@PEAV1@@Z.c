__int64 __fastcall FxPkgPnp::PowerWakingDmaEnable(FxPkgPnp *This)
{
  return FxPkgPnp::PowerDmaEnableAndScan(This) != 0 ? 867 : 827;
}
