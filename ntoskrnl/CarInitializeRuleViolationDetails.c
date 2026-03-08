/*
 * XREFs of CarInitializeRuleViolationDetails @ 0x1405D1940
 * Callers:
 *     CarCreateRuleViolationDetails @ 0x1405D15B0 (CarCreateRuleViolationDetails.c)
 *     VerifierBugCheckIfAppropriate @ 0x140ACA284 (VerifierBugCheckIfAppropriate.c)
 * Callees:
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall CarInitializeRuleViolationDetails(void *a1)
{
  unsigned int v1; // ebx

  v1 = 0;
  if ( a1 )
    memset(a1, 0, 0x48uLL);
  else
    return (unsigned int)-1073741811;
  return v1;
}
