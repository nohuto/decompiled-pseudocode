__int64 __fastcall FxPkgPnp::PowerStoppedCompleteDx(FxPkgPnp *This, __int64 a2)
{
  LOBYTE(a2) = 1;
  This->PowerReleasePendingDeviceIrp(This, a2);
  return 842LL;
}
