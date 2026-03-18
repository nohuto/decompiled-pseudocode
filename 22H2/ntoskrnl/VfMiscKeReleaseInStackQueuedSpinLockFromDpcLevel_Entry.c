/*
 * XREFs of VfMiscKeReleaseInStackQueuedSpinLockFromDpcLevel_Entry @ 0x140AE0F00
 * Callers:
 *     <none>
 * Callees:
 *     KeAreInterruptsEnabled @ 0x14022EBF0 (KeAreInterruptsEnabled.c)
 *     VerifierBugCheckIfAppropriate @ 0x140ACE284 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall VfMiscKeReleaseInStackQueuedSpinLockFromDpcLevel_Entry(__int64 a1)
{
  unsigned __int8 CurrentIrql; // bl

  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u && KeAreInterruptsEnabled() )
    VerifierBugCheckIfAppropriate(0xC4u, 0x32uLL, CurrentIrql, *(_QWORD *)(a1 + 8), 0LL);
}
