/*
 * XREFs of KiActivateWaiterQueueWithNoLocks @ 0x1403548F8
 * Callers:
 *     KiCommitThreadWait @ 0x140261290 (KiCommitThreadWait.c)
 *     KiSwitchPriQueue @ 0x1402FBDD4 (KiSwitchPriQueue.c)
 *     KeTerminateThread @ 0x140353168 (KeTerminateThread.c)
 *     KiSwitchQueue @ 0x1403555E0 (KiSwitchQueue.c)
 *     KiPriQueueThreadPriorityChanged @ 0x1403578B0 (KiPriQueueThreadPriorityChanged.c)
 * Callees:
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140225810 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14027F8D0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     KiAcquireKobjectLockSafe @ 0x140293E00 (KiAcquireKobjectLockSafe.c)
 *     KeYieldProcessorEx @ 0x1403512B0 (KeYieldProcessorEx.c)
 *     KiActivateWaiterKQueue @ 0x140354A10 (KiActivateWaiterKQueue.c)
 *     KiActivateWaiterPriQueue @ 0x140354BF4 (KiActivateWaiterPriQueue.c)
 */

void __fastcall KiActivateWaiterQueueWithNoLocks(__int64 a1, unsigned __int64 a2, _QWORD *a3)
{
  volatile LONG *v5; // rbp
  volatile signed __int32 *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rcx
  int v12; // [rsp+30h] [rbp+8h] BYREF

  v5 = &KiObjectRundownLocks[16 * ((a2 >> 4) & 0x3F)];
  ExAcquireSpinLockSharedAtDpcLevel(v5);
  v6 = *(volatile signed __int32 **)(a1 + 232);
  if ( v6 )
  {
    KiAcquireKobjectLockSafe(*(volatile signed __int32 **)(a1 + 232));
    if ( !*(_QWORD *)(a1 + 232) )
    {
      _InterlockedAnd(v6, 0xFFFFFF7F);
      v6 = 0LL;
    }
  }
  ExReleaseSpinLockSharedFromDpcLevel(v5);
  if ( v6 )
  {
    if ( a3 )
    {
      if ( (*(_BYTE *)v6 & 0x7F) == 0x15 )
      {
        v12 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 64), 0LL) )
        {
          do
            KeYieldProcessorEx(&v12);
          while ( *(_QWORD *)(a1 + 64) );
        }
        v11 = (unsigned __int8)*(_DWORD *)(a1 + 540);
        *(_DWORD *)(a1 + 540) = (unsigned __int8)*(_DWORD *)(a1 + 540) | 0x100;
        _InterlockedDecrement(&v6[v11 + 134]);
        *(_QWORD *)(a1 + 64) = 0LL;
      }
      else
      {
        _InterlockedDecrement(v6 + 10);
      }
      v9 = *a3;
      if ( *(_QWORD **)(*a3 + 8LL) != a3 || (v10 = (_QWORD *)a3[1], (_QWORD *)*v10 != a3) )
        __fastfail(3u);
      *v10 = v9;
      *(_QWORD *)(v9 + 8) = v10;
      *(_QWORD *)(a1 + 232) = 0LL;
    }
    if ( (*(_BYTE *)v6 & 0x7F) == 0x15 )
      KiActivateWaiterPriQueue(v6, v7, v8);
    else
      KiActivateWaiterKQueue(v6);
  }
}
