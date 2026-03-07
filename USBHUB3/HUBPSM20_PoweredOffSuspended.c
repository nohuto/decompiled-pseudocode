__int64 __fastcall HUBPSM20_PoweredOffSuspended(__int64 a1)
{
  HUBMUX_ReleasePortPowerReference(*(volatile signed __int32 **)(a1 + 960));
  return 1000LL;
}
