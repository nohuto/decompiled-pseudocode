/*
 * XREFs of KsepCacheHwIdFree @ 0x140527120
 * Callers:
 *     <none>
 * Callees:
 *     KsepStringFree @ 0x14075AFF0 (KsepStringFree.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall KsepCacheHwIdFree(char *P)
{
  if ( P )
  {
    KsepStringFree(P + 40);
    ExFreePoolWithTag(P, 0x6145534Bu);
    _InterlockedIncrement(&dword_140C2AA84);
  }
}
