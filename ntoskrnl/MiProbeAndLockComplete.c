/*
 * XREFs of MiProbeAndLockComplete @ 0x140267C70
 * Callers:
 *     MiProbeAndLockPages @ 0x140242114 (MiProbeAndLockPages.c)
 *     MmProbeAndLockPages @ 0x140267B90 (MmProbeAndLockPages.c)
 *     MmProbeAndLockSelectedPages @ 0x1403CF7D0 (MmProbeAndLockSelectedPages.c)
 *     MmLockPhysicalPagesByVa @ 0x140A2AA04 (MmLockPhysicalPagesByVa.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14025C1E0 (MiUnlockWorkingSetShared.c)
 *     MmUnlockPages @ 0x14027C0C0 (MmUnlockPages.c)
 *     MiUnlockPageTableInternal @ 0x140290620 (MiUnlockPageTableInternal.c)
 *     MiAddMdlTracker @ 0x14061A0AC (MiAddMdlTracker.c)
 *     MmUnlockPhysicalPagesByVa @ 0x140A2AB10 (MmUnlockPhysicalPagesByVa.c)
 */

__int64 __fastcall MiProbeAndLockComplete(__int64 a1, int a2)
{
  __int64 v3; // rdx
  __int64 v5; // r8
  struct _MDL *v6; // rdi
  unsigned __int64 v8; // rdx

  v3 = *(_QWORD *)(a1 + 40);
  if ( v3 )
  {
    MiUnlockPageTableInternal(*(_QWORD *)(a1 + 104), v3);
    *(_QWORD *)(a1 + 40) = 0LL;
  }
  MiUnlockWorkingSetShared(*(_QWORD *)(a1 + 104), *(_BYTE *)(a1 + 76));
  v6 = *(struct _MDL **)(a1 + 64);
  if ( (*(_BYTE *)(a1 + 72) & 0x40) == 0 && (MmTrackLockedPages & 1) != 0 )
    MiAddMdlTracker(*(_QWORD *)(a1 + 64));
  if ( a2 < 0 )
  {
    if ( (*(_DWORD *)(a1 + 72) & 0x40) != 0 )
    {
      v8 = *(_QWORD *)(a1 + 8);
      if ( v8 > *(_QWORD *)a1 )
        MmUnlockPhysicalPagesByVa(*(_QWORD *)a1, v8 - *(_QWORD *)a1, v5, *(unsigned int *)(a1 + 96));
      _InterlockedExchangeAdd64(
        (volatile signed __int64 *)(*(_QWORD *)(a1 + 88) + 1280LL),
        -((*(_QWORD *)(a1 + 16) - *(_QWORD *)(a1 + 8)) >> 12));
    }
    else
    {
      MmUnlockPages(v6);
    }
    ++dword_140C67B94;
  }
  return (unsigned int)a2;
}
