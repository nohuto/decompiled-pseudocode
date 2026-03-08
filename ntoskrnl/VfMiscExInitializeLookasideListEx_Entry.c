/*
 * XREFs of VfMiscExInitializeLookasideListEx_Entry @ 0x140ADCB10
 * Callers:
 *     <none>
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x140ACA284 (VerifierBugCheckIfAppropriate.c)
 *     ViMiscValidateSynchronizationObject @ 0x140ADE700 (ViMiscValidateSynchronizationObject.c)
 */

__int64 __fastcall VfMiscExInitializeLookasideListEx_Entry(__int64 a1)
{
  ULONG_PTR v1; // r9
  ULONG_PTR *v2; // rbx

  v1 = *(_QWORD *)(a1 + 24);
  v2 = (ULONG_PTR *)(a1 + 56);
  if ( v1 < 8 )
    VerifierBugCheckIfAppropriate(0xC4u, 0xCDuLL, *v2, v1, 8LL);
  return ViMiscValidateSynchronizationObject(*v2);
}
