/*
 * XREFs of ViMiscEnforceRule @ 0x140ADE528
 * Callers:
 *     VfMiscMmAllocateContiguousMemoryEx_Entry @ 0x140ADD1A0 (VfMiscMmAllocateContiguousMemoryEx_Entry.c)
 *     VfMiscMmAllocateContiguousMemory_Entry @ 0x140ADD1D0 (VfMiscMmAllocateContiguousMemory_Entry.c)
 * Callees:
 *     VfUtilIsSignedDriver @ 0x1405CBF18 (VfUtilIsSignedDriver.c)
 *     VerifierBugCheckIfAppropriate @ 0x140ACA284 (VerifierBugCheckIfAppropriate.c)
 */

void __fastcall ViMiscEnforceRule(__int64 a1, __int64 a2, char a3)
{
  if ( (VfRuleClasses & 0x400000) != 0 || !VfUtilIsSignedDriver() )
  {
    if ( a3 )
      VerifierBugCheckIfAppropriate(0xC4u, 0x8BuLL, 0LL, 0LL, 0LL);
  }
}
