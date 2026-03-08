/*
 * XREFs of RtlpUnlockAtomTable @ 0x1407DAD98
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x1403546F0 (RtlAddAtomToAtomTableEx.c)
 *     RtlDestroyLowBoxAtoms @ 0x140355F84 (RtlDestroyLowBoxAtoms.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegion @ 0x140262D70 (KeLeaveCriticalRegion.c)
 */

void __fastcall RtlpUnlockAtomTable(__int64 a1)
{
  ULONG_PTR v1; // rbx

  v1 = a1 + 8;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 8), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)(a1 + 8));
  KeAbPostRelease(v1);
  KeLeaveCriticalRegion();
}
