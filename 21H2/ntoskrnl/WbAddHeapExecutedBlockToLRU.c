/*
 * XREFs of WbAddHeapExecutedBlockToLRU @ 0x1407E1EF8
 * Callers:
 *     WbAddHeapExecutedBlockToCache @ 0x1407E1DC8 (WbAddHeapExecutedBlockToCache.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029F120 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     sub_1407E3F10 @ 0x1407E3F10 (sub_1407E3F10.c)
 */

__int64 __fastcall WbAddHeapExecutedBlockToLRU(__int64 a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rsi
  _QWORD *v8; // rcx
  char v9; // bp
  struct _KTHREAD *v10; // rax
  bool v11; // zf

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v5 = (unsigned __int64 *)(a1 + 80);
  v6 = KeAbPreAcquire(a1 + 80, 0LL);
  v7 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx(v5, v6, (__int64)v5);
  if ( v7 )
    *(_BYTE *)(v7 + 18) = 1;
  v8 = *(_QWORD **)(a1 + 72);
  if ( *v8 != a1 + 64 )
    __fastfail(3u);
  *(_QWORD *)a2 = a1 + 64;
  *(_QWORD *)(a2 + 8) = v8;
  *v8 = a2;
  *(_QWORD *)(a1 + 72) = a2;
  *(_DWORD *)(a2 + 16) |= 1u;
  v9 = _InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v9 & 2) != 0 && (v9 & 4) == 0 )
    ExfTryToWakePushLock(v5);
  KeAbPostRelease((ULONG_PTR)v5);
  v10 = KeGetCurrentThread();
  v11 = v10->SpecialApcDisable++ == -1;
  if ( v11 && ($CEA84C04E3712D858E5667A507841A2A *)v10->ApcState.ApcListHead[0].Flink != &v10->152 )
    KiCheckForKernelApcDelivery();
  return sub_1407E3F10(a2);
}
