/*
 * XREFs of PnpFreeDevProperty @ 0x1406CC4E0
 * Callers:
 *     PiDqPnPGetObjectPropertyInBestLocale @ 0x1406CB9F8 (PiDqPnPGetObjectPropertyInBestLocale.c)
 *     PnpFreeDevPropertyArray @ 0x1406CC480 (PnpFreeDevPropertyArray.c)
 *     PnpCopyDevProperty @ 0x140807610 (PnpCopyDevProperty.c)
 *     PiDqActionDataGetChangedProperties @ 0x14083AC48 (PiDqActionDataGetChangedProperties.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
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
