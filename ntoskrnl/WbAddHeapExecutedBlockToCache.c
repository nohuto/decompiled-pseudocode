/*
 * XREFs of WbAddHeapExecutedBlockToCache @ 0x140754E94
 * Callers:
 *     WbGetHeapExecutedBlock @ 0x1406AFAAC (WbGetHeapExecutedBlock.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     sub_1406AF4BC @ 0x1406AF4BC (sub_1406AF4BC.c)
 *     sub_1406AF984 @ 0x1406AF984 (sub_1406AF984.c)
 *     sub_140754FC0 @ 0x140754FC0 (sub_140754FC0.c)
 *     WbAddHeapExecutedBlockToLRU @ 0x140755130 (WbAddHeapExecutedBlockToLRU.c)
 */

__int64 __fastcall WbAddHeapExecutedBlockToCache(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v4; // rdi
  __int64 v8; // rax
  __int64 v9; // rbx
  int v10; // eax
  int v11; // r8d
  int v12; // ebx
  char v13; // bp
  struct _KTHREAD *v14; // rax
  bool v15; // zf
  int v17; // [rsp+60h] [rbp+8h] BYREF
  __int64 v18; // [rsp+78h] [rbp+20h] BYREF

  CurrentThread = KeGetCurrentThread();
  v4 = (unsigned __int64 *)(a1 + 48);
  v17 = 0;
  v18 = 0LL;
  --CurrentThread->SpecialApcDisable;
  v8 = KeAbPreAcquire(a1 + 48, 0LL);
  v9 = v8;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v8, (__int64)v4);
  if ( v9 )
    *(_BYTE *)(v9 + 18) = 1;
  v10 = sub_1406AF4BC(a1, *(_QWORD *)(a2 + 48), &v18, &v17);
  v12 = v10;
  if ( v10 >= 0 )
  {
    if ( a3 )
      *a3 = v18;
  }
  else if ( v10 == -1073741198 )
  {
    v12 = sub_140754FC0((int)a1 + 8, a2, v11, *(_QWORD *)(a2 + 48), 8, v17);
    if ( v12 >= 0 )
    {
      v12 = sub_1406AF984(a2);
      if ( v12 >= 0 )
      {
        if ( a3 )
          *a3 = 0LL;
        v12 = WbAddHeapExecutedBlockToLRU(a1, a2);
      }
    }
  }
  v13 = _InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v13 & 2) != 0 && (v13 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)v4);
  KeAbPostRelease((ULONG_PTR)v4);
  v14 = KeGetCurrentThread();
  v15 = v14->SpecialApcDisable++ == -1;
  if ( v15 && ($C71981A45BEB2B45F82C232A7085991E *)v14->ApcState.ApcListHead[0].Flink != &v14->152 )
    KiCheckForKernelApcDelivery();
  return (unsigned int)v12;
}
