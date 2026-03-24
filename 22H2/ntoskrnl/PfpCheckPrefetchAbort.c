/*
 * XREFs of PfpCheckPrefetchAbort @ 0x14026E9CC
 * Callers:
 *     PfpOpenHandleCreate @ 0x140633828 (PfpOpenHandleCreate.c)
 *     PfpPrefetchFilesTrickle @ 0x140633C60 (PfpPrefetchFilesTrickle.c)
 *     PfpPrefetchRequestPerform @ 0x14070AFA4 (PfpPrefetchRequestPerform.c)
 *     PfpVolumePrefetchMetadata @ 0x14070B688 (PfpVolumePrefetchMetadata.c)
 *     PfpPrefetchDirectoryStream @ 0x14070BA34 (PfpPrefetchDirectoryStream.c)
 *     PfpPrefetchPrivatePages @ 0x14070C958 (PfpPrefetchPrivatePages.c)
 *     PfpPrefetchFiles @ 0x1408DF8B0 (PfpPrefetchFiles.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall PfpCheckPrefetchAbort(_QWORD *a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  _BOOL8 result; // rax

  v1 = *(_QWORD *)(*a1 + 72LL);
  result = 1;
  if ( !v1 || !*(_DWORD *)(v1 + 4) )
  {
    if ( (*(_DWORD *)(*a1 + 80LL) & 4) == 0 )
      return 0;
    v2 = a1[5];
    if ( !*(_DWORD *)(v2 + 72) && (*(_DWORD *)(v2 + 68) & 4) == 0 )
      return 0;
  }
  return result;
}
