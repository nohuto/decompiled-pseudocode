/*
 * XREFs of VidSchWaitForSingleSyncObject @ 0x1C0006560
 * Callers:
 *     ?VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_COMPANION_CONTEXT@@IPEAPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDSCH_SYNC_OBJECT@@PEAPEAU_KSEMAPHORE@@@Z @ 0x1C00B5704 (-VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_.c)
 *     VidSchWaitForPagingFence @ 0x1C00D1BF0 (VidSchWaitForPagingFence.c)
 * Callees:
 *     VidSchiAcquireSyncObject @ 0x1C0006930 (VidSchiAcquireSyncObject.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C0007740 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchiInterlockedInsertTailList @ 0x1C0007B20 (VidSchiInterlockedInsertTailList.c)
 *     VidSchiAllocateQueuePacket @ 0x1C007E910 (VidSchiAllocateQueuePacket.c)
 *     ?GetCurrentPagingFenceId@VIDMM_PAGING_QUEUE@@QEAA_KXZ @ 0x1C0087F7C (-GetCurrentPagingFenceId@VIDMM_PAGING_QUEUE@@QEAA_KXZ.c)
 */

__int64 __fastcall VidSchWaitForSingleSyncObject(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v4; // rsi
  __int64 v6; // r14
  int v7; // eax
  __int64 QueuePacket; // rax
  __int64 v9; // rbx
  struct _KTHREAD *CurrentThread; // rax
  int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  int v14; // r15d
  KSPIN_LOCK *v15; // r12
  __int64 v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rax
  KSPIN_LOCK *v19; // rcx
  __int64 *v20; // rax
  _QWORD **v21; // rbx
  _QWORD *v22; // rsi
  _QWORD *v23; // rax
  VIDMM_PAGING_QUEUE *v25; // rcx
  unsigned __int64 CurrentPagingFenceId; // rax
  __int64 v27; // rdx
  unsigned __int64 v28; // rbx
  _QWORD *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rcx
  _QWORD *v32; // rbx
  _QWORD *v33; // rdx
  _QWORD *v34; // rax
  __int64 v35; // rax
  _QWORD *v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-88h] BYREF
  struct _KLOCK_QUEUE_HANDLE v40; // [rsp+48h] [rbp-70h] BYREF
  struct _KLOCK_QUEUE_HANDLE v41; // [rsp+60h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE v42; // [rsp+78h] [rbp-40h] BYREF

  v4 = a2;
  if ( !a1 || !a2 )
  {
    v38 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v38 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v38);
    return 3221225485LL;
  }
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL);
  v7 = *(_DWORD *)(a2 + 44);
  if ( v7 == 5 )
  {
    if ( *(_BYTE *)(a2 + 28) )
      return 3221225760LL;
  }
  else if ( v7 != 4 || *(_BYTE *)(a2 + 28) )
  {
    goto LABEL_5;
  }
  v25 = *(VIDMM_PAGING_QUEUE **)(a2 + 80);
  if ( v25 )
  {
    CurrentPagingFenceId = VIDMM_PAGING_QUEUE::GetCurrentPagingFenceId(v25);
    v28 = CurrentPagingFenceId;
    if ( *(_BYTE *)(v27 + 29) )
    {
      if ( a3 > CurrentPagingFenceId )
        goto LABEL_40;
    }
    else if ( (int)a3 - (int)CurrentPagingFenceId > 0 )
    {
LABEL_40:
      if ( KdRefreshDebuggerNotPresent() )
      {
        v34 = (_QWORD *)WdLogNewEntry5_WdAssertion();
        v34[3] = a3;
        v34[4] = *(_QWORD *)(v4 + 80);
        v34[5] = v28;
        WdLogEvent5_WdAssertion(v34);
      }
      else
      {
        DbgPrintEx(
          0x65u,
          0,
          "\n"
          "A request was made to wait on monitored fence 0x%I64x on paging queue 0x%p,\n"
          "but the paging queue has not generated that fence. This wait breaks the ordered wait\n"
          "contract imposed on paging queues, and cannot be placed in the queue. The paging\n"
          "queue's most recently generated fence value is 0x%I64x\n",
          a3,
          *(const void **)(v4 + 80),
          v28);
        __debugbreak();
      }
      return 3221225485LL;
    }
  }
