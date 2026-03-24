/*
 * XREFs of MiFreeLargePageCharges @ 0x14055E3BC
 * Callers:
 *     MiFreeSmallPageFromMdl @ 0x140280524 (MiFreeSmallPageFromMdl.c)
 *     MiFreeContiguousPages @ 0x1402E91B8 (MiFreeContiguousPages.c)
 *     MiFinishLargePageFree @ 0x1403F7084 (MiFinishLargePageFree.c)
 *     MiFreeBootDriverPages @ 0x140A50050 (MiFreeBootDriverPages.c)
 * Callees:
 *     MiReleaseNonPagedResources @ 0x1402E9CE0 (MiReleaseNonPagedResources.c)
 */

unsigned __int64 __fastcall MiFreeLargePageCharges(__int64 a1, __int64 a2)
{
  unsigned __int64 result; // rax

  if ( a2 )
    return MiReleaseNonPagedResources(a1, a2);
  return result;
}
