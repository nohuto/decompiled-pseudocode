/*
 * XREFs of WbMoveHeapExecutedBlockToBackOfLRU @ 0x1406AFCA0
 * Callers:
 *     WbGetHeapExecutedBlock @ 0x1406AFAAC (WbGetHeapExecutedBlock.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 */

char __fastcall WbMoveHeapExecutedBlockToBackOfLRU(__int64 a1, __int64 *a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v3; // rdi
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 *v8; // rax
  __int64 **v9; // rcx
  __int64 **v10; // rcx
  char v11; // si
  struct _KTHREAD *v12; // rax

  CurrentThread = KeGetCurrentThread();
  v3 = (unsigned __int64 *)(a1 + 80);
  --CurrentThread->SpecialApcDisable;
  v6 = KeAbPreAcquire(a1 + 80, 0LL);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, v6, (__int64)v3);
  if ( v7 )
    *(_BYTE *)(v7 + 18) = 1;
  if ( (a2[2] & 1) != 0 )
  {
    v8 = (__int64 *)*a2;
    if ( *(__int64 **)(*a2 + 8) != a2
      || (v9 = (__int64 **)a2[1], *v9 != a2)
      || (*v9 = v8, v8[1] = (__int64)v9, v10 = *(__int64 ***)(a1 + 72), *v10 != (__int64 *)(a1 + 64)) )
    {
      __fastfail(3u);
    }
    *a2 = a1 + 64;
    a2[1] = (__int64)v10;
    *v10 = a2;
    *(_QWORD *)(a1 + 72) = a2;
  }
  v11 = _InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v11 & 2) != 0 && (v11 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)v3);
  KeAbPostRelease((ULONG_PTR)v3);
  v12 = KeGetCurrentThread();
  if ( v12->SpecialApcDisable++ == -1 )
  {
    v12 = (struct _KTHREAD *)((char *)v12 + 152);
    if ( *(struct _KTHREAD **)&v12->Header.Lock != v12 )
      LOBYTE(v12) = KiCheckForKernelApcDelivery();
  }
  return (char)v12;
}
