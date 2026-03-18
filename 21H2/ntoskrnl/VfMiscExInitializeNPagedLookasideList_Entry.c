/*
 * XREFs of VfMiscExInitializeNPagedLookasideList_Entry @ 0x140AA3D10
 * Callers:
 *     <none>
 * Callees:
 *     VerifierBugCheckIfAppropriate @ 0x140A8C924 (VerifierBugCheckIfAppropriate.c)
 *     ViMiscValidateSynchronizationObject @ 0x140AA59E0 (ViMiscValidateSynchronizationObject.c)
 */

__int64 __fastcall VfMiscExInitializeNPagedLookasideList_Entry(__int64 a1)
{
  ULONG_PTR v1; // r9

  v1 = *(_QWORD *)(a1 + 24);
  if ( v1 < 8 )
    VerifierBugCheckIfAppropriate(0xC4u, 0xCDuLL, *(_QWORD *)(a1 + 56), v1, 8LL);
  return ViMiscValidateSynchronizationObject(*(_QWORD *)(a1 + 56));
}
