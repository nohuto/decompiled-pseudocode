/*
 * XREFs of WbGetHeapExecutedBlock @ 0x1406AFAAC
 * Callers:
 *     WbHeapExecuteCall @ 0x1406AF56C (WbHeapExecuteCall.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402413F0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     sub_1406AF4BC @ 0x1406AF4BC (sub_1406AF4BC.c)
 *     sub_1406AFC38 @ 0x1406AFC38 (sub_1406AFC38.c)
 *     WbMoveHeapExecutedBlockToBackOfLRU @ 0x1406AFCA0 (WbMoveHeapExecutedBlockToBackOfLRU.c)
 *     sub_140753BB4 @ 0x140753BB4 (sub_140753BB4.c)
 *     WbAddHeapExecutedBlockToCache @ 0x140754E94 (WbAddHeapExecutedBlockToCache.c)
 *     WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x140770D60 (WbReleaseLeastRecentlyUsedHeapExecutedBlocks.c)
 */

__int64 __fastcall WbGetHeapExecutedBlock(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rdx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rdi
  int v9; // edi
  struct _KTHREAD *v10; // rax
  bool v11; // zf
  __int64 v12; // rbx
  int v14; // eax
  __int64 v15; // r14
  __int64 v16; // [rsp+70h] [rbp+40h] BYREF
  __int64 v17; // [rsp+88h] [rbp+58h] BYREF

  v5 = (unsigned int)(*(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 56));
  v16 = 0LL;
  v17 = 0LL;
  WbReleaseLeastRecentlyUsedHeapExecutedBlocks(a1, v5);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v8 = KeAbPreAcquire(a1 + 48, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 48), 17LL, 0LL) )
    ExfAcquirePushLockSharedEx((signed __int64 *)(a1 + 48), 0, v8, a1 + 48);
  if ( v8 )
    *(_BYTE *)(v8 + 18) = 1;
  v9 = sub_1406AF4BC(a1, *(_QWORD *)(a2 + 272), &v16, 0LL);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)(a1 + 48), 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)(a1 + 48));
  KeAbPostRelease(a1 + 48);
  v10 = KeGetCurrentThread();
  v11 = v10->SpecialApcDisable++ == -1;
  if ( v11 && ($C71981A45BEB2B45F82C232A7085991E *)v10->ApcState.ApcListHead[0].Flink != &v10->152 )
    KiCheckForKernelApcDelivery();
  if ( v9 == -1073741198 )
  {
    v14 = sub_140753BB4(a1, a2, &v16);
    v12 = v16;
    v9 = v14;
    if ( v14 < 0 )
      goto LABEL_14;
    v9 = WbAddHeapExecutedBlockToCache(a1, v16, &v17);
    if ( v9 < 0 )
      goto LABEL_14;
    v15 = v17;
    if ( v17 )
    {
      sub_1406AFC38(a1, v12);
      v12 = v15;
      v17 = 0LL;
    }
  }
  else
  {
    v12 = v16;
    if ( v9 < 0 )
      goto LABEL_14;
  }
  WbMoveHeapExecutedBlockToBackOfLRU(a1, v12);
  if ( a3 )
  {
    *a3 = v12;
    v12 = 0LL;
  }
LABEL_14:
  sub_1406AFC38(a1, v12);
  sub_1406AFC38(a1, v17);
  return (unsigned int)v9;
}
