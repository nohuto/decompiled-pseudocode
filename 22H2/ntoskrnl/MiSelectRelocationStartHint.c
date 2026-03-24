/*
 * XREFs of MiSelectRelocationStartHint @ 0x14066AE90
 * Callers:
 *     MiSelectImageBase @ 0x14066AAC0 (MiSelectImageBase.c)
 *     MiObtainRelocationBits @ 0x14066ADB4 (MiObtainRelocationBits.c)
 * Callees:
 *     RtlFindClearBitsEx @ 0x140228560 (RtlFindClearBitsEx.c)
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     RtlCopyBitMapEx @ 0x1402FA2A0 (RtlCopyBitMapEx.c)
 *     RtlMergeBitMapsEx @ 0x1403C697C (RtlMergeBitMapsEx.c)
 */

unsigned __int64 __fastcall MiSelectRelocationStartHint(__int64 a1, unsigned __int16 a2, unsigned __int64 a3, int a4)
{
  unsigned __int64 v6; // r15
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int64 ClearBits; // rsi
  char v11; // bl

  v6 = a2;
  if ( !*(_QWORD *)(a1 + 8) )
    return RtlFindClearBitsEx(*(unsigned __int64 **)a1, a2, a3);
  CurrentThread = KeGetCurrentThread();
  if ( !a4 )
  {
    --CurrentThread->SpecialApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4CB48, 0LL);
  }
  RtlCopyBitMapEx(*(_QWORD *)a1, &qword_140C4CBD0, 0LL);
  RtlMergeBitMapsEx((unsigned __int64 *)&qword_140C4CBD0, *(__int64 **)(a1 + 8));
  ClearBits = RtlFindClearBitsEx((unsigned __int64 *)&qword_140C4CBD0, v6, a3);
  if ( !a4 )
  {
    v11 = _InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4CB48, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v11 & 2) != 0 && (v11 & 4) == 0 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C4CB48);
    KeAbPostRelease((ULONG_PTR)&qword_140C4CB48);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  return ClearBits;
}
