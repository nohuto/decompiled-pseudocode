/*
 * XREFs of VfMiscKeTryToAcquireSpinLockAtDpcLevel_Entry @ 0x140AA4380
 * Callers:
 *     <none>
 * Callees:
 *     KeAreInterruptsEnabled @ 0x1402ABBD0 (KeAreInterruptsEnabled.c)
 *     VfMiscCheckKernelAddress @ 0x1406021F8 (VfMiscCheckKernelAddress.c)
 *     VerifierBugCheckIfAppropriate @ 0x140A8C924 (VerifierBugCheckIfAppropriate.c)
 */

char __fastcall VfMiscKeTryToAcquireSpinLockAtDpcLevel_Entry(__int64 a1)
{
  char result; // al
  unsigned __int8 CurrentIrql; // di

  result = VfMiscCheckKernelAddress(*(_QWORD *)(a1 + 8), 8uLL);
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql < 2u )
  {
    result = KeAreInterruptsEnabled();
    if ( result )
      return VerifierBugCheckIfAppropriate(0xC4u, 0x40uLL, CurrentIrql, *(_QWORD *)(a1 + 8), 0LL);
  }
  return result;
}
