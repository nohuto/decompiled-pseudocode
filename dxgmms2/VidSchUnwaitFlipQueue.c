/*
 * XREFs of VidSchUnwaitFlipQueue @ 0x1C0003B80
 * Callers:
 *     VidSchiUnwaitMonitoredFences @ 0x1C00037C0 (VidSchiUnwaitMonitoredFences.c)
 *     VidSchiProcessDpcCompletedPacket @ 0x1C0004B90 (VidSchiProcessDpcCompletedPacket.c)
 *     VidSchiUnwaitFlipQueueUnderSchedulerSpinLock @ 0x1C0017CAC (VidSchiUnwaitFlipQueueUnderSchedulerSpinLock.c)
 *     ?VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z @ 0x1C001C93E (-VidSchiCompleteHwQueueSignalPacket@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@_N@Z.c)
 *     ?VidSchiAdvanceContextSubmissionId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z @ 0x1C0034FD4 (-VidSchiAdvanceContextSubmissionId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_QUEUE_PACKET@@@Z.c)
 *     ?VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUEUE@@PEAUVIDSCH_SUBMIT_DATA2@@T_ULARGE_INTEGER@@PEAU_VIDSCH_DEVICE@@@Z @ 0x1C0036A48 (-VidSchiSubmitIndependentFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_CONTEXT@@PEAUVIDSCH_HW_QUE.c)
 *     VidSchSubmitSignalToHwQueue @ 0x1C0044980 (VidSchSubmitSignalToHwQueue.c)
 * Callees:
 *     VidSchiUpdateLastCompletedPresentTimestamp @ 0x1C0002D40 (VidSchiUpdateLastCompletedPresentTimestamp.c)
 *     VidSchiExecuteMmIoFlip @ 0x1C000BE30 (VidSchiExecuteMmIoFlip.c)
 *     ?VidSchiCheckPendingFlipsForThisEntry@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAUVIDSCH_FLIP_QUEUE@@@Z @ 0x1C000C340 (-VidSchiCheckPendingFlipsForThisEntry@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VI.c)
 *     ?VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x1C000F7FC (-VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAU.c)
 *     ?UpdateHistory@VIDSCH_FLIP_QUEUE_HISTORY_ENTRY@@QEAAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@PEBU_VIDSCH_PRESENT_INFO@@PEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x1C000F860 (-UpdateHistory@VIDSCH_FLIP_QUEUE_HISTORY_ENTRY@@QEAAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VI.c)
 *     VidSchiCompletePendingFlipOnPlane @ 0x1C00183F4 (VidSchiCompletePendingFlipOnPlane.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001AC80 (memset.c)
 *     ?VidSchiSelectPresentAtFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAKPEAPEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x1C0036748 (-VidSchiSelectPresentAtFlip@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUE.c)
 *     VidSchiRestartQueuedFlip @ 0x1C003C2A4 (VidSchiRestartQueuedFlip.c)
 *     ?VidSchiUpdateInterruptTargetsForAllPlanes@@YAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C004B0C0 (-VidSchiUpdateInterruptTargetsForAllPlanes@@YAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 */

