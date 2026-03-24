/*
 * XREFs of KsepPoolFreeNonPaged @ 0x140372124
 * Callers:
 *     KseShimDriverIoCallbacks @ 0x140757D14 (KseShimDriverIoCallbacks.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall KsepPoolFreeNonPaged(void *a1)
{
  if ( a1 )
  {
    ExFreePoolWithTag(a1, 0x6245534Bu);
    _InterlockedIncrement(&dword_140C2AA8C);
  }
}
