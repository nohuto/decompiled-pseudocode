/*
 * XREFs of PfpCheckPrefetchAbort @ 0x14020C198
 * Callers:
 *     PfpPrefetchFilesTrickle @ 0x1406A2A70 (PfpPrefetchFilesTrickle.c)
 *     PfpOpenHandleCreate @ 0x1406A5020 (PfpOpenHandleCreate.c)
 *     PfpPrefetchRequestPerform @ 0x1407662E0 (PfpPrefetchRequestPerform.c)
 *     PfpVolumePrefetchMetadata @ 0x1407667FC (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchDirectoryStream @ 0x140766EA8 (PfpPrefetchDirectoryStream.c)
 *     PfpPrefetchFiles @ 0x14097AEE4 (PfpPrefetchFiles.c)
 *     PfpPrefetchPrivatePages @ 0x14097B268 (PfpPrefetchPrivatePages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfpCheckPrefetchAbort(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rax

  v1 = *(_QWORD *)(*a1 + 72LL);
  if ( v1 && *(_DWORD *)(v1 + 4) )
    return 1LL;
  if ( (*(_DWORD *)(*a1 + 80LL) & 4) != 0 )
  {
    v2 = a1[5];
    if ( !*(_DWORD *)(v2 + 72) )
      return (*(_DWORD *)(v2 + 68) >> 2) & 1;
    return 1LL;
  }
  return 0LL;
}