__int64 __fastcall VidSchUnwaitFlipQueue(struct HwQueueStagingList *a1, __int64 a2)
{
  __int64 result; // rax
  struct HwQueueStagingList *v4; // r10
  unsigned int v5; // r15d
  int v6; // r8d
  __int64 v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // rdx
  int v10; // ebx
  __int64 v11; // r14
  __int64 v12; // r14
  __int64 v13; // rdx
  unsigned int v14; // r12d
  __int64 v15; // rdi
  struct _VIDSCH_FLIP_QUEUE_ENTRY *v16; // r13
  __int64 v17; // rdi
  unsigned int v18; // r9d
  unsigned int v19; // r10d
  __int64 v20; // r12
  __int64 v21; // r8
  __int64 v22; // rax
  unsigned int v23; // ecx
  unsigned int v24; // r11d
  bool v25; // cc
  int v26; // eax
  char v27; // r8
  __int64 v28; // r8
  __int64 v29; // rdx
  struct _VIDSCH_FLIP_QUEUE_ENTRY *v30; // rdx
  void *v31; // rcx
  __int64 v32; // rdi
  LARGE_INTEGER PerformanceCounter; // rax
  struct _VIDSCH_FLIP_QUEUE_ENTRY *v34; // rcx
  _DWORD *v35; // rdx
  char v36; // di
  __int64 v37; // r9
  __int64 v38; // rdx
  int v39; // eax
  int v40; // eax
  bool v41; // al
  unsigned int v42; // r8d
  __int64 v43; // r9
  unsigned __int64 v44; // r10
  unsigned __int64 *v45; // rax
  __int64 v46; // r8
  char *v47; // rax
  unsigned int *v48; // [rsp+28h] [rbp-39h]
  unsigned int *v49; // [rsp+28h] [rbp-39h]
  unsigned int *v50; // [rsp+28h] [rbp-39h]
  unsigned int v51; // [rsp+48h] [rbp-19h]
  char v52; // [rsp+4Ch] [rbp-15h] BYREF
  char v53; // [rsp+4Dh] [rbp-14h] BYREF
  _BYTE v54[2]; // [rsp+4Eh] [rbp-13h] BYREF
  __int64 v55; // [rsp+50h] [rbp-11h]
  unsigned int v56; // [rsp+58h] [rbp-9h] BYREF
  struct _VIDSCH_FLIP_QUEUE_ENTRY *v57; // [rsp+60h] [rbp-1h] BYREF
  _QWORD *v58; // [rsp+68h] [rbp+7h]
  _DWORD *v59; // [rsp+70h] [rbp+Fh]
  _UNKNOWN *retaddr; // [rsp+C0h] [rbp+5Fh] BYREF
  char v62; // [rsp+D0h] [rbp+6Fh]
  char v63; // [rsp+D8h] [rbp+77h] BYREF
  char v64; // [rsp+E0h] [rbp+7Fh] BYREF

  result = (__int64)&retaddr;
  v4 = a1;
  v5 = 0;
  if ( *(_DWORD *)(a2 + 40) )
  {
    v6 = 16404;
    while ( 1 )
    {
      v7 = v5 + 400LL;
      v8 = *(_QWORD *)(a2 + 8 * v7);
      v9 = (_QWORD *)(a2 + 8 * v7);
      v58 = v9;
      v55 = v8;
      if ( *(_BYTE *)(v8 + 78788) )
        break;
LABEL_11:
      if ( ++v5 >= *(_DWORD *)(a2 + 40) )
        return result;
    }
    v10 = -1;
    while ( 2 )
    {
      if ( v10 == *(_DWORD *)(a2 + 152) )
        goto LABEL_11;
      v11 = *v9;
      if ( v10 == -1 )
      {
        v12 = *(_QWORD *)(v11 + 32);
      }
      else
      {
        result = v10;
        v12 = *(_QWORD *)(v11 + 8LL * v10 + 40);
      }
      if ( !v12 )
        goto LABEL_9;
      v13 = 1LL;
      v63 = 0;
      v51 = 1;
      while ( 1 )
      {
        v56 = *(_DWORD *)(v12 + 60);
        v14 = v56;
        v15 = v12 + 1384LL * v56;
        result = *(unsigned int *)(v15 + 1172);
        v16 = (struct _VIDSCH_FLIP_QUEUE_ENTRY *)(v15 + 120);
        v57 = (struct _VIDSCH_FLIP_QUEUE_ENTRY *)(v15 + 120);
        if ( (_DWORD)result == 1 || (_DWORD)result == 16 )
          break;
        if ( (unsigned int)result <= 0xE && _bittest(&v6, result) )
        {
          v39 = *(_DWORD *)(v8 + 4);
          if ( v39 == 3
            || v39 == 5
            && (*(_DWORD *)(v15 + 1256) & 0x100) != 0
            && (v40 = *(_DWORD *)(1384LL * *(unsigned int *)(v12 + 68) + v12 + 1172), v8 = v55, v40 != 5)
            && v40 != 15 )
          {
            if ( v56 == *(_DWORD *)(v12 + 64) )
            {
              if ( *(_BYTE *)(a2 + 156) )
              {
                v41 = VidSchiCheckPendingFlipsForThisEntry(
                        (struct _VIDSCH_GLOBAL *)a2,
                        (struct _VIDSCH_PRESENT_INFO *)v8,
                        (struct _VIDSCH_FLIP_QUEUE_ENTRY *)(v15 + 120),
                        (struct VIDSCH_FLIP_QUEUE *)v12);
                v4 = a1;
                if ( v41 )
                {
                  v8 = v55;
                  v13 = v51;
                  goto LABEL_58;
                }
              }
              v64 = 0;
              *(_DWORD *)(v15 + 1172) = 4;
              LODWORD(v48) = v14;
              VidSchiExecuteMmIoFlip(v4, a2, v5, v12, v48, &v63, &v64);
              if ( v64 )
              {
                LODWORD(v48) = v14;
                VidSchiExecuteMmIoFlip(a1, a2, v5, v12, v48, &v63, &v64);
              }
LABEL_106:
              v8 = v55;
              v13 = v51;
              goto LABEL_57;
            }
          }
        }
        else if ( (_DWORD)result != 3 )
        {
          goto LABEL_19;
        }
LABEL_59:
        *(_DWORD *)(v12 + 60) = ((_BYTE)v14 + 1) & 0x3F;
      }
      v17 = *(_QWORD *)(v15 + 1160);
      v59 = (_DWORD *)v17;
      v62 = 1;
      if ( !*(_BYTE *)(v17 + 204) )
      {
        if ( !_InterlockedCompareExchange((volatile signed __int32 *)(v17 + 200), 0, 0) )
        {
          v18 = *((_DWORD *)v16 + 273);
          if ( (*((_DWORD *)v16 + 284) & 0x4000) != 0 )
          {
            v42 = 0;
            if ( v18 )
            {
              do
              {
                v43 = *((_QWORD *)v16 + v42);
                v44 = *((_QWORD *)v16 + v42 + 64);
                if ( !*(_BYTE *)(v43 + 28) )
                {
                  v45 = *(unsigned __int64 **)(v43 + 64);
                  if ( *(_BYTE *)(v43 + 29) )
                  {
                    if ( *v45 < v44 )
                      goto LABEL_60;
                  }
                  else if ( *(_DWORD *)v45 - (int)v44 < 0 )
                  {
                    goto LABEL_60;
                  }
                }
                ++v42;
              }
              while ( v42 < *((_DWORD *)v16 + 273) );
            }
          }
          else if ( v18 )
          {
            v19 = 0;
            v20 = *((_QWORD *)v16 + v18 - 1);
            v21 = 0LL;
            while ( 1 )
            {
              v22 = *(_QWORD *)((char *)v16 + v21);
              if ( v22 )
              {
                v23 = *(_DWORD *)((char *)v16 + v21 + 524);
                v24 = *(_DWORD *)(v22 + 164);
                v25 = v23 <= v24;
                if ( v23 == v24 )
                {
                  if ( *(_DWORD *)((char *)v16 + v21 + 520) > *(_DWORD *)(v22 + 160) )
                    break;
                  v25 = v23 <= v24;
                }
                if ( !v25 )
                  break;
              }
              ++v19;
              v21 += 8LL;
              if ( v19 >= v18 )
              {
                if ( v20 )
                {
                  LOBYTE(v13) = 1;
                  VidSchiUpdateLastCompletedPresentTimestamp(v20, v13, 0);
                  v13 = v51;
                }
                v8 = v55;
                goto LABEL_36;
              }
            }
LABEL_60:
            v37 = *v58;
            v38 = *(unsigned int *)(*v58 + 144LL);
            *(_DWORD *)(v37 + 144) = (v38 + 1) & (*(_DWORD *)(*v58 + 128LL) - 1);
            HIDWORD(v48) = HIDWORD(v12);
            result = VIDSCH_FLIP_QUEUE_HISTORY_ENTRY::UpdateHistory(*(_QWORD *)(v37 + 136) + 112 * v38, 0LL, a2);
            v8 = v55;
            v4 = a1;
            v6 = 16404;
LABEL_19:
            if ( v63 )
            {
              result = VidSchiCompletePendingFlipOnPlane((_DWORD)v4, a2, v5, v12, 9);
              v8 = v55;
              v4 = a1;
              v6 = 16404;
            }
            v9 = v58;
LABEL_9:
            ++v10;
            continue;
          }
LABEL_36:
          if ( (*((_DWORD *)v16 + 284) & 0x8000) != 0 )
          {
            v46 = *(_QWORD *)(v17 + 32);
            if ( *(_BYTE *)(v46 + 56) )
            {
              ((void (__fastcall *)(_QWORD))DxgCoreInterface[23])(*(_QWORD *)(v46 + 8));
              v8 = v55;
              v13 = v51;
            }
          }
        }
        v16 = v57;
        v14 = v56;
      }
      break;
    }
    v26 = *(_DWORD *)(v8 + 4);
    if ( v26 != 3 )
    {
      if ( v26 != 5 )
        goto LABEL_54;
      *((_DWORD *)v16 + 263) = 2;
      v27 = *(_BYTE *)(a2 + 59);
      if ( !(_DWORD)v13 && !*(_BYTE *)(a2 + 59) )
        goto LABEL_54;
      v13 = 0LL;
      v51 = 0;
      if ( v14 != *(_DWORD *)(v12 + 64) )
      {
        if ( !*((_BYTE *)v16 + 1076) )
          goto LABEL_54;
        v27 = *(_BYTE *)(a2 + 59);
      }
      if ( !v27 )
      {
        v16 = v57;
        v14 = v56;
        *((_QWORD *)v57 + 138) = MEMORY[0xFFFFF78000000320];
      }
      if ( VidSchiCheckPendingFlipsForThisEntry(
             (struct _VIDSCH_GLOBAL *)a2,
             (struct _VIDSCH_PRESENT_INFO *)v8,
             v16,
             (struct VIDSCH_FLIP_QUEUE *)v12) )
      {
        goto LABEL_53;
      }
      if ( *((_BYTE *)v16 + 1076) )
      {
        LODWORD(v48) = v14;
        VidSchiRestartQueuedFlip(a1, v59, v5, v12, v48);
      }
      if ( (*((_DWORD *)v16 + 284) & 0x2000) == 0 )
      {
        if ( *(_DWORD *)(v12 + 112) )
        {
          *((_DWORD *)v16 + 263) = 3;
        }
        else
        {
          *((_DWORD *)v16 + 263) = 4;
          v54[0] = 0;
          v62 = 0;
          v28 = *v58;
          v59 = (_DWORD *)v28;
          v29 = *(unsigned int *)(v28 + 144);
          *(_DWORD *)(v28 + 144) = (v29 + 1) & (*(_DWORD *)(v28 + 128) - 1);
          v30 = (struct _VIDSCH_FLIP_QUEUE_ENTRY *)(*(_QWORD *)(v28 + 136) + 112 * v29);
          v57 = v30;
          v31 = (void *)*((_QWORD *)v30 + 9);
          if ( v31 )
          {
            memset(v31, 0, 8LL * *(unsigned int *)(a2 + 152));
            v30 = v57;
          }
          *(_DWORD *)v30 = 0;
          v32 = v12 + 1384LL * v14;
          *((_DWORD *)v30 + 4) = **(_DWORD **)(v32 + 1296) & 0x3FF;
          *((_DWORD *)v30 + 5) = (**(_DWORD **)(v32 + 1296) >> 10) & 0x3FF;
          *((_BYTE *)v30 + 24) = *(_BYTE *)(v12 + 80);
          *((_DWORD *)v30 + 7) = v14;
          PerformanceCounter = KeQueryPerformanceCounter(0LL);
          v34 = v57;
          v35 = v59;
          *((LARGE_INTEGER *)v57 + 1) = PerformanceCounter;
          *((_BYTE *)v34 + 36) = (*(_DWORD *)(v32 + 1256) & 0x20) != 0;
          *((_DWORD *)v34 + 10) = *(_DWORD *)(v32 + 1172);
          *((_DWORD *)v34 + 8) = *(_DWORD *)(v32 + 1176);
          *((_DWORD *)v34 + 11) = *(_DWORD *)(v32 + 1260);
          *((_DWORD *)v34 + 12) = v35[758];
          *((_QWORD *)v34 + 7) = *(_QWORD *)(v32 + 1416);
          *((_QWORD *)v34 + 8) = *(_QWORD *)(v32 + 1424);
          *((_DWORD *)v34 + 21) = v35[773];
          *((_DWORD *)v34 + 20) = v35[772];
          *((_DWORD *)v34 + 22) = *(_DWORD *)(v12 + 56);
          *((_DWORD *)v34 + 23) = *(_DWORD *)(v12 + 60);
          *((_DWORD *)v34 + 24) = *(_DWORD *)(v12 + 64);
          *((_DWORD *)v34 + 25) = *(_DWORD *)(v12 + 68);
          *((_DWORD *)v34 + 26) = *(_DWORD *)(v12 + 72);
          *((_DWORD *)v34 + 27) = *(_DWORD *)(v12 + 76);
          LODWORD(v48) = v14;
          VidSchiExecuteMmIoFlip(a1, a2, v5, v12, v48, &v63, v54);
          if ( v54[0] )
          {
            LODWORD(v48) = v14;
            VidSchiExecuteMmIoFlip(a1, a2, v5, v12, v48, &v63, v54);
          }
        }
        goto LABEL_53;
      }
      if ( *(_BYTE *)(a2 + 59) )
      {
        *((_DWORD *)v16 + 263) = 4;
      }
      else
      {
        VidSchiSelectPresentAtFlip(a1, (struct _VIDSCH_GLOBAL *)a2, v5, (struct VIDSCH_FLIP_QUEUE *)v12, &v56, &v57);
        v14 = v56;
        v16 = v57;
      }
      if ( *((_DWORD *)v16 + 263) != 4 )
      {
LABEL_53:
        v8 = v55;
        v13 = 0LL;
LABEL_54:
        v36 = v62;
        goto LABEL_55;
      }
      v53 = 0;
      LODWORD(v48) = v14;
      v36 = 0;
      VidSchiUpdateFlipQueueHistory(0LL, a2, v5, v12, v48);
      LODWORD(v50) = v14;
      VidSchiExecuteMmIoFlip(a1, a2, v5, v12, v50, &v63, &v53);
      if ( !v53 )
        goto LABEL_101;
      v47 = &v53;
      goto LABEL_100;
    }
    if ( v14 == *(_DWORD *)(v12 + 64) )
    {
      if ( !*(_BYTE *)(a2 + 156)
        || !VidSchiCheckPendingFlipsForThisEntry(
              (struct _VIDSCH_GLOBAL *)a2,
              (struct _VIDSCH_PRESENT_INFO *)v8,
              v16,
              (struct VIDSCH_FLIP_QUEUE *)v12) )
      {
        *((_DWORD *)v16 + 263) = 4;
        v52 = 0;
        LODWORD(v48) = v14;
        v36 = 0;
        VidSchiUpdateFlipQueueHistory(0LL, a2, v5, v12, v48);
        LODWORD(v49) = v14;
        VidSchiExecuteMmIoFlip(a1, a2, v5, v12, v49, &v63, &v52);
        if ( !v52 )
        {
LABEL_101:
          v8 = v55;
          v13 = v51;
          goto LABEL_55;
        }
        v47 = &v52;
LABEL_100:
        LODWORD(v48) = v14;
        VidSchiExecuteMmIoFlip(a1, a2, v5, v12, v48, &v63, v47);
        goto LABEL_101;
      }
      v8 = v55;
      v13 = v51;
    }
    v36 = 1;
    *((_DWORD *)v16 + 263) = 2;
    if ( *(_BYTE *)(a2 + 59) )
    {
LABEL_103:
      if ( *((_DWORD *)v16 + 263) == 2 )
      {
        VidSchiUpdateInterruptTargetsForAllPlanes((struct _VIDSCH_GLOBAL *)a2, v5);
        v8 = v55;
        v13 = v51;
      }
LABEL_56:
      if ( v36 )
      {
        LODWORD(v48) = v14;
        VidSchiUpdateFlipQueueHistory(0LL, a2, v5, v12, v48);
        goto LABEL_106;
      }
LABEL_57:
      v4 = a1;
LABEL_58:
      v6 = 16404;
      goto LABEL_59;
    }
    v16 = v57;
    v14 = v56;
    *((_QWORD *)v57 + 138) = MEMORY[0xFFFFF78000000320];
LABEL_55:
    if ( !*(_BYTE *)(a2 + 59) )
      goto LABEL_56;
    goto LABEL_103;
  }
  return result;
}
