/*
 * XREFs of GreDeleteSemaphoreNonTracked @ 0x1C007E2B0
 * Callers:
 *     ?MultiUserGreCleanupEngResources@@YAXXZ @ 0x1C007E0FC (-MultiUserGreCleanupEngResources@@YAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall GreDeleteSemaphoreNonTracked(struct _ERESOURCE *P)
{
  if ( P )
  {
    ExDeleteResourceLite(P);
    ExFreePoolWithTag(P, 0);
  }
}
