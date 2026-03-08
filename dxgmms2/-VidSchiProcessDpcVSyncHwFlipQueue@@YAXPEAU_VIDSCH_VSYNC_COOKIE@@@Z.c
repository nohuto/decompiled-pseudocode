/*
 * XREFs of ?VidSchiProcessDpcVSyncHwFlipQueue@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x1C0049A8C
 * Callers:
 *     VidSchDdiNotifyDpc @ 0x1C000A580 (VidSchDdiNotifyDpc.c)
 *     VidSchDdiNotifyDpcWorker @ 0x1C003A0D4 (VidSchDdiNotifyDpcWorker.c)
 * Callees:
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C0006790 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     ??1HwQueueStagingList@@QEAA@XZ @ 0x1C00067E0 (--1HwQueueStagingList@@QEAA@XZ.c)
 *     ?VidSchiRecordVSyncTiming@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x1C0009F90 (-VidSchiRecordVSyncTiming@@YAXPEAU_VIDSCH_VSYNC_COOKIE@@@Z.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0013414 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C00134D8 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001AC80 (memset.c)
 *     ?SignalVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@IK_N@Z @ 0x1C0034D54 (-SignalVerticalBlankEvent@ADAPTER_DISPLAY@@QEAAXPEAVDXGADAPTER@@IK_N@Z.c)
 *     ?VidSchiTraceHwFlipQueueLogUpdate@@YAXPEAU_VIDSCH_GLOBAL@@_KIIK@Z @ 0x1C0037400 (-VidSchiTraceHwFlipQueueLogUpdate@@YAXPEAU_VIDSCH_GLOBAL@@_KIIK@Z.c)
 *     McTemplateK0pqXR1qqqXR5XR1_EtwWriteTransfer @ 0x1C003830C (McTemplateK0pqXR1qqqXR5XR1_EtwWriteTransfer.c)
 *     McTemplateK0pqXR1qqqXR5qQR7tXR1_EtwWriteTransfer @ 0x1C00383FC (McTemplateK0pqXR1qqqXR5qQR7tXR1_EtwWriteTransfer.c)
 *     McTemplateK0pqxqqipqx_EtwWriteTransfer @ 0x1C0039434 (McTemplateK0pqxqqipqx_EtwWriteTransfer.c)
 *     ?VidSchiCompleteFlipsFromLatestPresentId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IIPEA_KPEAIPEA_NQEAKPEAPEAU_VIDSCH_DEVICE@@@Z @ 0x1C004900C (-VidSchiCompleteFlipsFromLatestPresentId@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@IIPEA_K.c)
 *     ?VidSchiStallingFlipEntryUnblocked@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAI@Z @ 0x1C004A7BC (-VidSchiStallingFlipEntryUnblocked@@YA_NPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSC.c)
 *     ?VidSchiSubmitNextFlipRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C004AB60 (-VidSchiSubmitNextFlipRange@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiUpdateInterruptTargetsForAllPlanes@@YAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C004B0C0 (-VidSchiUpdateInterruptTargetsForAllPlanes@@YAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiUpdateLastPresentIdFromVSyncCookie@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_VSYNC_COOKIE@@QEAK@Z @ 0x1C004B174 (-VidSchiUpdateLastPresentIdFromVSyncCookie@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEA.c)
 */

