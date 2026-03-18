/*
 * XREFs of VfMiscExInitializeNPagedLookasideList_Entry @ 0x140AE0B80
 * Callers:
 *     <none>
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x140ACE284 (VerifierBugCheckIfAppropriate.c)
 *     ViMiscValidateSynchronizationObject @ 0x140AE2700 (ViMiscValidateSynchronizationObject.c)
 */

__int64 __fastcall VfMiscExInitializeNPagedLookasideList_Entry(__int64 a1)
{
  ULONG_PTR v1; // r9
  ULONG_PTR *v2; // rbx

  v1 = *(_QWORD *)(a1 + 24);
  v2 = (ULONG_PTR *)(a1 + 56);
  if ( v1 < 8 )
    VerifierBugCheckIfAppropriate(0xC4u, 0xCDuLL, *v2, v1, 8LL);
  return ViMiscValidateSynchronizationObject(*v2);
}
