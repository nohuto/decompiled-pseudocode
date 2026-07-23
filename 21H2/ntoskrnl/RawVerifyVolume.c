/*
 * XREFs of RawVerifyVolume @ 0x140585074
 * Callers:
 *     RawFileSystemControl @ 0x1406C9068 (RawFileSystemControl.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140253C70 (KeReleaseGuardedMutex.c)
 *     RawInitiateDeleteVolume @ 0x1402A592C (RawInitiateDeleteVolume.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x1402A5C00 (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     KeReleaseQueuedSpinLock @ 0x14031B920 (KeReleaseQueuedSpinLock.c)
 *     KeAcquireQueuedSpinLock @ 0x14031B9C0 (KeAcquireQueuedSpinLock.c)
 *     ExAcquireFastMutex @ 0x140354DD0 (ExAcquireFastMutex.c)
 */

__int64 __fastcall RawVerifyVolume(__int64 a1, __int64 a2)
{
  char v4; // bp
  char v5; // r14
  KIRQL v6; // al
  __int64 v7; // rsi
  int v8; // eax
  KIRQL v9; // al

  v4 = 0;
  v5 = 0;
  v6 = KeAcquireQueuedSpinLock(9uLL);
  v7 = *(_QWORD *)(a1 + 8);
  if ( (*(_BYTE *)(v7 + 4) & 1) != 0 )
  {
    ++*(_DWORD *)(v7 + 28);
    v4 = 1;
  }
  KeReleaseQueuedSpinLock(9uLL, v6);
  if ( v4 )
  {
    ExAcquireFastMutex((PFAST_MUTEX)(a2 + 224));
    v8 = *(_DWORD *)(a2 + 104);
    if ( (v8 & 2) == 0 )
    {
      v5 = 1;
      *(_DWORD *)(a2 + 104) = v8 | 2;
    }
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a2 + 224));
    if ( v5 )
      ExWaitForRundownProtectionReleaseCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a2 + 216));
    ExAcquireFastMutex((PFAST_MUTEX)(a2 + 224));
    v9 = KeAcquireQueuedSpinLock(9uLL);
    --*(_DWORD *)(v7 + 28);
    KeReleaseQueuedSpinLock(9uLL, v9);
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 184) + 16LL) + 48LL) &= ~2u;
    if ( !RawInitiateDeleteVolume((PFSRTL_ADVANCED_FCB_HEADER)a2, 1, 0) )
      KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a2 + 224));
  }
  return 3221225490LL;
}