LABEL_5:
  QueuePacket = VidSchiAllocateQueuePacket(a1, *(_DWORD *)(a1 + 796) == 0);
  v9 = QueuePacket;
  if ( !QueuePacket )
  {
    v35 = WdLogNewEntry5_WdAssertion();
    *(_QWORD *)(v35 + 24) = -1073741801LL;
    *(_QWORD *)(v35 + 32) = 10482LL;
    WdLogEvent5_WdAssertion(v35);
    return 3221225495LL;
  }
  *(_DWORD *)QueuePacket = 895576406;
  *(_DWORD *)(QueuePacket + 48) = 4;
  *(_QWORD *)(QueuePacket + 56) = MEMORY[0xFFFFF78000000320];
  *(_DWORD *)(QueuePacket + 52) = 2;
  *(_QWORD *)(QueuePacket + 88) = a1;
  CurrentThread = KeGetCurrentThread();
  *(_DWORD *)(v9 + 272) &= ~1u;
  *(_QWORD *)(v9 + 104) = CurrentThread;
  *(_QWORD *)(v9 + 72) = 0LL;
  v11 = *(_DWORD *)(v4 + 44);
  if ( v11 == 2 )
  {
    *(_QWORD *)(v9 + 304) = a3;
  }
  else if ( (unsigned int)(v11 - 4) <= 1 )
  {
    *(_QWORD *)(v9 + 304) = a3;
    v29 = (_QWORD *)WdLogNewEntry5_WdEvent();
    v29[3] = v4;
    v29[4] = a3;
    v29[5] = a1;
    WdLogEvent5_WdEvent(v29);
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 1712), &LockHandle);
  *(_QWORD *)(v9 + 280) = v4;
  v14 = VidSchiAcquireSyncObject(a1, v4, v9);
  if ( v14 >= 0 )
  {
    v13 = *(unsigned int *)(v9 + 272);
    if ( (v13 & 1) == 0 )
    {
      if ( !*(_BYTE *)(v4 + 26) )
      {
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        VidSchiSubmitCommandPacketToQueue(v9);
        return 0LL;
      }
      v30 = MEMORY[0xFFFFF78000000320];
      v31 = *(_QWORD *)(v9 + 88);
      *(_DWORD *)(v9 + 64) |= 0x10u;
      *(_QWORD *)(v9 + 56) = v30;
      *(_DWORD *)(v9 + 52) = 17;
      v32 = (_QWORD *)(v9 + 32);
      v33 = *(_QWORD **)(v31 + 704);
      if ( *v33 == v31 + 696 )
      {
        *v32 = v31 + 696;
        v32[1] = v33;
        *v33 = v32;
        *(_QWORD *)(v31 + 704) = v32;
        ++*(_DWORD *)(v31 + 804);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        return 0LL;
      }
      goto LABEL_54;
    }
  }
  v15 = *(KSPIN_LOCK **)(*(_QWORD *)(a1 + 96) + 24LL);
  if ( *(_DWORD *)(v9 + 48) || !*(_QWORD *)(v9 + 608) && !*(_QWORD *)(v9 + 264) )
  {
    v16 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v16 + 24) = v9;
    *(_QWORD *)(v16 + 32) = a1;
    WdLogEvent5_WdEvent(v16);
    *(_QWORD *)(v9 + 56) = MEMORY[0xFFFFF78000000320];
    v15 += 215;
    *(_DWORD *)(v9 + 52) = 0;
    v4 = v9 + 8;
    KeAcquireInStackQueuedSpinLock(v15, &v40);
    v17 = *(_QWORD *)(v9 + 8);
    if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) == v4 )
    {
      v18 = *(_QWORD **)(v9 + 16);
      if ( *v18 == v4 )
      {
        *v18 = v17;
        *(_QWORD *)(v17 + 8) = v18;
        if ( a1 != -776 )
          --*(_DWORD *)(a1 + 776);
        KeReleaseInStackQueuedSpinLock(&v40);
        v19 = v15;
        if ( (*(_DWORD *)(v9 + 64) & 0x40) != 0 )
          goto LABEL_49;
        KeAcquireInStackQueuedSpinLock(v15, &v41);
        v20 = *(__int64 **)(a1 + 720);
        if ( *v20 == a1 + 712 )
        {
          *(_QWORD *)v4 = a1 + 712;
          *(_QWORD *)(v9 + 16) = v20;
          *v20 = v4;
          *(_QWORD *)(a1 + 720) = v4;
          if ( a1 != -728 )
            ++*(_DWORD *)(a1 + 728);
          KeReleaseInStackQueuedSpinLock(&v41);
          goto LABEL_21;
        }
      }
    }
LABEL_54:
    __fastfail(3u);
  }
  v36 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v13, v12);
  v36[3] = 281LL;
  v36[4] = 2560LL;
  v36[5] = v9;
  v36[6] = *(_QWORD *)(v9 + 608);
  v36[7] = *(_QWORD *)(v9 + 264);
  WdLogEvent5_WdCriticalError(v36);
  __debugbreak();
LABEL_49:
  VidSchiInterlockedInsertTailList(v19, a1 + 736, v4, a1 + 752);
LABEL_21:
  if ( (*(_DWORD *)(v9 + 64) & 0x40) == 0 )
  {
    v21 = (_QWORD **)(a1 + 712);
    while ( 1 )
    {
      v22 = 0LL;
      KeAcquireInStackQueuedSpinLock(v15, &v42);
      v23 = *v21;
      if ( *v21 != v21 && *(_DWORD *)(a1 + 728) > 0x10u )
      {
        v22 = *v21;
        if ( (_QWORD **)v23[1] != v21 )
          goto LABEL_54;
        v37 = (_QWORD *)*v23;
        if ( (_QWORD *)v37[1] != v22 )
          goto LABEL_54;
        *v21 = v37;
        v37[1] = v21;
        --*(_DWORD *)(a1 + 728);
      }
      KeReleaseInStackQueuedSpinLock(&v42);
      if ( !v22 )
        break;
      ExFreePoolWithTag(v22 - 1, 0);
    }
  }
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  return (unsigned int)v14;
}
