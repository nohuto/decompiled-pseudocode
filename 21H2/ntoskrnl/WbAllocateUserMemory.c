/*
 * XREFs of WbAllocateUserMemory @ 0x1407E43F0
 * Callers:
 *     sub_1407E2434 @ 0x1407E2434 (sub_1407E2434.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029F120 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x14029F350 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     WbAllocateMemoryBlock @ 0x1406E0214 (WbAllocateMemoryBlock.c)
 *     sub_1407E4118 @ 0x1407E4118 (sub_1407E4118.c)
 *     WbFreeMemoryBlock @ 0x1407E4374 (WbFreeMemoryBlock.c)
 *     sub_1407E4684 @ 0x1407E4684 (sub_1407E4684.c)
 */

__int64 __fastcall WbAllocateUserMemory(__int64 a1, unsigned int a2, _QWORD *a3, _QWORD *a4)
{
  PVOID *v6; // r14
  PVOID *v7; // rdi
  int v8; // esi
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 *v10; // rbx
  __int64 v11; // rdi
  int v12; // edi
  struct _KTHREAD *v13; // rax
  bool v14; // zf
  __int64 v15; // rcx
  struct _KTHREAD *v17; // rax
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // rdi
  char v21; // r15
  struct _KTHREAD *v22; // rax
  PVOID *BaseAddress; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v24[3]; // [rsp+38h] [rbp-18h] BYREF

  BaseAddress = 0LL;
  v24[0] = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0;
  if ( a2 > 0x10000 )
  {
    v8 = -1073741811;
    goto LABEL_20;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v10 = (signed __int64 *)(a1 + 224);
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
      v6 = *(PVOID **)((unsigned int)(v12 * *(_DWORD *)(a1 + 184)) + *(_QWORD *)(a1 + 200));
      v8 = sub_1407E4684(v6, a2, v24);
      if ( v8 < 0 )
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
  if ( v14 && ($CEA84C04E3712D858E5667A507841A2A *)v13->ApcState.ApcListHead[0].Flink != &v13->152 )
    KiCheckForKernelApcDelivery();
  v15 = v24[0];
  if ( v24[0] )
  {
    v7 = BaseAddress;
  }
  else
  {
    v8 = WbAllocateMemoryBlock(0LL, &BaseAddress);
    if ( v8 < 0 )
      goto LABEL_35;
    v7 = BaseAddress;
    v8 = sub_1407E4684(BaseAddress, a2, v24);
    if ( v8 < 0 )
      goto LABEL_20;
    v17 = KeGetCurrentThread();
    --v17->SpecialApcDisable;
    v18 = KeAbPreAcquire((__int64)v10, 0LL);
    v20 = v18;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)v10, v18, (__int64)v10);
    if ( v20 )
      *(_BYTE *)(v20 + 18) = 1;
    v8 = sub_1407E4118(a1 + 184, (__int64)BaseAddress, v19, (__int64)BaseAddress[4], 8u, -1);
    v21 = _InterlockedExchangeAdd64(v10, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v21 & 2) != 0 && (v21 & 4) == 0 )
      ExfTryToWakePushLock(v10);
    KeAbPostRelease((ULONG_PTR)v10);
    v22 = KeGetCurrentThread();
    v14 = v22->SpecialApcDisable++ == -1;
    if ( v14 && ($CEA84C04E3712D858E5667A507841A2A *)v22->ApcState.ApcListHead[0].Flink != &v22->152 )
      KiCheckForKernelApcDelivery();
    if ( v8 < 0 )
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
  return (unsigned int)v8;
}
