/*
 * XREFs of PfpGetPageListCount @ 0x1406A2EDC
 * Callers:
 *     PfpPrefetchFilesTrickle @ 0x1406A2A70 (PfpPrefetchFilesTrickle.c)
 *     PfpUpdateRepurposedByPrefetch @ 0x1406A2DC0 (PfpUpdateRepurposedByPrefetch.c)
 *     PfpVolumePrefetchMetadata @ 0x1407667FC (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchDirectoryStream @ 0x140766EA8 (PfpPrefetchDirectoryStream.c)
 *     PfSnCheckActionsNeeded @ 0x1407E3F78 (PfSnCheckActionsNeeded.c)
 *     PfpPrefetchPrivatePages @ 0x14097B268 (PfpPrefetchPrivatePages.c)
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
