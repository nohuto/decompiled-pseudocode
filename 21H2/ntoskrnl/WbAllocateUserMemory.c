/*
 * XREFs of WbAllocateUserMemory @ 0x1405E6754
 * Callers:
 *     sub_1405E5EA0 @ 0x1405E5EA0 (sub_1405E5EA0.c)
 * Callees:
 *     ExfReleasePushLockShared @ 0x1402FC1C0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD9E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1402FDC10 (ExfAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140354F80 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     WbAllocateMemoryBlock @ 0x1405E5A24 (WbAllocateMemoryBlock.c)
 *     sub_1405E69A0 @ 0x1405E69A0 (sub_1405E69A0.c)
 *     WbFreeMemoryBlock @ 0x1405E70E8 (WbFreeMemoryBlock.c)
 *     sub_1405E7374 @ 0x1405E7374 (sub_1405E7374.c)
 */

__int64 __fastcall WbAllocateUserMemory(__int64 a1, unsigned int a2, _QWORD *a3, _QWORD *a4)
{
  PVOID *v6; // r14
  PVOID *v7; // rdi
  int v8; // esi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v10; // rbx
  PRTL_BALANCED_NODE v11; // rdi
  int v12; // edi
  __int64 v13; // rcx
  struct _KTHREAD *v15; // rax
  _RTL_BALANCED_NODE *v16; // rax
  int v17; // r8d
  _RTL_BALANCED_NODE *v18; // rdi
  char v19; // r15
  PVOID *BaseAddress; // [rsp+30h] [rbp-20h] BYREF
  _QWORD v21[3]; // [rsp+38h] [rbp-18h] BYREF

  BaseAddress = 0LL;
  v21[0] = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0;
  if ( a2 > 0x10000 )
  {
    v8 = -1073741811;
    goto LABEL_17;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  v10 = (unsigned __int64 *)(a1 + 224);
  v11 = KeAbPreAcquire(a1 + 224, 0LL, 0);
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v10, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v10, v11, (ULONG_PTR)v10);
  if ( v11 )
    BYTE2(v11[1].Left) |= 1u;
  v12 = 0;
  if ( *(_DWORD *)(a1 + 188) )
  {
    while ( 1 )
    {
      v6 = *(PVOID **)((unsigned int)(v12 * *(_DWORD *)(a1 + 184)) + *(_QWORD *)(a1 + 200));
      v8 = sub_1405E69A0(v6, a2, v21);
      if ( v8 < 0 )
        goto LABEL_29;
      if ( !v21[0] && (unsigned int)++v12 < *(_DWORD *)(a1 + 188) )
        continue;
      break;
    }
  }
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)v10, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared((signed __int64 *)v10);
  KeAbPostRelease((ULONG_PTR)v10);
  KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
  v13 = v21[0];
  if ( v21[0] )
  {
    v7 = BaseAddress;
  }
  else
  {
    v8 = WbAllocateMemoryBlock(0LL, &BaseAddress);
    if ( v8 < 0 )
      goto LABEL_29;
    v7 = BaseAddress;
    v8 = sub_1405E69A0(BaseAddress, a2, v21);
    if ( v8 < 0 )
      goto LABEL_17;
    v15 = KeGetCurrentThread();
    --v15->SpecialApcDisable;
    v16 = KeAbPreAcquire((ULONG_PTR)v10, 0LL, 0);
    v18 = v16;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v10, 0LL) )
      ExfAcquirePushLockExclusiveEx(v10, v16, (ULONG_PTR)v10);
    if ( v18 )
      BYTE2(v18[1].Left) |= 1u;
    v8 = sub_1405E7374((int)a1 + 184, (_DWORD)BaseAddress, v17, (unsigned int)BaseAddress[4], 8, -1);
    v19 = _InterlockedExchangeAdd64((volatile signed __int64 *)v10, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v19 & 2) != 0 && (v19 & 4) == 0 )
      ExfTryToWakePushLock(v10);
    KeAbPostRelease((ULONG_PTR)v10);
    KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
    if ( v8 < 0 )
    {
LABEL_29:
      v7 = BaseAddress;
      goto LABEL_17;
    }
    v6 = BaseAddress;
    v7 = 0LL;
    v13 = v21[0];
  }
  if ( a3 )
    *a3 = v13;
  if ( a4 )
    *a4 = v13 + (_BYTE *)*v6 - (_BYTE *)v6[4];
LABEL_17:
  WbFreeMemoryBlock(v7);
  return (unsigned int)v8;
}
