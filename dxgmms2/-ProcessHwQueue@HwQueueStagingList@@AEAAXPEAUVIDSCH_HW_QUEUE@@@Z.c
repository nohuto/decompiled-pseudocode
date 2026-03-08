/*
 * XREFs of ?ProcessHwQueue@HwQueueStagingList@@AEAAXPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C001C63A
 * Callers:
 *     VidSchSubmitWaitFromCpu @ 0x1C0001470 (VidSchSubmitWaitFromCpu.c)
 *     VidSchiUpdatePresentParameters @ 0x1C0002440 (VidSchiUpdatePresentParameters.c)
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C0006790 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C00067E0 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     VidSchiScheduleCommandToRun @ 0x1C0006850 (VidSchiScheduleCommandToRun.c)
 *     VidSchSetNodePowerState @ 0x1C000BB50 (VidSchSetNodePowerState.c)
 *     VidSchiSubmitMmIoFlipCommand @ 0x1C000EAF0 (VidSchiSubmitMmIoFlipCommand.c)
 *     VidSchiSubmitSignalCommand @ 0x1C00163E0 (VidSchiSubmitSignalCommand.c)
 * Callees:
 *     ?VidSchiPacketBlockedOnWaitCondition@@YA_NPEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C001D260 (-VidSchiPacketBlockedOnWaitCondition@@YA_NPEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C001D3B0 (-VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_H.c)
 *     ?VidSchiSetHwQueueState@@YAXPEAUVIDSCH_HW_QUEUE@@W4VIDSCH_HW_QUEUE_STATE@@@Z @ 0x1C001D4C6 (-VidSchiSetHwQueueState@@YAXPEAUVIDSCH_HW_QUEUE@@W4VIDSCH_HW_QUEUE_STATE@@@Z.c)
 */

void __fastcall HwQueueStagingList::ProcessHwQueue(HwQueueStagingList *this, struct VIDSCH_HW_QUEUE *a2)
{
  __int64 v2; // rax
  unsigned int v4; // ebx
  struct VIDSCH_HW_QUEUE *v6; // rdx
  __int64 v7; // r14
  _QWORD *v8; // rbp
  __int64 v9; // r13
  bool v10; // al
  struct VIDSCH_HW_QUEUE *v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // rdx
  __int64 v14; // rdx
  HwQueueStagingList *v15; // rax
  HwQueueStagingList **v16; // rcx
  _QWORD *v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // rdx
  __int64 v20; // rcx
  struct VIDSCH_HW_QUEUE *v21; // [rsp+58h] [rbp+10h] BYREF

  v2 = *((_QWORD *)a2 + 5);
  v4 = 0;
  v6 = 0LL;
  v21 = 0LL;
  v7 = *((_QWORD *)a2 + 26);
  v8 = (_QWORD *)((char *)a2 + 160);
  v9 = *(_QWORD *)(v2 + 16);
  if ( (struct VIDSCH_HW_QUEUE *)v7 == (struct VIDSCH_HW_QUEUE *)((char *)a2 + 160) )
  {
LABEL_22:
    v11 = a2;
    LOBYTE(v4) = *v8 != (_QWORD)v8;
    v14 = v4;
LABEL_23:
    VidSchiSetHwQueueState(v11, v14);
  }
  else
  {
    while ( !v6 )
    {
      v10 = VidSchiPacketBlockedOnWaitCondition((struct _VIDSCH_QUEUE_PACKET *)(v7 - 32));
      v11 = a2;
      if ( v10 )
      {
        LOBYTE(v4) = *v8 == v7;
        v14 = v4 + 1;
        goto LABEL_23;
      }
      VidSchiSetHwQueueState(a2, 1LL);
      if ( !*(_BYTE *)(v9 + 11276) && (*(_DWORD *)(v7 + 16) & 0xFFFFFFF7) == 0 )
      {
        v12 = (_QWORD *)((char *)a2 + 192);
        if ( *((_QWORD *)a2 + 24) )
          return;
        v13 = *(_QWORD **)(v9 + 2640);
        if ( *v13 == v9 + 2632 )
        {
          *v12 = v9 + 2632;
          *((_QWORD *)a2 + 25) = v13;
          *v13 = v12;
          *(_QWORD *)(v9 + 2640) = v12;
          return;
        }
LABEL_21:
        __fastfail(3u);
      }
      VidSchiReleasePacketToGpu(this, (struct _VIDSCH_QUEUE_PACKET *)(v7 - 32), &v21);
      v7 = *((_QWORD *)a2 + 26);
      if ( (_QWORD *)v7 == v8 )
        goto LABEL_22;
      v6 = v21;
    }
    v15 = (struct VIDSCH_HW_QUEUE *)((char *)a2 + 176);
    if ( !*((_QWORD *)a2 + 22) )
    {
      v16 = (HwQueueStagingList **)*((_QWORD *)this + 1);
      if ( *v16 != this )
        goto LABEL_21;
      *(_QWORD *)v15 = this;
      *((_QWORD *)a2 + 23) = v16;
      *v16 = v15;
      *((_QWORD *)this + 1) = v15;
      *((_BYTE *)this + 16) = 0;
    }
    v17 = (_QWORD *)((char *)v6 + 176);
    v18 = *((_QWORD *)v6 + 22);
    if ( v18 )
    {
      if ( *(_QWORD **)(v18 + 8) != v17 )
        goto LABEL_21;
      v19 = (_QWORD *)*((_QWORD *)v6 + 23);
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
