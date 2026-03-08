/*
 * XREFs of WbAllocateUserMemory @ 0x140754868
 * Callers:
 *     sub_140753BB4 @ 0x140753BB4 (sub_140753BB4.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x140238E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140238F40 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402411C0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402413F0 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x1402627F0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140262B70 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402B7850 (KiCheckForKernelApcDelivery.c)
 *     WbAllocateMemoryBlock @ 0x140753534 (WbAllocateMemoryBlock.c)
 *     sub_140754B04 @ 0x140754B04 (sub_140754B04.c)
 *     WbFreeMemoryBlock @ 0x140754DEC (WbFreeMemoryBlock.c)
 *     sub_140754FC0 @ 0x140754FC0 (sub_140754FC0.c)
 */

__int64 __fastcall WbAllocateUserMemory(__int64 a1, unsigned int a2, _QWORD *a3, _QWORD *a4)
{
  PVOID *v6; // r14
  PVOID *v7; // rdi
  int MemoryBlock; // esi
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v10; // rbx
  __int64 v11; // rdi
  int v12; // edi
  struct _KTHREAD *v13; // rax
  bool v14; // zf
  __int64 v15; // rcx
  struct _KTHREAD *v17; // rax
  __int64 v18; // rax
  int v19; // r8d
  __int64 v20; // rdi
  char v21; // r15
  struct _KTHREAD *v22; // rax
  PVOID *BaseAddress; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v24[3]; // [rsp+38h] [rbp-18h] BYREF

  BaseAddress = 0LL;
  v24[0] = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  MemoryBlock = 0;
  if ( a2 > 0x10000 )
  {
    MemoryBlock = -1073741811;
    goto LABEL_20;
  }
  CurrentThread = KeGetCurrentThread();
  v10 = (signed __int64 *)(a1 + 224);
  --CurrentThread->SpecialApcDisable;
  v11 = KeAbPreAcquire(a1 + 224, 0LL);
  if ( _InterlockedCompareExchange64(v10, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v10, 0, v11, (__int64)v10);
  if ( v11 )
    *(_BYTE *)(v11 + 18) = 1;
  v12 = 0;
  if ( *(_DWORD *)(a1 + 188) )
  {
    while ( 1 )
    {
      v6 = *(PVOID **)((unsigned int)(*(_DWORD *)(a1 + 184) * v12) + *(_QWORD *)(a1 + 200));
      MemoryBlock = sub_140754B04(v6, a2, v24);
      if ( MemoryBlock < 0 )
        goto LABEL_35;
      if ( !v24[0] && (unsigned int)++v12 < *(_DWORD *)(a1 + 188) )
        continue;
      break;
    }
  }
  if ( _InterlockedCompareExchange64(v10, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v10);
  KeAbPostRelease((ULONG_PTR)v10);
  v13 = KeGetCurrentThread();
  v14 = v13->SpecialApcDisable++ == -1;
  if ( v14 && ($C71981A45BEB2B45F82C232A7085991E *)v13->ApcState.ApcListHead[0].Flink != &v13->152 )
    KiCheckForKernelApcDelivery();
  v15 = v24[0];
  if ( v24[0] )
  {
    v7 = BaseAddress;
  }
  else
  {
    MemoryBlock = WbAllocateMemoryBlock(0LL, (__int64 **)&BaseAddress);
    if ( MemoryBlock < 0 )
      goto LABEL_35;
    v7 = BaseAddress;
    MemoryBlock = sub_140754B04(BaseAddress, a2, v24);
    if ( MemoryBlock < 0 )
      goto LABEL_20;
    v17 = KeGetCurrentThread();
    --v17->SpecialApcDisable;
    v18 = KeAbPreAcquire((__int64)v10, 0LL);
    v20 = v18;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v10, v18, (__int64)v10);
    if ( v20 )
      *(_BYTE *)(v20 + 18) = 1;
    MemoryBlock = sub_140754FC0((int)a1 + 184, (_DWORD)BaseAddress, v19, (unsigned int)BaseAddress[4], 8, -1);
    v21 = _InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v21 & 2) != 0 && (v21 & 4) == 0 )
      ExfTryToWakePushLock(v10);
    KeAbPostRelease((ULONG_PTR)v10);
    v22 = KeGetCurrentThread();
    v14 = v22->SpecialApcDisable++ == -1;
    if ( v14 && ($C71981A45BEB2B45F82C232A7085991E *)v22->ApcState.ApcListHead[0].Flink != &v22->152 )
      KiCheckForKernelApcDelivery();
    if ( MemoryBlock < 0 )
    {
LABEL_35:
      v7 = BaseAddress;
      goto LABEL_20;
    }
    v6 = BaseAddress;
    v7 = 0LL;
    v15 = v24[0];
  }
  if ( a3 )
    *a3 = v15;
  if ( a4 )
    *a4 = v15 + (_BYTE *)*v6 - (_BYTE *)v6[4];
LABEL_20:
  WbFreeMemoryBlock(v7);
  return (unsigned int)MemoryBlock;
}
