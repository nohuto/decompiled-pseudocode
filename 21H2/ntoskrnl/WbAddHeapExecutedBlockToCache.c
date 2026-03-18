/*
 * XREFs of WbAddHeapExecutedBlockToCache @ 0x1407E1DC8
 * Callers:
 *     WbGetHeapExecutedBlock @ 0x1407E3260 (WbGetHeapExecutedBlock.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029F120 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     WbAddHeapExecutedBlockToLRU @ 0x1407E1EF8 (WbAddHeapExecutedBlockToLRU.c)
 *     WbFindHeapExecutedBlock @ 0x1407E1FE0 (WbFindHeapExecutedBlock.c)
 *     sub_1407E3F10 @ 0x1407E3F10 (sub_1407E3F10.c)
 *     sub_1407E4118 @ 0x1407E4118 (sub_1407E4118.c)
 */

__int64 __fastcall WbAddHeapExecutedBlockToCache(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // rdi
  int HeapExecutedBlock; // eax
  int v11; // r8d
  int v12; // edi
  struct _KTHREAD *v13; // rax
  bool v14; // zf
  int v16; // [rsp+60h] [rbp+8h] BYREF
  __int64 v17; // [rsp+78h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v16 = 0;
  v17 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v7 = (unsigned __int64 *)(a1 + 48);
  v8 = KeAbPreAcquire(a1 + 48, 0LL);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
    ExfAcquirePushLockExclusiveEx(v7, v8, (__int64)v7);
  if ( v9 )
    *(_BYTE *)(v9 + 18) = 1;
  HeapExecutedBlock = WbFindHeapExecutedBlock(a1, *(_QWORD *)(a2 + 48), &v17, &v16);
  v12 = HeapExecutedBlock;
  if ( HeapExecutedBlock >= 0 )
  {
    if ( a3 )
      *a3 = v17;
  }
  else if ( HeapExecutedBlock == -1073741198 )
  {
    v12 = sub_1407E4118((int)a1 + 8, a2, v11, *(_QWORD *)(a2 + 48), 8, v16);
    if ( v12 >= 0 )
    {
      v12 = sub_1407E3F10(a2);
      if ( v12 >= 0 )
      {
        if ( a3 )
          *a3 = 0LL;
        v12 = WbAddHeapExecutedBlockToLRU(a1, a2);
      }
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(v7);
  KeAbPostRelease((ULONG_PTR)v7);
  v13 = KeGetCurrentThread();
  v14 = v13->SpecialApcDisable++ == -1;
  if ( v14 && ($CEA84C04E3712D858E5667A507841A2A *)v13->ApcState.ApcListHead[0].Flink != &v13->152 )
    KiCheckForKernelApcDelivery();
  return (unsigned int)v12;
}
