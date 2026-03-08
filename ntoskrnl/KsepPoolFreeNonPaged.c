/*
 * XREFs of KsepPoolFreeNonPaged @ 0x140303C4C
 * Callers:
 *     KseShimDriverIoCallbacks @ 0x14079D690 (KseShimDriverIoCallbacks.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall KsepPoolFreeNonPaged(void *a1)
{
  if ( a1 )
  {
    ExFreePoolWithTag(a1, 0x6245534Bu);
    _InterlockedIncrement(&dword_140C4038C);
  }
}
