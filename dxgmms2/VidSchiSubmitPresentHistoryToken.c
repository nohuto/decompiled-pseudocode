/*
 * XREFs of VidSchiSubmitPresentHistoryToken @ 0x1C00167E0
 * Callers:
 *     VidSchiUnwaitMonitoredFences @ 0x1C00037C0 (VidSchiUnwaitMonitoredFences.c)
 *     ?VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z @ 0x1C00055E0 (-VidSchiProcessCompletedQueuePacketInternal@@YAPEAU_VIDSCH_QUEUE_PACKET@@PEAU1@@Z.c)
 *     VidSchiFlushQueuePacket @ 0x1C003AAB8 (VidSchiFlushQueuePacket.c)
 *     VidSchiRedirectedFlipWaitOnSyncObject @ 0x1C003B608 (VidSchiRedirectedFlipWaitOnSyncObject.c)
 *     ?VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x1C0041854 (-VidSchiCompleteHwQueuePacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 * Callees:
 *     ?VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@_N7@Z @ 0x1C00168B8 (-VidSchiProcessPresentHistoryToken@@YAXPEAU_VIDSCH_GLOBAL@@PEAVHwQueueStagingList@@PEAU_VIDSCH_C.c)
 *     ?VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z @ 0x1C00355FC (-VidSchiCheckPlaneIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@II@Z.c)
 *     ?VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z @ 0x1C00356D0 (-VidSchiCheckTokenIndependentFlipCondition@@YA_NPEAU_VIDSCH_GLOBAL@@PEBUVIDSCH_SUBMIT_DATA2@@@Z.c)
 *     ?VidSchiPostponePresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DEVICE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@PEAU_VIDSCH_GLOBAL@@@Z @ 0x1C0035E84 (-VidSchiPostponePresentHistoryToken@@YAXPEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAU_VIDSCH_DE.c)
 */

void __fastcall VidSchiSubmitPresentHistoryToken(
        struct HwQueueStagingList *a1,
        _QWORD *a2,
        _QWORD *a3,
        union _ULARGE_INTEGER a4,
        __int64 a5)
{
  bool v5; // di
  struct _VIDSCH_CONTEXT *v8; // r13
  __int64 v9; // r12
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // rbp
  __int64 v13; // rdx
  bool v14; // al
  char v15; // r8
  bool v16; // zf
  unsigned int v17; // ecx
  char v18; // al
  char v19; // cl
  __int64 v20; // rdx
  __int64 v21; // r14
  int v22; // eax
  unsigned int v23; // r8d
  unsigned int v24; // edx
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned int v27; // [rsp+50h] [rbp-48h]
  unsigned int v28; // [rsp+54h] [rbp-44h]

  v5 = 0;
  v8 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  if ( a2 )
  {
    v11 = a2[11];
    a3 = a2 + 34;
    a4 = (union _ULARGE_INTEGER)a2[14];
    if ( v11 )
    {
      v10 = *(_QWORD *)(v11 + 104);
      v8 = (struct _VIDSCH_CONTEXT *)a2[11];
    }
    else
    {
      v9 = a2[12];
      v10 = *(_QWORD *)(*(_QWORD *)(v9 + 40) + 8LL);
    }
    v12 = *(_QWORD *)(v10 + 32);
  }
  else
  {
    v12 = a5;
  }
  v13 = *((unsigned int *)a3 + 29);
  v28 = *((_DWORD *)a3 + 29);
  if ( (*(_DWORD *)a3 & 0x1000000) == 0 )
  {
    if ( *(_QWORD *)((char *)a3 + 156) && (_DWORD)v13 != -1 && *(_QWORD *)(v12 + 8 * v13 + 3200) )
    {
      v23 = *(_DWORD *)(v12 + 152);
      v24 = 0;
      if ( !v23 )
      {
        v14 = 0;
        goto LABEL_8;
      }
      while ( 1 )
      {
        v25 = *(int *)(288LL * v24 + *(_QWORD *)(v12 + 8LL * *((unsigned int *)a3 + 29) + 3200) + 188);
        if ( (int)v25 > -1 )
        {
          v26 = *(_QWORD *)(v12 + 3328) + 160 * v25;
          if ( v26 )
          {
            if ( *((_DWORD *)a3 + 39) == *(_DWORD *)v26
              && *((_DWORD *)a3 + 40) == *(_DWORD *)(v26 + 4)
              && a3[21] == *(_QWORD *)(v26 + 8)
              && *(_DWORD *)(v26 + 112) == 3 )
            {
              goto LABEL_22;
            }
          }
        }
        if ( ++v24 >= v23 )
          goto LABEL_7;
      }
    }
    goto LABEL_7;
  }
  v15 = -1;
  v16 = !_BitScanForward(&v17, a3[75] & 0x3FF);
  v18 = v17;
  v19 = 0;
  if ( !v16 )
    v15 = v18;
  if ( v15 != -1 )
    v19 = v15;
  v27 = v19;
  v20 = *(int *)(*(_QWORD *)(v12 + 8 * v13 + 3200) + 288LL * (unsigned int)v19 + 188);
  if ( (int)v20 <= -1 )
    goto LABEL_7;
  v21 = *(_QWORD *)(v12 + 3328) + 160 * v20;
  if ( !v21 )
    goto LABEL_7;
  if ( *(_QWORD *)(v21 + 120) == v21 + 120 )
  {
    v22 = *(_DWORD *)(v21 + 112);
    if ( v22 == 3 )
    {
      if ( *((_DWORD *)a3 + 39) == *(_DWORD *)v21
        && *((_DWORD *)a3 + 40) == *(_DWORD *)(v21 + 4)
        && a3[21] == *(_QWORD *)(v21 + 8) )
      {
LABEL_22:
        v14 = 1;
        goto LABEL_8;
      }
LABEL_7:
      v14 = 0;
LABEL_8:
      VidSchiProcessPresentHistoryToken(
        (struct _VIDSCH_GLOBAL *)v12,
        a1,
        v8,
        (struct VIDSCH_HW_QUEUE *)v9,
        (struct _VIDSCH_DEVICE *)v10,
        (struct VIDSCH_SUBMIT_DATA2 *)a3,
        a4,
        v5,
        v14);
      return;
    }
    if ( v22 != 1
      || !VidSchiCheckTokenIndependentFlipCondition(
            (struct _VIDSCH_GLOBAL *)v12,
            (const struct VIDSCH_SUBMIT_DATA2 *)a3) )
    {
      goto LABEL_7;
    }
    if ( !*(_BYTE *)(v21 + 97) )
    {
      v14 = 0;
      v5 = 1;
      *(_BYTE *)(v21 + 97) = 1;
      goto LABEL_8;
    }
    if ( VidSchiCheckPlaneIndependentFlipCondition((struct _VIDSCH_GLOBAL *)v12, v28, v27) )
      goto LABEL_7;
  }
  VidSchiPostponePresentHistoryToken(
    v8,
    (struct VIDSCH_HW_QUEUE *)v9,
    (struct _VIDSCH_DEVICE *)v10,
    (struct VIDSCH_SUBMIT_DATA2 *)a3,
    a4,
    (struct _VIDSCH_GLOBAL *)v12);
}
