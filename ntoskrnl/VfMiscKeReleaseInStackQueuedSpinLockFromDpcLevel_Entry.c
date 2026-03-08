/*
 * XREFs of VfMiscKeReleaseInStackQueuedSpinLockFromDpcLevel_Entry @ 0x140ADCF00
 * Callers:
 *     <none>
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140312C60 (KeAreInterruptsEnabled.c)
 *     VerifierBugCheckIfAppropriate @ 0x140ACA284 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall VfMiscKeReleaseInStackQueuedSpinLockFromDpcLevel_Entry(__int64 a1)
{
  unsigned __int8 CurrentIrql; // bl

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u && KeAreInterruptsEnabled() )
    VerifierBugCheckIfAppropriate(0xC4u, 0x32uLL, CurrentIrql, *(_QWORD *)(a1 + 8), 0LL);
}
