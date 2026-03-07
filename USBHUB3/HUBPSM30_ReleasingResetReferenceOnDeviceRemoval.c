__int64 __fastcall HUBPSM30_ReleasingResetReferenceOnDeviceRemoval(__int64 a1)
{
  volatile signed __int32 *v1; // rbx

  v1 = *(volatile signed __int32 **)(a1 + 960);
  HUBMISC_DetachDevice(v1);
  HUBMUX_ReleaseResetReference(v1);
  return 3013LL;
}
