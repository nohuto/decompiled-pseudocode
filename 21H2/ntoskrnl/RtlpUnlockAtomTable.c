/*
 * XREFs of RtlpUnlockAtomTable @ 0x1407A09E4
 * Callers:
 *     RtlDestroyLowBoxAtoms @ 0x140232EF0 (RtlDestroyLowBoxAtoms.c)
 *     RtlAddAtomToAtomTableEx @ 0x1402F1090 (RtlAddAtomToAtomTableEx.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

void __fastcall RtlpUnlockAtomTable(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 + 8;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 8);
  KeAbPostRelease(v1);
  KeLeaveCriticalRegion();
}
