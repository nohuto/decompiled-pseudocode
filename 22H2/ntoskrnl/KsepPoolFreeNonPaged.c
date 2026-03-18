/*
 * XREFs of KsepPoolFreeNonPaged @ 0x140209F2C
 * Callers:
 *     KseShimDriverIoCallbacks @ 0x140693D74 (KseShimDriverIoCallbacks.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AAF110 (ExFreePoolWithTag.c)
 */

void __fastcall KsepPoolFreeNonPaged(void *a1)
{
  if ( a1 )
  {
    ExFreePoolWithTag(a1, 0x6245534Bu);
    _InterlockedIncrement(&dword_140C407CC);
  }
}
