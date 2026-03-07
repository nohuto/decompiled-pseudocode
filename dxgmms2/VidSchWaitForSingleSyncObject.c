__int64 __fastcall VidSchWaitForSingleSyncObject(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  __int64 v6; // r14
  int v7; // eax
  VIDMM_PAGING_QUEUE *v8; // rcx
  unsigned __int64 CurrentPagingFenceId; // rax
  unsigned __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 QueuePacket; // rax
  __int64 v14; // rbx
  struct _KTHREAD *CurrentThread; // rax
  int v16; // eax
  int v17; // ebp
  __int64 v19; // rax
  __int64 v20; // rcx
  _QWORD *v21; // rbx
  _QWORD *v22; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-38h] BYREF

  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( !a1 || !a2 )
  {
    WdLogSingleEntry1(1LL, -1073741811LL);
    ((void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[86])(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"NULL pointer in pVidSchContext or other required pointer, returning 0x%I64x",
      -1073741811LL,
      0LL,
      0LL,
      0LL,
      0LL);
    return 3221225485LL;
  }
  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 96) + 24LL);
  v7 = *(_DWORD *)(a2 + 48);
  if ( v7 == 5 )
  {
    if ( *(_BYTE *)(a2 + 28) )
      return 3221225760LL;
  }
  else if ( v7 != 4 || *(_BYTE *)(a2 + 28) )
  {
    goto LABEL_10;
  }
  v8 = *(VIDMM_PAGING_QUEUE **)(a2 + 80);
  if ( v8 )
  {
    CurrentPagingFenceId = VIDMM_PAGING_QUEUE::GetCurrentPagingFenceId(v8);
    v10 = CurrentPagingFenceId;
    if ( !(*(_BYTE *)(v11 + 29) ? a3 <= CurrentPagingFenceId : (int)a3 - (int)CurrentPagingFenceId <= 0) )
    {
      if ( KdRefreshDebuggerNotPresent() )
      {
        WdLogSingleEntry3(1LL, a3, *(_QWORD *)(a2 + 80), v10);
        ((void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[86])(
          0LL,
          0x40000LL,
          0xFFFFFFFFLL,
          L"Invalid monitored fence 0x%I64x for paging queue 0x%p. PagingQueueFence=0x%I64x",
          a3,
          *(_QWORD *)(a2 + 80),
          v10,
          0LL,
          0LL);
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
          *(const void **)(a2 + 80),
          v10);
        __debugbreak();
      }
      return -1073741811LL;
    }
  }
LABEL_10:
  QueuePacket = VidSchiAllocateQueuePacket(a1, *(_DWORD *)(a1 + 796) == 0);
  v14 = QueuePacket;
  if ( QueuePacket )
  {
    *(_DWORD *)QueuePacket = 895576406;
    *(_DWORD *)(QueuePacket + 48) = 4;
    *(_QWORD *)(QueuePacket + 56) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(QueuePacket + 52) = 2;
    *(_QWORD *)(QueuePacket + 88) = a1;
    CurrentThread = KeGetCurrentThread();
    *(_DWORD *)(v14 + 272) &= ~1u;
    *(_QWORD *)(v14 + 104) = CurrentThread;
    *(_QWORD *)(v14 + 72) = 0LL;
    v16 = *(_DWORD *)(a2 + 48);
    if ( v16 == 2 )
    {
      *(_QWORD *)(v14 + 304) = a3;
    }
    else if ( (unsigned int)(v16 - 4) <= 1 )
    {
      *(_QWORD *)(v14 + 304) = a3;
      WdLogSingleEntry3(4LL, a2, a3, a1);
    }
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v6 + 1728), &LockHandle);
    *(_QWORD *)(v14 + 280) = a2;
    v17 = VidSchiAcquireSyncObject(a1, a2, v14);
    if ( v17 < 0 || (*(_DWORD *)(v14 + 272) & 1) != 0 )
    {
      VidSchiFreeQueuePacket(a1);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return (unsigned int)v17;
    }
    else
    {
      if ( *(_BYTE *)(a2 + 26) )
      {
        v19 = MEMORY[0xFFFFF78000000320];
        v20 = *(_QWORD *)(v14 + 88);
        *(_DWORD *)(v14 + 64) |= 0x10u;
        *(_QWORD *)(v14 + 56) = v19;
        *(_DWORD *)(v14 + 52) = 17;
        v21 = (_QWORD *)(v14 + 32);
        v22 = *(_QWORD **)(v20 + 704);
        if ( *v22 != v20 + 696 )
          __fastfail(3u);
        *v21 = v20 + 696;
        v21[1] = v22;
        *v22 = v21;
        *(_QWORD *)(v20 + 704) = v21;
        ++*(_DWORD *)(v20 + 804);
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
      else
      {
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        VidSchiSubmitCommandPacketToQueue(v14);
      }
      return 0LL;
    }
  }
  else
  {
    WdLogSingleEntry2(1LL, -1073741801LL, 10746LL);
    ((void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[86])(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to allocate queue packet, returning 0x%I64x",
      -1073741801LL,
      10746LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
}
