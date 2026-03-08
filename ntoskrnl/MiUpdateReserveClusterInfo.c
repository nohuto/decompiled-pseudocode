/*
 * XREFs of MiUpdateReserveClusterInfo @ 0x14020B44C
 * Callers:
 *     MiReleasePageFileInfo @ 0x14020B300 (MiReleasePageFileInfo.c)
 *     MiAdjustModifiedPageLoad @ 0x140360B80 (MiAdjustModifiedPageLoad.c)
 *     MiFinishPageFileExtension @ 0x1406376C8 (MiFinishPageFileExtension.c)
 *     MiInsertPageFileInList @ 0x140835F30 (MiInsertPageFileInList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiUpdateReserveClusterInfo(__int64 a1, signed __int32 *a2, unsigned __int16 a3)
{
  if ( a2 )
    return (unsigned int)_InterlockedCompareExchange(
                           (volatile signed __int32 *)(a1 + 912),
                           *a2 ^ (a3 ^ (unsigned __int16)*a2) & 0x3FF,
                           *a2);
  else
    return (unsigned int)_InterlockedExchange(
                           (volatile __int32 *)(a1 + 912),
                           (*(_DWORD *)(a1 + 912) & 0xFFFFFC00 | 0x200) + 1024);
}
