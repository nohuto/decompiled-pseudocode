/*
 * XREFs of ?SubmitRenderToHwQueue@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C00410D0
 * Callers:
 *     ?VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C001D3B0 (-VidSchiReleasePacketToGpu@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAPEAUVIDSCH_H.c)
 * Callees:
 *     VidSchiMarkDeviceAsError @ 0x1C0014B80 (VidSchiMarkDeviceAsError.c)
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001AC80 (memset.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C001BF00 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DDDICB_SIGNALFLAGS@@PEB_KPEAPEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C001C346 (-VidSchiSignalSyncObjectsFromCpu@@YAJPEAVHwQueueStagingList@@IPEAPEAU_VIDSCH_SYNC_OBJECT@@U_D3DD.c)
 *     ?VidSchiCalibrateHwClock@@YAXPEAU_VIDSCH_NODE@@@Z @ 0x1C001C7BC (-VidSchiCalibrateHwClock@@YAXPEAU_VIDSCH_NODE@@@Z.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x1C0041854 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     ?VidSchiSimulateProgressFenceCompletion@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PEAUVIDSCH_HW_QUEUE@@@Z @ 0x1C0043010 (-VidSchiSimulateProgressFenceCompletion@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@PE.c)
 *     McTemplateK0pxpqq_EtwWriteTransfer @ 0x1C0043EAC (McTemplateK0pxpqq_EtwWriteTransfer.c)
 *     ?VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z @ 0x1C004A448 (-VidSchiSetInterruptTargetPresentId@@YAJPEAU_VIDSCH_GLOBAL@@II_K_NI@Z.c)
 */

void __fastcall SubmitRenderToHwQueue(
        struct HwQueueStagingList *a1,
        struct _VIDSCH_QUEUE_PACKET *a2,
        struct VIDSCH_HW_QUEUE **a3)
{
  __int64 v3; // r14
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // r15
  __int64 v9; // r12
  __int64 v10; // rdi
  bool v11; // zf
  unsigned int v12; // edx
  unsigned int v13; // r12d
  unsigned int v14; // edx
  _QWORD *v15; // r8
  __int64 v16; // rcx
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rcx
  unsigned int v20; // eax
  LARGE_INTEGER PerformanceCounter; // r12
  LONG v22; // eax
  int v23; // r8d
  LONG v24; // r14d
  __int64 v25; // rcx
  __int64 v26; // r9
  void *v27; // rcx
  LARGE_INTEGER *v28; // rdi
  __int128 v29; // xmm1
  __int128 v30; // [rsp+40h] [rbp-C0h] BYREF
  __int128 v31; // [rsp+50h] [rbp-B0h]
  __int128 v32; // [rsp+60h] [rbp-A0h]
  __int128 v33; // [rsp+70h] [rbp-90h]
  _DWORD v34[2]; // [rsp+80h] [rbp-80h] BYREF
  _BYTE *v35; // [rsp+88h] [rbp-78h]
  __int64 v36; // [rsp+90h] [rbp-70h]
  _BYTE v37[128]; // [rsp+A0h] [rbp-60h] BYREF

