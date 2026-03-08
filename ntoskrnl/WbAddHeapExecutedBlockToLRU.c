/*
 * XREFs of WbAddHeapExecutedBlockToLRU @ 0x140755130
 * Callers:
 *     WbAddHeapExecutedBlockToCache @ 0x140754E94 (WbAddHeapExecutedBlockToCache.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     sub_1406AF984 @ 0x1406AF984 (sub_1406AF984.c)
 */

__int64 __fastcall WbAddHeapExecutedBlockToLRU(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v3; // rbx
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 *v8; // rcx
  char v9; // bp
  struct _KTHREAD *v10; // rax
  bool v11; // zf

  CurrentThread = KeGetCurrentThread();
  v3 = (unsigned __int64 *)(a1 + 80);
  --CurrentThread->SpecialApcDisable;
  v6 = KeAbPreAcquire(a1 + 80, 0LL);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
    ExfAcquirePushLockExclusiveEx(v3, v6, (__int64)v3);
  if ( v7 )
    *(_BYTE *)(v7 + 18) = 1;
  v8 = *(__int64 **)(a1 + 72);
  if ( *v8 != a1 + 64 )
    __fastfail(3u);
  *(_QWORD *)a2 = a1 + 64;
  *(_QWORD *)(a2 + 8) = v8;
  *v8 = a2;
  *(_QWORD *)(a1 + 72) = a2;
  *(_DWORD *)(a2 + 16) |= 1u;
  v9 = _InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v9 & 2) != 0 && (v9 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)v3);
  KeAbPostRelease((ULONG_PTR)v3);
  v10 = KeGetCurrentThread();
  v11 = v10->SpecialApcDisable++ == -1;
  if ( v11 && ($C71981A45BEB2B45F82C232A7085991E *)v10->ApcState.ApcListHead[0].Flink != &v10->152 )
    KiCheckForKernelApcDelivery();
  return sub_1406AF984(a2);
}
