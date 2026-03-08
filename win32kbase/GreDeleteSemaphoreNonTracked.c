/*
 * XREFs of GreDeleteSemaphoreNonTracked @ 0x1C00D4080
 * Callers:
 *     ?MultiUserGreCleanupEngResources@@YAXXZ @ 0x1C002AD20 (-MultiUserGreCleanupEngResources@@YAXXZ.c)
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