  v3 = *((_QWORD *)a2 + 12);
  v6 = *(_QWORD *)(v3 + 40);
  v7 = *(_QWORD *)(v6 + 8);
  v8 = *(_QWORD *)(v6 + 16);
  v9 = *(_QWORD *)(v7 + 40);
  v10 = *(_QWORD *)(v8 + 24);
  ++*(_DWORD *)(v3 + 152);
  *((_DWORD *)a2 + 20) |= 0x40u;
  if ( *(_QWORD *)(v3 + 104) && *((_DWORD *)a2 + 194) == 1 )
    VidSchiSignalSyncObjectsFromCpu(a1, 1u, (struct _VIDSCH_SYNC_OBJECT **)(v3 + 104), 0, (char *)a2 + 816, a3);
  if ( (*(_BYTE *)(v10 + 3036) & 1) != 0
    || *(_DWORD *)(v10 + 3012)
    || *(_BYTE *)(v7 + 204)
    || _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 200), 0, 0)
    || *(_BYTE *)(v3 + 145) )
  {
    VidSchiSimulateProgressFenceCompletion(0LL, a2, (struct VIDSCH_HW_QUEUE *)v3);
    VidSchiCompleteHwQueuePacket(a1, a2, 0);
  }
  else
  {
    v11 = (*((_DWORD *)a2 + 12) & 0xFFFFFFF7) == 0;
    *((_QWORD *)a2 + 7) = MEMORY[0xFFFFF78000000320];
    *((_DWORD *)a2 + 13) = 9;
    if ( v11 )
      ++*(_QWORD *)(v9 + 2840);
    if ( (*((_DWORD *)a2 + 18) & 0x4000) != 0 && (*(_DWORD *)(v7 + 48) & 2) != 0 )
    {
      *((_DWORD *)a2 + 20) |= 0x80u;
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 812));
      if ( *(_BYTE *)(v10 + 59) )
      {
        v12 = *((_DWORD *)a2 + 40);
        if ( v12 < *(_DWORD *)(v10 + 40) )
          VidSchiSetInterruptTargetPresentId((struct _VIDSCH_GLOBAL *)v10, v12, 0, 0LL, 0, 0);
      }
    }
    if ( (*((_DWORD *)a2 + 16) & 0x80u) != 0 )
    {
      v13 = *((_DWORD *)a2 + 118);
      memset(v37, 0, sizeof(v37));
      v14 = 0;
      if ( v13 )
      {
        v15 = v37;
        do
        {
          if ( v14 >= 0x10 )
            break;
          ++v14;
          *v15 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)((char *)v15 + a2 - (struct _VIDSCH_QUEUE_PACKET *)v37 + 480) + 96LL)
                           + 40LL);
          ++v15;
        }
        while ( v14 < v13 );
      }
      v34[0] = v13;
      v34[1] = 0;
      v35 = v37;
      v36 = *(_QWORD *)(*(_QWORD *)(v7 + 40) + 8LL);
      ((void (__fastcall *)(_QWORD, __int64, _DWORD *))DxgCoreInterface[82])(*(_QWORD *)(v10 + 16), 1LL, v34);
    }
    VidSchiCalibrateHwClock((struct _VIDSCH_NODE *)v8);
    *((_QWORD *)&v32 + 1) = 0LL;
    v16 = *((_QWORD *)a2 + 36);
    *(_QWORD *)&v30 = *(_QWORD *)(v3 + 112);
    *((_QWORD *)&v30 + 1) = *((_QWORD *)a2 + 96);
    v33 = *((_OWORD *)a2 + 49);
    *(_QWORD *)&v31 = *((_QWORD *)a2 + 39);
    DWORD2(v31) = *((_DWORD *)a2 + 81);
    if ( v16 )
    {
      v17 = *(_DWORD *)(v16 + 8);
      v18 = v16 + 16;
      HIDWORD(v31) = v17;
    }
    else
    {
      v19 = *((_QWORD *)a2 + 35);
      if ( v19 )
      {
        HIDWORD(v31) = *((_DWORD *)a2 + 87);
        v18 = *(_QWORD *)(v19 + 128);
      }
      else
      {
        HIDWORD(v31) = 0;
        v18 = 0LL;
      }
    }
    v20 = *((_DWORD *)a2 + 18);
    *(_QWORD *)&v32 = v18;
    DWORD2(v32) = DWORD2(v32) & 0xFFFFFFF9 | ((v20 & 0x80 | (v20 >> 10) & 0x40) >> 5);
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v22 = DxgCoreInterface[54](
            *(ADAPTER_DISPLAY **)(v10 + 8),
            (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)&v30);
    v24 = v22;
    if ( (byte_1C00769C1 & 1) != 0 )
    {
      v25 = *((_QWORD *)a2 + 12);
      v26 = *(_QWORD *)(v25 + 48);
      if ( !v26 )
        LODWORD(v26) = *((_QWORD *)a2 + 12);
      McTemplateK0pxpqq_EtwWriteTransfer(
        v25,
        *(_DWORD *)(v7 + 1576),
        v23,
        v26,
        SBYTE8(v30),
        v31,
        v22,
        *(_DWORD *)(v7 + 1576));
    }
    v27 = (void *)*((_QWORD *)a2 + 36);
    if ( v27 )
    {
      CRefCountedBuffer::RefCountedBufferRelease(v27);
      *((_QWORD *)a2 + 36) = 0LL;
    }
    v28 = (LARGE_INTEGER *)(*(_QWORD *)(v8 + 184) + 112LL * *(unsigned int *)(v8 + 196));
    memset(v28, 0, 0x70uLL);
    *(_DWORD *)(v8 + 196) = (*(_DWORD *)(v8 + 196) + 1) & (*(_DWORD *)(v8 + 192) - 1);
    if ( !PerformanceCounter.QuadPart )
      PerformanceCounter = KeQueryPerformanceCounter(0LL);
    v28[1] = PerformanceCounter;
    v28->LowPart = 8;
    v28[10] = *(LARGE_INTEGER *)((char *)a2 + 768);
    v28[11].LowPart = *((_DWORD *)a2 + 194);
    *(_OWORD *)&v28[2].LowPart = v30;
    *(_OWORD *)&v28[4].LowPart = v31;
    *(_OWORD *)&v28[6].LowPart = v32;
    v29 = v33;
    v28[11].HighPart = v24;
    *(_OWORD *)&v28[8].LowPart = v29;
    if ( (int)(v24 + 0x80000000) >= 0 && v24 != -1073741822 )
      VidSchiMarkDeviceAsError(a1, v7, 19, 0LL);
  }
}
