/*
 * XREFs of KsepCacheHwIdFree @ 0x14057E880
 * Callers:
 *     <none>
 * Callees:
 *     KsepStringFree @ 0x14079EC60 (KsepStringFree.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall KsepCacheHwIdFree(char *P)
{
  if ( P )
  {
    KsepStringFree(P + 40);
    ExFreePoolWithTag(P, 0x6145534Bu);
    _InterlockedIncrement(&dword_140C40384);
  }
}
