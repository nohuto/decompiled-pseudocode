/*
 * XREFs of ?CleanUpRegion@@YAXPEAVREGION@@@Z @ 0x1C016B240
 * Callers:
 *     <none>
 * Callees:
 *     ?vDeleteREGION@REGION@@QEAAXXZ @ 0x1C0023E50 (-vDeleteREGION@REGION@@QEAAXXZ.c)
 */

void __fastcall CleanUpRegion(struct _SLIST_ENTRY *a1)
{
  REGION::vDeleteREGION(a1);
}
