/*
 * XREFs of WbReleaseLeastRecentlyUsedHeapExecutedBlocks @ 0x140605D88
 * Callers:
 *     WbGetHeapExecutedBlock @ 0x1406427A4 (WbGetHeapExecutedBlock.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD9E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140354F80 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140355AE0 (KiLeaveGuardedRegionUnsafe.c)
 *     sub_140605F04 @ 0x140605F04 (sub_140605F04.c)
 *     sub_14064290C @ 0x14064290C (sub_14064290C.c)
 */

void __fastcall WbReleaseLeastRecentlyUsedHeapExecutedBlocks(unsigned __int64 *a1, int a2)
{
  int v2; // r15d
  unsigned __int64 *v3; // rdi
  _QWORD *v5; // r14
  unsigned __int64 *v6; // rbp
  struct _KTHREAD *CurrentThread; // rax
  _RTL_BALANCED_NODE *v8; // rax
  _RTL_BALANCED_NODE *v9; // rbx
  _RTL_BALANCED_NODE *v10; // rax
  _RTL_BALANCED_NODE *v11; // rbx
  _QWORD *v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rbx
  char v15; // al
  __int64 v16; // rdx
  char v17; // al
  __int64 v18; // [rsp+70h] [rbp+18h] BYREF

  if ( a2 > 0 )
  {
    v2 = a2;
    v3 = a1 + 10;
    v5 = a1 + 8;
    v6 = a1 + 6;
    do
    {
      CurrentThread = KeGetCurrentThread();
      --v2;
      --CurrentThread->SpecialApcDisable;
      v8 = KeAbPreAcquire((ULONG_PTR)v6, 0LL, 0);
      v9 = v8;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
        ExfAcquirePushLockExclusiveEx(v6, v8, (ULONG_PTR)v6);
      if ( v9 )
        BYTE2(v9[1].Left) |= 1u;
      v10 = KeAbPreAcquire((ULONG_PTR)v3, 0LL, 0);
      v11 = v10;
      if ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
        ExfAcquirePushLockExclusiveEx(v3, v10, (ULONG_PTR)v3);
      if ( v11 )
        BYTE2(v11[1].Left) |= 1u;
      v12 = (_QWORD *)*v5;
      if ( (_QWORD *)*v5 == v5 )
      {
        v12 = 0LL;
      }
      else
      {
        if ( (_QWORD *)v12[1] != v5 || (v13 = *v12, *(_QWORD **)(*v12 + 8LL) != v12) )
          __fastfail(3u);
        *v5 = v13;
        *(_QWORD *)(v13 + 8) = v5;
      }
      v14 = 0LL;
      if ( v12 )
      {
        *((_DWORD *)v12 + 4) &= ~1u;
        v14 = v12;
      }
      v15 = _InterlockedExchangeAdd64((volatile signed __int64 *)v3, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v15 & 2) != 0 && (v15 & 4) == 0 )
        ExfTryToWakePushLock(v3);
      KeAbPostRelease((ULONG_PTR)v3);
      if ( v14 )
      {
        v16 = v14[6];
        v18 = 0LL;
        if ( (int)sub_140605F04((int)a1 + 8, v16, 8, -1, (__int64)&v18) >= 0 )
          sub_14064290C(a1, v18);
      }
      v17 = _InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL);
      if ( (v17 & 2) != 0 && (v17 & 4) == 0 )
        ExfTryToWakePushLock(v6);
      KeAbPostRelease((ULONG_PTR)v6);
      KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
      if ( !v14 )
        break;
      sub_14064290C(a1, v14);
    }
    while ( v2 > 0 );
  }
}
