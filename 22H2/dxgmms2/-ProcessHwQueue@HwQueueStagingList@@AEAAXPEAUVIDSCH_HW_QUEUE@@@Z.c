/*
 * XREFs of ?ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0035A3C
 * Callers:
 *     VidSchSubmitWaitFromCpu @ 0x1C0001910 (VidSchSubmitWaitFromCpu.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C0002FF0 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiUpdatePresentParameters @ 0x1C0003B80 (VidSchiUpdatePresentParameters.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C000B000 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C000B050 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     VidSchiScheduleCommandToRun @ 0x1C000B0A0 (VidSchiScheduleCommandToRun.c)
 *     VidSchiSubmitWaitCommand @ 0x1C0013AB8 (VidSchiSubmitWaitCommand.c)
 *     VidSchiSubmitSignalCommand @ 0x1C0013F50 (VidSchiSubmitSignalCommand.c)
 * Callees:
 *     ?VidSchiPacketBlockedOnWaitCondition@@YA_NPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0037F50 (-VidSchiPacketBlockedOnWaitCondition@@YA_NPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0038120 (-VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_H.c)
 *     ?VidSchiSetHwQueueState@@YAXPEAUVIDSCH_HW_QUEUE@@W4VIDSCH_HW_QUEUE_STATE@@@Z @ 0x1C0038590 (-VidSchiSetHwQueueState@@YAXPEAUVIDSCH_HW_QUEUE@@W4VIDSCH_HW_QUEUE_STATE@@@Z.c)
 */

void __fastcall HwQueueStagingList::ProcessHwQueue(HwQueueStagingList *this, struct VIDSCH_HW_QUEUE *a2)
{
  __int64 v2; // rax
  _QWORD *v3; // rbp
  __int64 v4; // r14
  unsigned int v5; // ebx
  struct VIDSCH_HW_QUEUE *v8; // rcx
  __int64 v9; // r13
  bool v10; // al
  struct VIDSCH_HW_QUEUE *v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // rdx
  __int64 v14; // rdx
  HwQueueStagingList *v15; // rsi
  HwQueueStagingList **v16; // rax
  _QWORD *v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // rdx
  __int64 v20; // rcx
  struct VIDSCH_HW_QUEUE *v21; // [rsp+58h] [rbp+10h] BYREF

  v2 = *((_QWORD *)a2 + 5);
  v3 = (_QWORD *)((char *)a2 + 160);
  v4 = *((_QWORD *)a2 + 26);
  v5 = 0;
  v21 = 0LL;
  v8 = 0LL;
  v9 = *(_QWORD *)(v2 + 16);
  if ( (struct VIDSCH_HW_QUEUE *)v4 == (struct VIDSCH_HW_QUEUE *)((char *)a2 + 160) )
  {
LABEL_22:
    v11 = a2;
    LOBYTE(v5) = *v3 != (_QWORD)v3;
    v14 = v5;
LABEL_23:
    VidSchiSetHwQueueState(v11, v14);
  }
  else
  {
    while ( !v8 )
    {
      v10 = VidSchiPacketBlockedOnWaitCondition((struct _VIDSCH_QUEUE_PACKET *)(v4 - 32));
      v11 = a2;
      if ( v10 )
      {
        LOBYTE(v5) = *v3 == v4;
        v14 = v5 + 1;
        goto LABEL_23;
      }
      VidSchiSetHwQueueState(a2, 1LL);
      if ( !*(_BYTE *)(v9 + 11228) && (*(_DWORD *)(v4 + 16) & 0xFFFFFFF7) == 0 )
      {
        v12 = (_QWORD *)((char *)a2 + 192);
        if ( *((_QWORD *)a2 + 24) )
          return;
        v13 = *(_QWORD **)(v9 + 2632);
        if ( *v13 == v9 + 2624 )
        {
          *v12 = v9 + 2624;
          *((_QWORD *)a2 + 25) = v13;
          *v13 = v12;
          *(_QWORD *)(v9 + 2632) = v12;
          return;
        }
LABEL_21:
        __fastfail(3u);
      }
      VidSchiReleasePacketToGpu(this, (struct _VIDSCH_QUEUE_PACKET *)(v4 - 32), &v21);
      v4 = *((_QWORD *)a2 + 26);
      if ( (_QWORD *)v4 == v3 )
        goto LABEL_22;
      v8 = v21;
    }
    v15 = (struct VIDSCH_HW_QUEUE *)((char *)a2 + 176);
    if ( !*(_QWORD *)v15 )
    {
      v16 = (HwQueueStagingList **)*((_QWORD *)this + 1);
      if ( *v16 != this )
        goto LABEL_21;
      *(_QWORD *)v15 = this;
      *((_QWORD *)v15 + 1) = v16;
      *v16 = v15;
      *((_QWORD *)this + 1) = v15;
      *((_BYTE *)this + 16) = 0;
    }
    v17 = (_QWORD *)((char *)v8 + 176);
    v18 = *((_QWORD *)v8 + 22);
    if ( v18 )
    {
      if ( *(_QWORD **)(v18 + 8) != v17 )
        goto LABEL_21;
      v19 = (_QWORD *)v17[1];
      if ( (_QWORD *)*v19 != v17 )
        goto LABEL_21;
      *v19 = v18;
      *(_QWORD *)(v18 + 8) = v19;
    }
    v20 = *(_QWORD *)this;
    if ( *(HwQueueStagingList **)(*(_QWORD *)this + 8LL) != this )
      goto LABEL_21;
    *v17 = v20;
    v17[1] = this;
    *(_QWORD *)(v20 + 8) = v17;
    *(_QWORD *)this = v17;
    *((_BYTE *)this + 16) = 0;
  }
}
