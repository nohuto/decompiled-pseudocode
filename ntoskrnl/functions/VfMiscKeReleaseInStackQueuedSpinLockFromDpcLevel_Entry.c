void __fastcall VfMiscKeReleaseInStackQueuedSpinLockFromDpcLevel_Entry(__int64 a1)
{
  unsigned __int8 CurrentIrql; // bl

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u && KeAreInterruptsEnabled() )
    VerifierBugCheckIfAppropriate(0xC4u, 0x32uLL, CurrentIrql, *(_QWORD *)(a1 + 8), 0LL);
}
