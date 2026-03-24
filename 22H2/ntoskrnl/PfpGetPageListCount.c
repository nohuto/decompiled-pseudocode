/*
 * XREFs of PfpGetPageListCount @ 0x1406340C8
 * Callers:
 *     PfSnCheckActionsNeeded @ 0x140630F78 (PfSnCheckActionsNeeded.c)
 *     PfpPrefetchFilesTrickle @ 0x140633C60 (PfpPrefetchFilesTrickle.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x140633FAC (PfpUpdateRepurposedByPrefetch.c)
 *     PfpVolumePrefetchMetadata @ 0x14070B688 (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchDirectoryStream @ 0x14070BA34 (PfpPrefetchDirectoryStream.c)
 *     PfpPrefetchPrivatePages @ 0x14070C958 (PfpPrefetchPrivatePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfpGetPageListCount(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 result; // rax

  result = 0LL;
  while ( a2 <= a3 )
    result += *(_QWORD *)(a1 + 8LL * a2++);
  return result;
}
