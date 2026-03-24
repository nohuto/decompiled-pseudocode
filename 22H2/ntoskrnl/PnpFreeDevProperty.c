/*
 * XREFs of PnpFreeDevProperty @ 0x1406AC4C0
 * Callers:
 *     PnpFreeDevPropertyArray @ 0x1406AC460 (PnpFreeDevPropertyArray.c)
 *     PiDqPnPGetObjectPropertyInBestLocale @ 0x1406B1B74 (PiDqPnPGetObjectPropertyInBestLocale.c)
 *     PnpCopyDevProperty @ 0x14074D3C4 (PnpCopyDevProperty.c)
 *     PiDqActionDataGetChangedProperties @ 0x140770E34 (PiDqActionDataGetChangedProperties.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void __fastcall PnpFreeDevProperty(__int64 a1, ULONG a2)
{
  void *v4; // rcx
  void *v5; // rcx

  v4 = *(void **)(a1 + 24);
  if ( v4 )
    ExFreePoolWithTag(v4, a2);
  v5 = *(void **)(a1 + 40);
  if ( v5 )
    ExFreePoolWithTag(v5, a2);
}
