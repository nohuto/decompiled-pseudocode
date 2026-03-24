/*
 * XREFs of MiReturnImageBase @ 0x1406382F8
 * Callers:
 *     MiCheckControlArea @ 0x140295130 (MiCheckControlArea.c)
 *     MiRelocateImageAgain @ 0x14066A858 (MiRelocateImageAgain.c)
 *     MiFreeRelocations @ 0x14076A7B8 (MiFreeRelocations.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140271BF0 (ExfTryToWakePushLock.c)
 *     RtlClearBitsEx @ 0x14027E980 (RtlClearBitsEx.c)
 *     KeAbPostRelease @ 0x1402C9370 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402CB080 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1402CB480 (KiLeaveGuardedRegionUnsafe.c)
 *     MiGetImageBitMapInfo @ 0x1402FA0E0 (MiGetImageBitMapInfo.c)
 *     MiZeroCfgSystemWideBitmap @ 0x140331F14 (MiZeroCfgSystemWideBitmap.c)
 *     MiReturnSystemImageAddress @ 0x14075F494 (MiReturnSystemImageAddress.c)
 */

char __fastcall MiReturnImageBase(__int64 a1)
{
  _UNKNOWN **v1; // rax
  unsigned __int64 v2; // rsi
  struct _KTHREAD *CurrentThread; // rbp
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v1 = &retaddr;
  v8 = 0LL;
  v2 = *(_QWORD *)a1;
  v6 = 0LL;
  if ( v2 != -1LL )
  {
    if ( *(_BYTE *)(a1 + 12) == 1 )
    {
      if ( *(_BYTE *)(a1 + 13) == 1 )
        LOBYTE(v1) = MiReturnSystemImageAddress((v2 - 0x80000000) << 16, (unsigned int)(*(_DWORD *)(a1 + 8) << 16));
    }
    else
    {
      MiGetImageBitMapInfo(*(_DWORD *)(a1 + 16), &v6, &v8, 0LL);
      MiZeroCfgSystemWideBitmap(a1, v8 - ((v2 + *(unsigned int *)(a1 + 8)) << 16));
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      ExAcquirePushLockExclusiveEx((ULONG_PTR)&qword_140C4CB48, 0LL);
      if ( *((_QWORD *)&v6 + 1) )
        RtlClearBitsEx(*((__int64 *)&v6 + 1), v2, *(unsigned int *)(a1 + 8));
      RtlClearBitsEx(v6, v2, *(unsigned int *)(a1 + 8));
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140C4CB48, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)&qword_140C4CB48);
      KeAbPostRelease((ULONG_PTR)&qword_140C4CB48);
      LOBYTE(v1) = KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    }
  }
  return (char)v1;
}
