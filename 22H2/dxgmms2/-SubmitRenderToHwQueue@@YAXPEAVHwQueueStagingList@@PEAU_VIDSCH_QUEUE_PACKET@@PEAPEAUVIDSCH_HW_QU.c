/*
 * XREFs of ?SubmitRenderToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0035E58
 * Callers:
 *     ?VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0038120 (-VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_H.c)
 * Callees:
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C0002F0C (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     VidSchiMarkDeviceAsError @ 0x1C0015DC0 (VidSchiMarkDeviceAsError.c)
 *     _guard_dispatch_icall_nop @ 0x1C0018AA0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0018D80 (memset.c)
 *     ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KPEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C00331A8 (-VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DD.c)
 *     ?VidSchiCalibrateHwClock@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C0036434 (-VidSchiCalibrateHwClock@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0036548 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiSimulateProgressFenceCompletion@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C00385F8 (-VidSchiSimulateProgressFenceCompletion@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PE.c)
 *     McTemplateK0pxpqq_EtwWriteTransfer @ 0x1C0039A40 (McTemplateK0pxpqq_EtwWriteTransfer.c)
 */

void __fastcall SubmitRenderToHwQueue(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_QUEUE_PACKET *a2,
        struct VIDSCH_HW_QUEUE **a3)
{
  __int64 v3; // rbx
  __int64 v6; // rax
  __int64 v7; // r13
  __int64 v8; // rsi
  __int64 v9; // r14
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rcx
  unsigned int v14; // eax
  int v15; // eax
  int v16; // edx
  int v17; // r8d
  int v18; // r14d
  __int64 v19; // r9
  struct _SLIST_ENTRY *v20; // rcx
  _DWORD *v21; // rbx
  __int128 v22; // xmm1
  __int128 v23; // [rsp+40h] [rbp-40h] BYREF
  __int128 v24; // [rsp+50h] [rbp-30h]
  __int128 v25; // [rsp+60h] [rbp-20h]
  __int128 v26; // [rsp+70h] [rbp-10h]

  v3 = *((_QWORD *)a2 + 12);
  v6 = *(_QWORD *)(v3 + 40);
  v7 = *(_QWORD *)(v6 + 16);
  v8 = *(_QWORD *)(v6 + 8);
  v9 = *(_QWORD *)(v7 + 24);
  ++*(_DWORD *)(v3 + 152);
  *((_DWORD *)a2 + 20) |= 0x40u;
  if ( *(_QWORD *)(v3 + 104) && *((_DWORD *)a2 + 190) == 1 )
    VidSchiSignalSyncObjectsFromCpu(
      a1,
      (unsigned __int64 *)1,
      (struct _VIDSCH_SYNC_OBJECT **)(v3 + 104),
      0,
      (char *)a2 + 800,
      a3);
  if ( (*(_BYTE *)(v9 + 2940) & 1) != 0
    || *(_DWORD *)(v9 + 2916)
    || *(_BYTE *)(v8 + 204)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v8 + 200), 0, 0)
    || *(_BYTE *)(v3 + 145) )
  {
    VidSchiSimulateProgressFenceCompletion(a1, a2, (struct VIDSCH_HW_QUEUE *)v3);
    VidSchiCompleteHwQueuePacket(a1, a2);
  }
  else
  {
    *((_QWORD *)a2 + 7) = MEMORY[0xFFFFF78000000320];
    *((_DWORD *)a2 + 13) = 9;
    VidSchiCalibrateHwClock((struct _VIDSCH_NODE *)v7);
    v10 = *((_QWORD *)a2 + 36);
    *((_QWORD *)&v25 + 1) = 0LL;
    *(_QWORD *)&v23 = *(_QWORD *)(v3 + 112);
    *((_QWORD *)&v23 + 1) = *((_QWORD *)a2 + 94);
    v26 = *((_OWORD *)a2 + 48);
    *(_QWORD *)&v24 = *((_QWORD *)a2 + 39);
    DWORD2(v24) = *((_DWORD *)a2 + 81);
    if ( v10 )
    {
      v11 = *(_DWORD *)(v10 + 8);
      v12 = v10 + 16;
      HIDWORD(v24) = v11;
    }
    else
    {
      v13 = *((_QWORD *)a2 + 35);
      if ( v13 )
      {
        HIDWORD(v24) = *((_DWORD *)a2 + 87);
        v12 = *(_QWORD *)(v13 + 128);
      }
      else
      {
        HIDWORD(v24) = 0;
        v12 = 0LL;
      }
    }
    v14 = *((_DWORD *)a2 + 18);
    *(_QWORD *)&v25 = v12;
    DWORD2(v25) = DWORD2(v25) & 0xFFFFFFF9 | ((v14 & 0x80 | (v14 >> 10) & 0x40) >> 5);
    v15 = ((__int64 (__fastcall *)(_QWORD, __int128 *))DxgCoreInterface[53])(*(_QWORD *)(v9 + 8), &v23);
    v18 = v15;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      v19 = *(_QWORD *)(*((_QWORD *)a2 + 12) + 48LL);
      if ( !v19 )
        v19 = *((_QWORD *)a2 + 12);
      McTemplateK0pxpqq_EtwWriteTransfer(
        *(_DWORD *)(v8 + 1576),
        v16,
        v17,
        v19,
        SBYTE8(v23),
        v24,
        v15,
        *(_DWORD *)(v8 + 1576));
    }
    v20 = (struct _SLIST_ENTRY *)*((_QWORD *)a2 + 36);
    if ( v20 )
    {
      CRefCountedBuffer::RefCountedBufferRelease(v20);
      *((_QWORD *)a2 + 36) = 0LL;
    }
    v21 = (_DWORD *)(*(_QWORD *)(v7 + 184) + 112LL * *(unsigned int *)(v7 + 196));
    memset(v21, 0, 0x70uLL);
    *(_DWORD *)(v7 + 196) = (*(_DWORD *)(v7 + 196) + 1) & (*(_DWORD *)(v7 + 192) - 1);
    *v21 = 8;
    *((_QWORD *)v21 + 10) = *((_QWORD *)a2 + 94);
    v21[22] = *((_DWORD *)a2 + 190);
    *((_OWORD *)v21 + 1) = v23;
    *((_OWORD *)v21 + 2) = v24;
    *((_OWORD *)v21 + 3) = v25;
    v22 = v26;
    v21[23] = v18;
    *((_OWORD *)v21 + 4) = v22;
    if ( (int)(v18 + 0x80000000) >= 0 && v18 != -1073741822 )
      VidSchiMarkDeviceAsError(a1, v8, 19, 0LL);
  }
}
