/*
 * XREFs of KiAbOwnerComputeCpuPriorityKey @ 0x140358338
 * Callers:
 *     KiAbProcessThreadLocks @ 0x140239A40 (KiAbProcessThreadLocks.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x14024CE30 (KiAbEntryGetLockedHeadEntry.c)
 *     KiDispatchInterrupt @ 0x140255DA0 (KiDispatchInterrupt.c)
 *     KiSwapThread @ 0x14025F500 (KiSwapThread.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x14035822C (KiAbEntryGetCpuPriorityKey.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x14035827C (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiAbForceProcessLockEntry @ 0x1403C7578 (KiAbForceProcessLockEntry.c)
 * Callees:
 *     <none>
 */

char __fastcall KiAbOwnerComputeCpuPriorityKey(__int64 a1)
{
  char v1; // dl
  char v2; // cl
  char v3; // al
  unsigned int v5; // edx

  v1 = 0;
  if ( (*(_DWORD *)(a1 + 88) & 0x3FFFFFFF) != 0 )
  {
    _BitScanReverse(&v5, *(_DWORD *)(a1 + 88) & 0x3FFFFFFF);
    v1 = v5 + 1;
  }
  v2 = *(_BYTE *)(a1 - 96LL * *(unsigned __int8 *)(a1 + 16) - 1133);
  if ( v2 > v1 )
  {
    v3 = v2;
    if ( v2 > 30 )
      return 30;
    return v3;
  }
  return v1;
}
