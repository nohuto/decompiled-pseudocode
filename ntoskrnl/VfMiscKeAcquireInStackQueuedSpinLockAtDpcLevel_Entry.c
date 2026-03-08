/*
 * XREFs of VfMiscKeAcquireInStackQueuedSpinLockAtDpcLevel_Entry @ 0x140ADCD90
 * Callers:
 *     <none>
 * Callees:
 *     KeAreInterruptsEnabled @ 0x140312C60 (KeAreInterruptsEnabled.c)
 *     VfMiscCheckKernelAddress @ 0x1405D0078 (VfMiscCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x140ACA284 (VerifierBugCheckIfAppropriate.c)
 */

char __fastcall VfMiscKeAcquireInStackQueuedSpinLockAtDpcLevel_Entry(__int64 a1)
{
  char result; // al
  unsigned __int8 CurrentIrql; // di

  VfMiscCheckKernelAddress(*(_QWORD *)(a1 + 16), 8uLL);
  result = VfMiscCheckKernelAddress(*(_QWORD *)(a1 + 8), 0x18uLL);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
  {
    result = KeAreInterruptsEnabled();
    if ( result )
      return VerifierBugCheckIfAppropriate(0xC4u, 0x40uLL, CurrentIrql, *(_QWORD *)(a1 + 8), 0LL);
  }
  return result;
}
