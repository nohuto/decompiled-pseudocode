__int64 __fastcall VidSchSubmitWaitToHwQueue(struct VIDSCH_HW_QUEUE *a1, struct _VIDSCH_SYNC_OBJECT *a2, __int64 a3)
{
  bool v3; // zf
  __int64 v7; // r14
  __int64 HwQueuePacket; // rax
  __int64 v10; // rbx
  struct _KTHREAD *CurrentThread; // rax
  int v12; // esi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-28h] BYREF

  v3 = *((_DWORD *)a2 + 12) == 5;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v7 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL) + 24LL);
  if ( v3 && *((_BYTE *)a2 + 28) )
    return 3221225760LL;
  HwQueuePacket = VidSchiAllocateHwQueuePacket(a1, 0LL);
  v10 = HwQueuePacket;
  if ( HwQueuePacket )
  {
    *(_DWORD *)HwQueuePacket = 895576406;
    *(_DWORD *)(HwQueuePacket + 48) = 4;
    *(_QWORD *)(HwQueuePacket + 56) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(HwQueuePacket + 52) = 2;
    *(_QWORD *)(HwQueuePacket + 96) = a1;
    CurrentThread = KeGetCurrentThread();
    *(_QWORD *)(v10 + 72) = 0LL;
    *(_DWORD *)(v10 + 272) &= ~1u;
    *(_QWORD *)(v10 + 104) = CurrentThread;
    *(_QWORD *)(v10 + 304) = a3;
    WdLogSingleEntry3(4LL, a2, a3, a1);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v7 + 1728), &LockHandle);
    *(_QWORD *)(v10 + 280) = a2;
    v12 = VidSchiAcquireSyncObjectForHwQueue(a2, (struct _VIDSCH_QUEUE_PACKET *)v10);
    if ( v12 < 0 || (*(_DWORD *)(v10 + 272) & 1) != 0 )
    {
      VidSchiFreeQueuePacket(a1, (struct _VIDSCH_QUEUE_PACKET *)v10);
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      return (unsigned int)v12;
    }
    else
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      VidSchiSubmitCommandPacketToHwQueue((struct _VIDSCH_QUEUE_PACKET *)v10);
      return 0LL;
    }
  }
  else
  {
    WdLogSingleEntry2(1LL, -1073741801LL, 4495LL);
    ((void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[86])(
      0LL,
      0x40000LL,
      0xFFFFFFFFLL,
      L"Failed to allocate queue packet, returning 0x%I64x",
      -1073741801LL,
      4495LL,
      0LL,
      0LL,
      0LL);
    return 3221225495LL;
  }
}
