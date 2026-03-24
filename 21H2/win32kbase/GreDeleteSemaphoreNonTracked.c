/*
 * XREFs of GreDeleteSemaphoreNonTracked @ 0x1C007CBD0
 * Callers:
 *     ?MultiUserGreCleanupEngResources@@YAXXZ @ 0x1C007CA1C (-MultiUserGreCleanupEngResources@@YAXXZ.c)
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