void __fastcall VidSchiProcessDpcVSyncHwFlipQueue(struct _VIDSCH_VSYNC_COOKIE *a1)
{
  __int64 v1; // rdi
  unsigned int v3; // eax
  __int64 v4; // rsi
  __int64 v5; // r14
  __int64 v6; // rdx
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // r9
  volatile __int32 *v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rdx
  struct _VIDSCH_DEVICE *v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  unsigned int i; // r15d
  __int64 v17; // r9
  bool v18; // zf
  struct _VIDSCH_FLIP_QUEUE_ENTRY *v19; // r8
  void (__fastcall *v20)(_QWORD, _QWORD); // rax
  unsigned __int64 *v21; // [rsp+20h] [rbp-E0h]
  bool *v22; // [rsp+30h] [rbp-D0h]
  unsigned int *v23; // [rsp+38h] [rbp-C8h]
  struct _VIDSCH_DEVICE **v24; // [rsp+40h] [rbp-C0h]
  __int64 v25; // [rsp+50h] [rbp-B0h]
  __int64 v26; // [rsp+70h] [rbp-90h] BYREF
  struct _VIDSCH_DEVICE *v27; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v28[2]; // [rsp+80h] [rbp-80h] BYREF
  char v29; // [rsp+90h] [rbp-70h]
  _QWORD v30[4]; // [rsp+98h] [rbp-68h] BYREF
  __int16 v31; // [rsp+B8h] [rbp-48h]
  unsigned int v32[4]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v33; // [rsp+D0h] [rbp-30h]
  __int64 v34; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v35[10]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v36[10]; // [rsp+140h] [rbp+40h] BYREF
  _QWORD v37[10]; // [rsp+190h] [rbp+90h] BYREF

  v1 = *((_QWORD *)a1 + 6);
  HIDWORD(v26) = 0;
  memset(v35, 0, sizeof(v35));
  v34 = 0LL;
  v3 = *(_DWORD *)(v1 + 152);
  *(_OWORD *)v32 = 0LL;
  v33 = 0LL;
  if ( v3 )
    memset(v32, -1, 4LL * v3);
  v4 = *((unsigned int *)a1 + 27);
  if ( (_DWORD)v4 != -1 && (unsigned int)v4 < *(_DWORD *)(v1 + 40) )
  {
    _mm_lfence();
    v5 = *(_QWORD *)(v1 + 8 * v4 + 3200);
    v30[0] = v1 + 1728;
    LOBYTE(v26) = 0;
    v27 = 0LL;
    v31 = 0;
    AcquireSpinLock::Acquire((Acquire *)v30);
    v29 = 0;
    v28[1] = v28;
    v28[0] = v28;
    VidSchiRecordVSyncTiming(a1, v6, v7, v8);
    v9 = (volatile __int32 *)v1;
    if ( *(_BYTE *)(v1 + 2212) )
      v9 = (volatile __int32 *)(v1 + 4 * v4);
    _InterlockedExchange(v9 + 568, 0);
    if ( (*(int *)(v5 + 4) >= 4 || *(_BYTE *)(v1 + 156)) && *((_DWORD *)a1 + 4) == 18 )
    {
      VidSchiUpdateLastPresentIdFromVSyncCookie((struct _VIDSCH_GLOBAL *)v9, (struct _VIDSCH_PRESENT_INFO *)v5, a1, v32);
      VidSchiCompleteFlipsFromLatestPresentId(
        (struct HwQueueStagingList *)v28,
        (struct _VIDSCH_GLOBAL *)v1,
        v4,
        *((_DWORD *)a1 + 29),
        v35,
        (unsigned int *)&v26 + 1,
        (bool *)&v26,
        v32,
        &v27);
      if ( bTracingEnabled )
      {
        if ( (*((_BYTE *)a1 + 124) & 1) == 0 )
        {
          if ( v27 )
            v11 = *(unsigned int *)(v1 + 2544);
          else
            v11 = 0LL;
          if ( v27 )
          {
            v12 = (struct _VIDSCH_DEVICE *)*((_QWORD *)v27 + 1);
            if ( !v12 )
              v12 = v27;
          }
          else
          {
            v12 = 0LL;
          }
          if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
          {
            LODWORD(v23) = *((_DWORD *)a1 + 22);
            LODWORD(v22) = *((_DWORD *)a1 + 27);
            LODWORD(v21) = *((_DWORD *)a1 + 28);
            McTemplateK0pqxqqipqx_EtwWriteTransfer(
              (__int64)v12,
              v11,
              v10,
              *(_QWORD *)(v1 + 16),
              v21,
              *((_QWORD *)a1 + 16),
              v22,
              v23,
              *((_QWORD *)a1 + 7),
              v12,
              v11,
              v35[0]);
          }
        }
        if ( *((_DWORD *)a1 + 4) == 18 )
        {
          memset(v37, 0, sizeof(v37));
          memset(v36, 0, sizeof(v36));
          for ( i = 0; i < *((_DWORD *)a1 + 32); ++i )
          {
            v17 = *((unsigned int *)a1 + i + 33);
            v14 = 288 * v17;
            v18 = (byte_1C00769C4 & 1) == 0;
            v37[v17] = *(_QWORD *)(288 * v17 + v5 + 400);
            v36[v17] = *(_QWORD *)(288 * v17 + v5 + 424);
            if ( !v18 && v32[v17] != -1 )
              VidSchiTraceHwFlipQueueLogUpdate((struct _VIDSCH_GLOBAL *)v1, *((_QWORD *)a1 + 11), v4, v17, v32[v17]);
          }
          if ( (*((_BYTE *)a1 + 124) & 1) != 0 )
          {
            if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
            {
              LODWORD(v24) = HIDWORD(v26);
              LODWORD(v23) = *((_DWORD *)a1 + 22);
              LODWORD(v22) = *((_DWORD *)a1 + 27);
              LODWORD(v21) = *(_DWORD *)(v1 + 152);
              McTemplateK0pqXR1qqqXR5XR1_EtwWriteTransfer(
                v14,
                v13,
                v15,
                *(_QWORD *)(v1 + 16),
                v21,
                v37,
                v22,
                v23,
                v24,
                v35,
                v36);
            }
          }
          else if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
          {
            LODWORD(v25) = 0;
            LODWORD(v24) = HIDWORD(v26);
            LODWORD(v23) = *((_DWORD *)a1 + 22);
            LODWORD(v22) = *((_DWORD *)a1 + 27);
            LODWORD(v21) = *(_DWORD *)(v1 + 152);
            McTemplateK0pqXR1qqqXR5qQR7tXR1_EtwWriteTransfer(
              (__int64)v36,
              v13,
              v15,
              *(_QWORD *)(v1 + 16),
              v21,
              v37,
              v22,
              v23,
              v24,
              v35,
              v25,
              0LL,
              *((_BYTE *)a1 + 104) == 0,
              v36,
              v26);
          }
        }
      }
      v19 = *(struct _VIDSCH_FLIP_QUEUE_ENTRY **)(v5 + 120);
      if ( v19
        && VidSchiStallingFlipEntryUnblocked((struct _VIDSCH_GLOBAL *)v1, (struct _VIDSCH_PRESENT_INFO *)v5, v19, 0LL) )
      {
        *(_QWORD *)(v5 + 120) = 0LL;
      }
      VidSchiSubmitNextFlipRange((struct HwQueueStagingList *)v28, (struct _VIDSCH_GLOBAL *)v1, v4);
    }
    VidSchiUpdateInterruptTargetsForAllPlanes((struct _VIDSCH_GLOBAL *)v1, v4);
    HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v28);
    AcquireSpinLock::Release((AcquireSpinLock *)v30);
    if ( (*((_BYTE *)a1 + 124) & 1) == 0 )
    {
      ADAPTER_DISPLAY::SignalVerticalBlankEvent(
        *(ADAPTER_DISPLAY **)(*(_QWORD *)(v1 + 16) + 2920LL),
        *(struct DXGADAPTER **)(v1 + 16),
        v4,
        *(_DWORD *)(v5 + 44192),
        *((_BYTE *)a1 + 104) == 0);
      ((void (*)(void))DxgCoreInterface[3])();
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))DxgCoreInterface[83])(
        *(_QWORD *)(*(_QWORD *)(v1 + 16) + 404LL),
        *((unsigned int *)a1 + 28),
        *(unsigned int *)(v5 + 44192),
        *(_QWORD *)(v5 + 44208));
      v20 = *(void (__fastcall **)(_QWORD, _QWORD))(v1 + 3104);
      if ( v20 )
        v20(*(_QWORD *)(v1 + 3120), (unsigned int)v4);
    }
    HwQueueStagingList::~HwQueueStagingList((HwQueueStagingList *)v28);
    AcquireSpinLock::Release((AcquireSpinLock *)v30);
  }
}
