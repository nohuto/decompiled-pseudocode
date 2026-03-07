__int64 __fastcall FxPkgPnp::PowerWakingDmaEnableNP(FxPkgPnp *This)
{
  return FxPkgPnp::PowerDmaEnableAndScan(This) != 0 ? 33636 : 33596;
}
