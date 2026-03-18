/*
 * XREFs of KiAbOwnerComputeCpuPriorityKey @ 0x1403190CC
 * Callers:
 *     KiSwapThread @ 0x14023F3D0 (KiSwapThread.c)
 *     KiDispatchInterrupt @ 0x140249510 (KiDispatchInterrupt.c)
 *     KiAbEntryGetLockedHeadEntry @ 0x14024C730 (KiAbEntryGetLockedHeadEntry.c)
 *     KiAbProcessThreadLocks @ 0x1402BC320 (KiAbProcessThreadLocks.c)
 *     KiAbEntryGetCpuPriorityKey @ 0x140318FC0 (KiAbEntryGetCpuPriorityKey.c)
 *     KiAbEntryUpdateOwnerTreePosition @ 0x140319010 (KiAbEntryUpdateOwnerTreePosition.c)
 *     KiAbForceProcessLockEntry @ 0x1403CC428 (KiAbForceProcessLockEntry.c)
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
