void __fastcall VidSchiCompleteHwQueuePacket(struct HwQueueStagingList *a1, unsigned __int64 a2, char a3)
{
  struct HwQueueStagingList *v4; // r12
  __int64 v5; // r8
  struct _VIDSCH_QUEUE_PACKET *v6; // rdi
  __int64 v7; // r9
  __int64 i; // rcx
  __int64 v9; // r13
  __int64 v10; // rsi
  __int64 v11; // r14
  int v12; // eax
  __int64 v13; // r9
  __int64 v14; // r9
  __int64 v15; // r14
  int v16; // edx
  __int64 v17; // r15
  int v18; // r12d
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // r10
  unsigned int v26; // r9d
  bool j; // zf
  int v28; // eax
  char v29; // cl
  unsigned int v30; // r14d
  bool v31; // zf
  int v32; // eax
  char k; // cl
  __int64 v34; // r8
  __int64 v35; // r15
  __int64 v36; // rdx
  struct HwQueueStagingList **v37; // rax
  struct HwQueueStagingList **v38; // rdx
  struct VIDSCH_HW_CONTEXT *v39; // r15
  unsigned int v40; // eax
  int v41; // ecx
  void *v42; // rcx
  __int64 v43; // [rsp+40h] [rbp-29h]
  __int64 v44; // [rsp+58h] [rbp-11h]
  struct VIDSCH_HW_CONTEXT *v45; // [rsp+60h] [rbp-9h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+68h] [rbp-1h] BYREF
  BOOL v48; // [rsp+D8h] [rbp+6Fh]
  BOOL v49; // [rsp+E0h] [rbp+77h]
  int v50; // [rsp+E8h] [rbp+7Fh]

  v4 = a1;
  v5 = *(_QWORD *)(a2 + 96);
  v6 = (struct _VIDSCH_QUEUE_PACKET *)a2;
  v44 = v5;
  v48 = 0;
  v7 = 1LL;
  v49 = 0;
  i = *(_QWORD *)(v5 + 40);
  v45 = (struct VIDSCH_HW_CONTEXT *)i;
  v50 = 0;
  v9 = *(_QWORD *)(i + 8);
  v43 = *(_QWORD *)(i + 16);
  v10 = *(_QWORD *)(v9 + 32);
  v11 = *(_QWORD *)(v9 + 40);
  if ( bTracingEnabled && (*(_DWORD *)(a2 + 64) & 0x20) != 0 )
  {
    a2 = *(_QWORD *)(a2 + 88);
    if ( a2 )
    {
      i = *(_QWORD *)(a2 + 56);
      if ( !i || (*(_DWORD *)(a2 + 112) & 0x40) != 0 )
        i = a2;
    }
    else
    {
      i = *(_QWORD *)(v5 + 48);
      if ( !i )
        i = v5;
    }
    if ( (byte_1C00769C1 & 1) != 0 )
    {
      McTemplateK0pp_EtwWriteTransfer(i, &AbortQueuePacket, v5, v6, i);
      v7 = 1LL;
    }
  }
  v12 = *((_DWORD *)v6 + 12);
  if ( v12 )
  {
    if ( v12 == 8 )
    {
      if ( (byte_1C00769C1 & 1) != 0 )
      {
        v14 = *(_QWORD *)(*((_QWORD *)v6 + 12) + 48LL);
        if ( !v14 )
          v14 = *((_QWORD *)v6 + 12);
        McTemplateK0pp_EtwWriteTransfer(*((_QWORD *)v6 + 36), &EventDmaCompleteByGpu, v5, v14, *((_QWORD *)v6 + 36));
        v7 = 1LL;
      }
      --*(_DWORD *)(v44 + 152);
      _InterlockedAdd64((volatile signed __int64 *)(v43 + 1728), 1uLL);
      if ( (*((_DWORD *)v6 + 68) & 0x100) != 0 )
        VIDMM_DMA_POOL::ReleaseBuffer(
          *(VIDMM_DMA_POOL **)(*((_QWORD *)v6 + 35) + 136LL),
          *((struct _VIDMM_DMA_BUFFER **)v6 + 35),
          1);
    }
    else if ( v12 == 3 )
    {
      VidSchiReleaseFlipFencesReference((struct _VIDSCH_GLOBAL *)v10, (struct _VIDSCH_QUEUE_PACKET *)((char *)v6 + 872));
    }
  }
  else
  {
    if ( (byte_1C00769C1 & 1) != 0 )
    {
      v13 = *(_QWORD *)(*((_QWORD *)v6 + 12) + 48LL);
      if ( !v13 )
        v13 = *((_QWORD *)v6 + 12);
      McTemplateK0pp_EtwWriteTransfer(*((_QWORD *)v6 + 96), &EventDmaCompleteByGpu, v5, v13, *((_QWORD *)v6 + 96));
      v7 = 1LL;
    }
    --*(_DWORD *)(v44 + 152);
    _InterlockedAdd64((volatile signed __int64 *)(v43 + 1728), 1uLL);
    a2 = *((_QWORD *)v6 + 35);
    if ( a2 )
    {
      VIDMM_GLOBAL::UnreferenceDmaBuffer(
        *(VIDMM_GLOBAL **)(*(_QWORD *)(v10 + 8) + 768LL),
        (struct _VIDMM_DMA_BUFFER *)a2,
        0);
      if ( (*((_DWORD *)v6 + 18) & 0x100) != 0 )
        VIDMM_DMA_POOL::ReleaseBuffer(
          *(VIDMM_DMA_POOL **)(*((_QWORD *)v6 + 35) + 136LL),
          *((struct _VIDMM_DMA_BUFFER **)v6 + 35),
          0);
      v7 = 1LL;
    }
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)v6 + 118); i = (unsigned int)(i + 1) )
    {
      if ( (unsigned int)i >= 0x10 )
        break;
      a2 = *((_QWORD *)v6 + (unsigned int)i + 60);
      *((_QWORD *)v6 + (unsigned int)i + 60) = 0LL;
      if ( a2 )
        _InterlockedDecrement((volatile signed __int32 *)(a2 + 104));
    }
    if ( (*((_DWORD *)v6 + 20) & 0x80u) != 0 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v10 + 812));
      VidSchiUpdateCurrentIsrFrameTime(v10, *(_QWORD *)(v10 + 8LL * *((unsigned int *)v6 + 40) + 3200), 0);
      a2 = *((unsigned int *)v6 + 40);
      *((_QWORD *)v6 + 17) = *(_QWORD *)(*(_QWORD *)(v10 + 8 * a2 + 3200) + 44144LL);
      i = *(unsigned int *)(*(_QWORD *)(v10 + 8 * a2 + 3200) + 44152LL);
      *((_DWORD *)v6 + 33) = i;
    }
  }
  if ( a3
    && (*((_DWORD *)v6 + 12) & 0xFFFFFFF7) == 0
    && (++*(_QWORD *)(v11 + 2848), bTracingEnabled)
    && (byte_1C00769C4 & 2) != 0 )
  {
    v15 = v43;
    if ( *(_BYTE *)(((__int64 (__fastcall *)(__int64, unsigned __int64, __int64, __int64))DxgCoreInterface[3])(
                      i,
                      a2,
                      1LL,
                      v7)
                  + 305288)
      && !_InterlockedCompareExchange((volatile signed __int32 *)(v43 + 2944), 1, 0) )
    {
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(v43 + 2912), NormalWorkQueue);
    }
  }
  else
  {
    v15 = v43;
  }
  v16 = *((_DWORD *)v6 + 18);
  *((_QWORD *)v6 + 7) = MEMORY[0xFFFFF78000000320];
  *((_DWORD *)v6 + 13) = 16;
  if ( (v16 & 0x40020) == 0x40000 || (v16 & 0x4000) != 0 )
  {
    v17 = *((unsigned int *)v6 + 40);
    v18 = v16 & 0xC00;
    if ( (v16 & 0x40000) != 0 )
    {
      if ( (v16 & 0x4000) != 0 )
      {
LABEL_53:
        v49 = v18 != 1024;
        if ( v18 == 1024 )
          goto LABEL_60;
        goto LABEL_58;
      }
    }
    else
    {
      if ( (v16 & 4) == 0 )
        goto LABEL_53;
      if ( *((_DWORD *)v6 + 98) == 1 )
      {
        v48 = v18 != 1024;
        goto LABEL_53;
      }
      if ( (*((_DWORD *)v6 + 16) & 2) == 0 )
      {
        if ( v18 == 1024 )
          goto LABEL_61;
        v48 = 1;
        v49 = 1;
        v50 = 1;
LABEL_58:
        if ( VidSchiIsFocusHwContext(v45) )
          ((void (__fastcall *)(_QWORD))DxgCoreInterface[23])(*(_QWORD *)(*(_QWORD *)(v9 + 32) + 8LL));
LABEL_60:
        if ( !v50 )
        {
LABEL_65:
          if ( v49 && (_DWORD)v17 != -1 && (*((_DWORD *)v6 + 18) & 0x40000) == 0 )
          {
            _InterlockedDecrement((volatile signed __int32 *)(v9 + 4 * v17 + 1444));
            v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v9 + 40) + 32LL)
                                        + 8LL * *(unsigned int *)(*(_QWORD *)(v9 + 32) + 4LL))
                            + 8 * v17
                            + 88);
            if ( (*((_DWORD *)v6 + 18) & 0x80u) == 0 )
            {
              _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(v10 + 8 * v17 + 6480) + 8LL));
              ++**(_DWORD **)(v10 + 8 * v17 + 6480);
            }
            _InterlockedDecrement((volatile signed __int32 *)(v21 + 8));
            ++*(_DWORD *)v21;
            if ( (*((_DWORD *)v6 + 18) & 0x20000) != 0 )
            {
              memset(&LockHandle, 0, sizeof(LockHandle));
              KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v10 + 1736), &LockHandle);
              *(_DWORD *)(v9 + 4 * v17 + 508) = *((_DWORD *)v6 + 96);
              *(_QWORD *)(v9 + 8 * v17 + 576) = *((unsigned int *)v6 + 33);
              *(_QWORD *)(v9 + 8 * v17 + 704) = *((_QWORD *)v6 + 17);
              KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
            }
          }
          goto LABEL_72;
        }
