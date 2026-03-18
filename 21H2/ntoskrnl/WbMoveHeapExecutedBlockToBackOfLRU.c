/*
 * XREFs of WbMoveHeapExecutedBlockToBackOfLRU @ 0x1407E3770
 * Callers:
 *     WbGetHeapExecutedBlock @ 0x1407E3260 (WbGetHeapExecutedBlock.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029F120 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 */

char __fastcall WbMoveHeapExecutedBlockToBackOfLRU(__int64 a1, __int64 *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rax
  __int64 v6; // rsi
  __int64 *v7; // rax
  __int64 **v8; // rcx
  __int64 **v9; // rcx
  char v10; // al
  struct _KTHREAD *v11; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v5 = KeAbPreAcquire(a1 + 80, 0LL);
  v6 = v5;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 80), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 80), v5, a1 + 80);
  if ( v6 )
    *(_BYTE *)(v6 + 18) = 1;
  if ( (a2[2] & 1) != 0 )
  {
    v7 = (__int64 *)*a2;
    if ( *(__int64 **)(*a2 + 8) != a2
      || (v8 = (__int64 **)a2[1], *v8 != a2)
      || (*v8 = v7, v7[1] = (__int64)v8, v9 = *(__int64 ***)(a1 + 72), *v9 != (__int64 *)(a1 + 64)) )
    {
      __fastfail(3u);
    }
    *a2 = a1 + 64;
    a2[1] = (__int64)v9;
    *v9 = a2;
    *(_QWORD *)(a1 + 72) = a2;
  }
  v10 = _InterlockedExchangeAdd64((volatile signed __int64 *)(a1 + 80), 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v10 & 2) != 0 && (v10 & 4) == 0 )
    ExfTryToWakePushLock(a1 + 80);
  KeAbPostRelease(a1 + 80);
  v11 = KeGetCurrentThread();
  if ( v11->SpecialApcDisable++ == -1 )
  {
    v11 = (struct _KTHREAD *)((char *)v11 + 152);
    if ( *(struct _KTHREAD **)&v11->Header.Lock != v11 )
      LOBYTE(v11) = KiCheckForKernelApcDelivery();
  }
  return (char)v11;
}
