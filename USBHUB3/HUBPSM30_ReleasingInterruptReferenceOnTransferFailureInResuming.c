__int64 __fastcall HUBPSM30_ReleasingInterruptReferenceOnTransferFailureInResuming(__int64 a1)
{
  HUBMUX_ReleaseInterruptReference(*(volatile signed __int32 **)(a1 + 960));
  return 3013LL;
}