LABEL_61:
        if ( (*((_DWORD *)v6 + 218) & 0x3FF) != 0 )
        {
          v19 = *(unsigned __int16 *)(v15 + 4);
          v20 = *(_QWORD *)(v10 + 632);
          if ( (unsigned int)v19 < *(_DWORD *)(v10 + 704) )
            v20 += 8 * v19;
          VidSchiUnreferencePrimaryAllocations(
            a1,
            (struct _VIDSCH_GLOBAL *)v10,
            v17,
            (struct _VIDSCH_QUEUE_PACKET *)((char *)v6 + 872),
            *((_DWORD *)v6 + 102),
            1 << *(_BYTE *)(*(_QWORD *)v20 + 6LL),
            0,
            0);
        }
        goto LABEL_65;
      }
    }
LABEL_72:
    if ( (*((_DWORD *)v6 + 18) & 0x40080) != 0 && *((_QWORD *)v6 + 18) && *((_QWORD *)v6 + 19) )
    {
      j = v18 == 1024;
      v4 = a1;
      if ( !j )
        VidSchiSubmitPresentHistoryToken(a1, v6, 0LL, 0LL, 0LL);
    }
    else
    {
      v4 = a1;
    }
    if ( v48 )
    {
      _InterlockedDecrement((volatile signed __int32 *)(v10 + 736));
      v22 = v10;
      if ( *(_BYTE *)(v10 + 2212) )
        v22 = v10 + 4 * v17;
      _InterlockedDecrement((volatile signed __int32 *)(v22 + 740));
      _InterlockedDecrement((volatile signed __int32 *)(v9 + 1572));
      _InterlockedDecrement((volatile signed __int32 *)(v9 + 4 * v17 + 1508));
    }
    VidSchiSignalRegisteredEvent(v10, (struct _KEVENT **)(v10 + 1688));
  }
  if ( *((_DWORD *)v6 + 12) == 3 && *((_DWORD *)v6 + 40) != -1 )
  {
    v23 = *((_QWORD *)v6 + 11);
    if ( v23 )
      v24 = *(_QWORD *)(v23 + 104);
    else
      v24 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)v6 + 12) + 40LL) + 8LL);
    v25 = *(_QWORD *)(v24 + 32);
    if ( (*((_DWORD *)v6 + 18) & 0x800000) != 0 )
      v26 = ((unsigned __int16)*((_DWORD *)v6 + 218) | (unsigned __int16)(*((_DWORD *)v6 + 218) >> 10)) & 0x3FF;
    else
      v26 = (1 << *(_DWORD *)(v25 + 152)) - 1;
    for ( j = !_BitScanForward((unsigned int *)&v28, v26); ; j = !_BitScanForward((unsigned int *)&v28, v26) )
    {
      v29 = -1;
      if ( !j )
        v29 = v28;
      if ( !v26 )
        break;
      _InterlockedExchangeAdd(
        (volatile signed __int32 *)(*(_QWORD *)(v25 + 8LL * *((unsigned int *)v6 + 40) + 3200) + 288LL * v29 + 192),
        0xFFFFFFFF);
      v26 &= ~(1 << v29);
    }
    if ( (*((_DWORD *)v6 + 18) & 0x800000) != 0 )
      v30 = ((unsigned __int16)*((_DWORD *)v6 + 218) | (unsigned __int16)(*((_DWORD *)v6 + 218) >> 10)) & 0x3FF;
    else
      v30 = (1 << *(_DWORD *)(v10 + 152)) - 1;
    v31 = !_BitScanForward((unsigned int *)&v32, v30);
    for ( k = -1; ; k = -1 )
    {
      if ( !v31 )
        k = v32;
      if ( !v30 )
        break;
      v34 = *((unsigned int *)v6 + 40);
      v35 = (unsigned int)k;
      v36 = *(int *)(*(_QWORD *)(v10 + 8 * v34 + 3200) + 288 * v35 + 188);
      if ( (int)v36 > -1 && *(_DWORD *)(160 * v36 + *(_QWORD *)(v10 + 3328) + 112) == 1 )
        VidSchiTryEnterIndependentFlip(v4, (struct _VIDSCH_GLOBAL *)v10, v34, v35);
      v30 &= ~(1 << v35);
      v31 = !_BitScanForward((unsigned int *)&v32, v30);
    }
  }
  if ( (unsigned int)(*((_DWORD *)v6 + 12) - 4) > 1 )
    _InterlockedDecrement((volatile signed __int32 *)(v9 + 1584));
  if ( v49 )
    VidSchiSignalRegisteredEvent(v10, (struct _KEVENT **)(v9 + 120));
  if ( v48 )
  {
    VidSchiSignalRegisteredEvent(v10, (struct _KEVENT **)(v9 + 136));
    VidSchiSignalRegisteredEvent(v10, (struct _KEVENT **)(v10 + 1672));
    *(_QWORD *)(v10 + 1616) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v10 + 1584), 0, 0);
  }
  if ( (*((_DWORD *)v6 + 12) & 0xFFFFFFF7) != 0 )
  {
    v39 = v45;
  }
  else
  {
    v37 = (struct HwQueueStagingList **)(v44 + 176);
    if ( !*(_QWORD *)(v44 + 176) )
    {
      v38 = (struct HwQueueStagingList **)*((_QWORD *)v4 + 1);
      if ( *v38 != v4 )
        __fastfail(3u);
      *v37 = v4;
      *(_QWORD *)(v44 + 184) = v38;
      *v38 = (struct HwQueueStagingList *)v37;
      *((_QWORD *)v4 + 1) = v37;
      *((_BYTE *)v4 + 16) = 0;
    }
    v39 = v45;
    VidSchiSignalRegisteredEvent(v10, (struct _KEVENT **)v45 + 41);
    VidSchiSignalRegisteredEvent(v10, (struct _KEVENT **)(v43 + 408));
    VidSchiSignalRegisteredEvent(v10, (struct _KEVENT **)(v10 + 1640));
    *((_QWORD *)v45 + 38) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)((char *)v45 + 272), 0, 0);
    *(_QWORD *)(v43 + 272) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v43 + 240), 0, 0);
    *(_QWORD *)(v10 + 1448) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v10 + 1416), 0, 0);
  }
  v40 = *((_DWORD *)v6 + 12);
  if ( v40 <= 7 )
  {
    v41 = 137;
    if ( _bittest(&v41, v40) )
    {
      if ( !*((_BYTE *)v39 + 89) )
        VidSchiReleasePrivateDataReference(
          (struct _VIDSCH_GLOBAL *)v10,
          (struct _VIDSCH_QUEUE_PACKET *)((char *)v6 + 872));
      v42 = (void *)*((_QWORD *)v6 + 38);
      if ( v42 )
      {
        CRefCountedBuffer::RefCountedBufferRelease(v42);
        *((_QWORD *)v6 + 38) = 0LL;
      }
    }
  }
  VidSchiFreeCompletedHwQueuePacket(v6);
}
