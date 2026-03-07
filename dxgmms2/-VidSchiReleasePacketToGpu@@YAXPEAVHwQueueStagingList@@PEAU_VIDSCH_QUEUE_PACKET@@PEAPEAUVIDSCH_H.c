void __fastcall VidSchiReleasePacketToGpu(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_QUEUE_PACKET *a2,
        struct VIDSCH_HW_QUEUE **a3)
{
  __int64 v3; // rsi
  _QWORD *v4; // r14
  struct _VIDSCH_QUEUE_PACKET *v8; // r8
  int v9; // ecx
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx

  v3 = *((_QWORD *)a2 + 12);
  v4 = (_QWORD *)((char *)a2 + 32);
  v8 = *(struct _VIDSCH_QUEUE_PACKET **)(v3 + 208);
  if ( v8 == (struct _VIDSCH_QUEUE_PACKET *)((char *)a2 + 32) )
  {
    WdLogSingleEntry3(4LL, *((_QWORD *)a2 + 12), v8, *v4);
    *(_QWORD *)(v3 + 208) = *v4;
  }
  v9 = *((_DWORD *)a2 + 12);
  if ( !v9 )
  {
    SubmitRenderToHwQueue(a1, a2, a3);
    return;
  }
  v10 = v9 - 3;
  if ( !v10 )
  {
    VidSchiSubmitHwQueueMmIoFlipCommand(a1, a2);
    return;
  }
  v11 = v10 - 1;
  if ( !v11 )
  {
    VidSchiCompleteHwQueueWaitPacket(a1, a2, (__int64)v8);
    return;
  }
  v12 = v11 - 1;
  if ( !v12 )
  {
    if ( *((_QWORD *)a2 + 5) == *((_QWORD *)a2 + 12) + 160LL )
    {
      VidSchiCompleteHwQueueSignalPacket(a1, a2);
      return;
    }
LABEL_13:
    *((_DWORD *)a2 + 20) |= 1u;
    return;
  }
  v13 = v12 - 2;
  if ( !v13 )
  {
    if ( *((_QWORD *)a2 + 5) == *((_QWORD *)a2 + 12) + 160LL )
    {
      VidSchiCompleteHwQueuePacket(a1, a2, 1);
      return;
    }
    goto LABEL_13;
  }
  if ( v13 == 1 )
    SubmitPagingToHwQueue(a1, a2);
}
