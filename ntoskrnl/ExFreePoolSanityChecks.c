/*
 * XREFs of ExFreePoolSanityChecks @ 0x140AE4DFC
 * Callers:
 *     VerifierExFreePool @ 0x140ABD100 (VerifierExFreePool.c)
 *     VerifierExFreePoolWithTag @ 0x140ABD170 (VerifierExFreePoolWithTag.c)
 * Callees:
 *     ExIsSpecialPoolAddress @ 0x14060CCD8 (ExIsSpecialPoolAddress.c)
 *     MmDeterminePoolType @ 0x14063F644 (MmDeterminePoolType.c)
 *     KevSkipVerification @ 0x1406775CC (KevSkipVerification.c)
 *     VerifierBugCheckIfAppropriate @ 0x140ACA284 (VerifierBugCheckIfAppropriate.c)
 */

__int64 __fastcall ExFreePoolSanityChecks(ULONG_PTR a1)
{
  __int64 result; // rax
  unsigned __int8 CurrentIrql; // di
  ULONG_PTR v4; // rdx

  result = KevSkipVerification();
  if ( !(_DWORD)result )
  {
    if ( a1 <= 0x7FFFFFFEFFFFLL )
      VerifierBugCheckIfAppropriate(0xC4u, 0x10uLL, a1, 0LL, 0LL);
    if ( !ExpSpecialAllocations || (result = ExIsSpecialPoolAddress(a1), !(_DWORD)result) )
    {
      CurrentIrql = KeGetCurrentIrql();
      if ( (a1 & 0xFFF) == 0 )
      {
        result = MmDeterminePoolType(a1);
        if ( (result & 1) != 0 )
        {
          if ( CurrentIrql > 1u )
            return VerifierBugCheckIfAppropriate(0xC4u, 0x11uLL, CurrentIrql, (int)result, a1);
        }
        else if ( CurrentIrql > 2u )
        {
          return VerifierBugCheckIfAppropriate(0xC4u, 0x12uLL, CurrentIrql, (int)result, a1);
        }
        return result;
      }
      if ( (a1 & 0xF) != 0 )
        VerifierBugCheckIfAppropriate(0xC4u, 0x16uLL, 0x1DE0uLL, a1, 0LL);
      if ( (*(_BYTE *)(a1 - 13) & 3) == 0 )
        VerifierBugCheckIfAppropriate(0xC4u, 0x13uLL, 0x1DEAuLL, a1 - 16, *(unsigned int *)(a1 - 16));
      result = *(_BYTE *)(a1 - 13) & 3;
      if ( (*(_BYTE *)(a1 - 13) & 1) != 0 )
      {
        if ( CurrentIrql <= 1u )
          goto LABEL_22;
        v4 = 17LL;
      }
      else
      {
        if ( CurrentIrql <= 2u )
          goto LABEL_22;
        v4 = 18LL;
      }
      result = VerifierBugCheckIfAppropriate(0xC4u, v4, CurrentIrql, *(_BYTE *)(a1 - 13) & 3, a1);
LABEL_22:
      if ( (*(_BYTE *)(a1 - 13) & 2) == 0 )
        return VerifierBugCheckIfAppropriate(0xC4u, 0x14uLL, 0x1E07uLL, a1 - 16, 0LL);
    }
  }
  return result;
}
