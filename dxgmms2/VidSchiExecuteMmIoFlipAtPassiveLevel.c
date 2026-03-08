/*
 * XREFs of VidSchiExecuteMmIoFlipAtPassiveLevel @ 0x1C0010D10
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessHwQueues@HwQueueStagingList@@QEAAXXZ @ 0x1C0006790 (-ProcessHwQueues@HwQueueStagingList@@QEAAXXZ.c)
 *     ?VidSchiLogMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEBU_VIDSCH_CALL_EXECUTE_FLIP@@W4_VIDSCH_FLIP_STATUS@@I_K@Z @ 0x1C000A7D0 (-VidSchiLogMmIoFlipMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEBU.c)
 *     VidSchiSetupMmIoFlipMultiPlaneOverlay3 @ 0x1C000C820 (VidSchiSetupMmIoFlipMultiPlaneOverlay3.c)
 *     VidSchiProcessVsyncCompletedFlipEntry @ 0x1C000CDD0 (VidSchiProcessVsyncCompletedFlipEntry.c)
 *     VidSchiCompleteFlipEntry @ 0x1C000D060 (VidSchiCompleteFlipEntry.c)
 *     VidSchiUnreferenceDisplayingAllocationsForThisEntry @ 0x1C000E0D4 (VidSchiUnreferenceDisplayingAllocationsForThisEntry.c)
 *     VidSchiReferenceDisplayingAllocationsForThisEntry @ 0x1C000E600 (VidSchiReferenceDisplayingAllocationsForThisEntry.c)
 *     ?VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@K@Z @ 0x1C000F7FC (-VidSchiUpdateFlipQueueHistory@@YAXW4_VIDSCH_FLIP_QUEUE_HISTORY_EVENT@@PEAU_VIDSCH_GLOBAL@@IPEAU.c)
 *     ??EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ @ 0x1C001124C (--EVIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR@@QEAAXXZ.c)
 *     VidSchiComputeFlipEntryStatusAfterFlip @ 0x1C0011290 (VidSchiComputeFlipEntryStatusAfterFlip.c)
 *     ?VidSchiUpdateFlipTelemetryStats@@YAXPEAU_VIDSCH_PROCESS@@PEAU_VIDSCH_CALL_EXECUTE_FLIP@@PEAU_VIDSCH_PRESENT_INFO@@@Z @ 0x1C00112D4 (-VidSchiUpdateFlipTelemetryStats@@YAXPEAU_VIDSCH_PROCESS@@PEAU_VIDSCH_CALL_EXECUTE_FLIP@@PEAU_VI.c)
 *     ?NotifyOnFlip@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C001130C (-NotifyOnFlip@VIDMM_GLOBAL@@QEAAXXZ.c)
 *     ?Acquire@AcquireSpinLock@@QEAAXXZ @ 0x1C0013414 (-Acquire@AcquireSpinLock@@QEAAXXZ.c)
 *     ?Release@AcquireSpinLock@@QEAAXXZ @ 0x1C00134D8 (-Release@AcquireSpinLock@@QEAAXXZ.c)
 *     VidSchiPropagatePresentHistoryToken @ 0x1C001665C (VidSchiPropagatePresentHistoryToken.c)
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001AC80 (memset.c)
 *     ?GetFlipManagerAuxiliaryPresentInfo@@YAPEAU_D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO@@PEAU_D3DKMT_AUXILIARYPRESENTINFO@@@Z @ 0x1C003478C (-GetFlipManagerAuxiliaryPresentInfo@@YAPEAU_D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO@@PEAU_D3DKMT.c)
 *     McTemplateK0pqqtq_EtwWriteTransfer @ 0x1C0038E98 (McTemplateK0pqqtq_EtwWriteTransfer.c)
 *     ?VidSchiCancelAndRequeueIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@I@Z @ 0x1C0048450 (-VidSchiCancelAndRequeueIndependentFlips@@YAXPEAU_VIDSCH_GLOBAL@@I@Z.c)
 *     ?VidSchiIncrementPendingFlipsForFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x1C0049498 (-VidSchiIncrementPendingFlipsForFlipEntry@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU.c)
 *     ?VidSchiKeepInterruptTargetEnabledForFlip@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@PEAU_VIDSCH_PRESENT_INFO@@@Z @ 0x1C0049770 (-VidSchiKeepInterruptTargetEnabledForFlip@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@.c)
 *     ?VidSchiSetNextFlipEarliestIdealTime@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@@Z @ 0x1C004A744 (-VidSchiSetNextFlipEarliestIdealTime@@YAXPEAU_VIDSCH_GLOBAL@@IPEAUVIDSCH_FLIP_QUEUE@@PEAU_VIDSCH.c)
 *     ?VidSchiUpdateHwPresentTimeForImmediateFlip@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY@@I@Z @ 0x1C004AF34 (-VidSchiUpdateHwPresentTimeForImmediateFlip@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_FLIP_QUEUE_ENTRY.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall VidSchiExecuteMmIoFlipAtPassiveLevel(__int64 a1)
{
  __int64 v1; // rsi
  __int64 v2; // rax
  __int64 v3; // r12
  unsigned __int8 v4; // r15
  bool v5; // zf
  __int64 v6; // rdi
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 v9; // rbx
  int v10; // eax
  int v11; // r8d
  char v12; // r10
  __int64 *v13; // rax
  unsigned int v14; // edx
  unsigned int v15; // r8d
  unsigned int v16; // edx
  char v17; // cl
  int v18; // eax
  unsigned int v19; // r9d
  char v20; // cl
  int v21; // eax
  __int64 v22; // r10
  _DWORD *v23; // rcx
  int v24; // edx
  int v25; // eax
  int v26; // ebx
  __int64 v27; // rdx
  __int64 v28; // rcx
  int v29; // eax
  struct _VIDSCH_FLIP_QUEUE_ENTRY *v30; // rbx
  __int64 v31; // rcx
  __int64 v32; // rax
  unsigned int v33; // r13d
  __int64 v34; // rcx
  int v35; // eax
  AcquireSpinLock *v36; // rcx
  _DWORD *v37; // rcx
  int v38; // eax
  int v39; // edx
  DWORD v40; // ecx
  int v41; // eax
  __int64 i; // rbx
  __int64 v43; // rcx
  __int64 v44; // rcx
  struct _D3DKMT_FLIPMANAGER_AUXILIARYPRESENTINFO *FlipManagerAuxiliaryPresentInfo; // rax
  int v46; // [rsp+68h] [rbp-A0h] BYREF
  unsigned int v47; // [rsp+6Ch] [rbp-9Ch]
  __int64 v48; // [rsp+70h] [rbp-98h] BYREF
  __int64 v49; // [rsp+78h] [rbp-90h] BYREF
  __int64 v50; // [rsp+80h] [rbp-88h] BYREF
  __int64 *v51; // [rsp+88h] [rbp-80h]
  unsigned int v52; // [rsp+90h] [rbp-78h]
  unsigned int v53; // [rsp+94h] [rbp-74h]
  int v54; // [rsp+98h] [rbp-70h]
  unsigned int v55; // [rsp+9Ch] [rbp-6Ch]
  unsigned int v56; // [rsp+A0h] [rbp-68h]
  _QWORD v57[2]; // [rsp+A8h] [rbp-60h] BYREF
  char v58; // [rsp+B8h] [rbp-50h]
  __int64 v59[2]; // [rsp+C8h] [rbp-40h] BYREF
  int v60; // [rsp+D8h] [rbp-30h]
  int v61; // [rsp+DCh] [rbp-2Ch]
  __int64 v62; // [rsp+E0h] [rbp-28h]
  int v63; // [rsp+E8h] [rbp-20h]
  int v64; // [rsp+ECh] [rbp-1Ch]
  __int64 v65; // [rsp+F0h] [rbp-18h]
  __int64 v66; // [rsp+F8h] [rbp-10h]
  __int64 v67; // [rsp+100h] [rbp-8h]
  char v68[8]; // [rsp+108h] [rbp+0h] BYREF
  __int64 v69[2]; // [rsp+110h] [rbp+8h] BYREF
  _QWORD v70[4]; // [rsp+120h] [rbp+18h] BYREF
  __int16 v71; // [rsp+140h] [rbp+38h]
  LARGE_INTEGER v72[268]; // [rsp+148h] [rbp+40h] BYREF
  __int64 v73[2]; // [rsp+9A8h] [rbp+8A0h] BYREF
  __int128 v74; // [rsp+9B8h] [rbp+8B0h]
  __int64 v75; // [rsp+9C8h] [rbp+8C0h]
  __int64 v76[10]; // [rsp+9D8h] [rbp+8D0h] BYREF

  v1 = *(_QWORD *)a1;
  v2 = *(unsigned int *)(a1 + 8);
  v3 = *(unsigned int *)(a1 + 12);
  v4 = *(_BYTE *)(a1 + 24);
  v5 = *(_DWORD *)(*(_QWORD *)a1 + 3012LL) == 0;
  v47 = *(_DWORD *)(a1 + 8);
  if ( v5 )
  {
    v6 = *(_QWORD *)(a1 + 16);
    v7 = *(_QWORD *)(v1 + 8 * v3 + 3200);
    v8 = 1384 * v2;
    v9 = 1384 * v2 + v6 + 120;
    v49 = v9;
    memset(v72, 0, 0x858uLL);
    memset(v76, 0, sizeof(v76));
    LOWORD(v56) = 0;
    v75 = 0LL;
    v50 = v1 + 1728;
    *(_OWORD *)v69 = 0LL;
    *(_OWORD *)v73 = 0LL;
    v74 = 0LL;
    AcquireSpinLock::Acquire((AcquireSpinLock *)&v50);
    VidSchiSetupMmIoFlipMultiPlaneOverlay3(
      (struct _VIDSCH_GLOBAL *)v1,
      v9,
      v3,
      (__int64)v72,
      v4,
      (__int64)v76,
      (__int64)v69,
      (unsigned __int64)v73);
    AcquireSpinLock::Release((AcquireSpinLock *)&v50);
    v72[1].HighPart |= 8u;
    v10 = DxgCoreInterface[63](
            *(ADAPTER_DISPLAY **)(*(_QWORD *)(v72[0].QuadPart + 16) + 2920LL),
            (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)&v72[1]);
    if ( v10 == -1073741267 )
    {
      if ( ((v72[2].LowPart >> 1) & 1) != 0 )
      {
        if ( Microsoft_Windows_DxgKrnlEnableBits < 0 )
          McTemplateK0pqqtq_EtwWriteTransfer(
            (v72[2].LowPart >> 1) & 1,
            v10,
            v11,
            *(_QWORD *)(v1 + 16),
            v3,
            *(_DWORD *)(v8 + v6 + 1168),
            (v72[2].LowPart & 2) != 0,
            45);
        LOWORD(v63) = 0;
        v59[0] = v1 + 1728;
        AcquireSpinLock::Acquire((AcquireSpinLock *)v59);
        v37 = *(_DWORD **)(v8 + v6 + 1296);
        v51 = &v50;
        v50 = (__int64)&v50;
        v38 = *(_DWORD *)(v8 + v6 + 1256);
        LOBYTE(v52) = 0;
        if ( (v38 & 0x10) != 0 )
          v39 = ((unsigned __int16)*v37 | (unsigned __int16)(*v37 >> 10)) & 0x3FF;
        else
          v39 = (1 << *(_DWORD *)(v1 + 152)) - 1;
        *(_DWORD *)(v7 + 3092) &= ~v39;
        *(_DWORD *)(v8 + v6 + 1172) = 14;
        *(_DWORD *)(v8 + v6 + 1256) ^= (*(_DWORD *)(v8 + v6 + 1256) ^ (v72[2].LowPart << 16)) & 0x10000;
        v40 = *(_DWORD *)(v8 + v6 + 1256) ^ (*(_DWORD *)(v8 + v6 + 1256) ^ (v72[2].LowPart << 15)) & 0x20000;
        *(_DWORD *)(v8 + v6 + 1256) = v40;
        *(_DWORD *)(v8 + v6 + 1256) = v40 ^ (v40 ^ (v72[2].LowPart << 15)) & 0x40000;
        VidSchiUpdateFlipQueueHistory(5u, v1, v3);
        v41 = *(_DWORD *)(v8 + v6 + 1256);
        if ( (v41 & 0x20000) != 0 )
        {
          if ( (v41 & 0x40000) != 0 )
            *(_QWORD *)(v1 + 3552) = v9;
          else
            *(_QWORD *)(v7 + 120) = v9;
          if ( *(_BYTE *)(v6 + 80) )
          {
            if ( _bittest((const signed __int32 *)(v8 + v6 + 1256), 0x12u) )
            {
              for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v1 + 40); i = (unsigned int)(i + 1) )
              {
                v43 = *(_QWORD *)(v1 + 8 * i + 3200);
                if ( v43 && *(_DWORD *)(v43 + 3088) )
                  VidSchiCancelAndRequeueIndependentFlips((struct _VIDSCH_GLOBAL *)v1, i);
              }
              v9 = v49;
            }
            else
            {
              VidSchiCancelAndRequeueIndependentFlips((struct _VIDSCH_GLOBAL *)v1, v3);
            }
          }
        }
        VidSchiKeepInterruptTargetEnabledForFlip(
          (struct _VIDSCH_GLOBAL *)v1,
          (struct _VIDSCH_FLIP_QUEUE_ENTRY *)v9,
          (struct _VIDSCH_PRESENT_INFO *)v7);
        if ( !(_BYTE)v52 )
          HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)&v50);
        v36 = (AcquireSpinLock *)v59;
        goto LABEL_38;
      }
    }
    else
    {
      LODWORD(v9) = 0;
      if ( !v10 )
      {
        v71 = 0;
        v70[0] = v1 + 1728;
        AcquireSpinLock::Acquire((AcquireSpinLock *)v70);
        v58 = 0;
        v57[1] = v57;
        v12 = -1;
        v57[0] = v57;
        if ( (*(_DWORD *)(v8 + v6 + 1256) & 0x1000) != 0 )
        {
LABEL_17:
          if ( *(_BYTE *)(v1 + 59) )
            *(LARGE_INTEGER *)(v8 + v6 + 1432) = KeQueryPerformanceCounter(0LL);
          v23 = *(_DWORD **)(v8 + v6 + 1296);
          if ( (*(_DWORD *)(v8 + v6 + 1256) & 0x10) != 0 )
          {
            v24 = ((unsigned __int16)*v23 | (unsigned __int16)(*v23 >> 10)) & 0x3FF;
          }
          else
          {
            v23 = (_DWORD *)*(unsigned int *)(v1 + 152);
            v24 = (1 << (char)v23) - 1;
          }
          *(_DWORD *)(v7 + 3092) &= ~v24;
          v25 = *(_DWORD *)(v8 + v6 + 1256);
          if ( (v25 & 0x20) != 0 && *(_QWORD *)(v8 + v6 + 1272) && (v25 & 0x100000) == 0 )
          {
            FlipManagerAuxiliaryPresentInfo = GetFlipManagerAuxiliaryPresentInfo(*(struct _D3DKMT_AUXILIARYPRESENTINFO **)(v8 + v6 + 1448));
            if ( FlipManagerAuxiliaryPresentInfo )
              *((_DWORD *)FlipManagerAuxiliaryPresentInfo + 7) = 0;
            VidSchiPropagatePresentHistoryToken(
              (struct _VIDSCH_GLOBAL *)v1,
              *(PKSPIN_LOCK *)(v8 + v6 + 1264),
              *(struct _D3DKMT_PRESENTHISTORYTOKEN **)(v8 + v6 + 1272),
              1,
              (*(_DWORD *)(v8 + v6 + 1256) & 0x40) != 0,
              0,
              0,
              *(_QWORD *)(v8 + v6 + 1280),
              *(_QWORD *)(v8 + v6 + 1296),
              0LL,
              (v8 + v6 + 1456) & -(__int64)(*(_QWORD *)(v8 + v6 + 1456) != 0LL),
              0);
          }
          LODWORD(v48) = 0;
          VidSchiComputeFlipEntryStatusAfterFlip(v23, v72, &v48);
          VidSchiUpdateFlipTelemetryStats(
            *(struct _VIDSCH_PROCESS **)(*(_QWORD *)(v8 + v6 + 1160) + 40LL),
            (struct _VIDSCH_CALL_EXECUTE_FLIP *)v72,
            (struct _VIDSCH_PRESENT_INFO *)v7);
          v26 = v48;
          VidSchiLogMmIoFlipMultiPlaneOverlay3(
            v1,
            (_DWORD *)(v8 + v6 + 120),
            v72,
            v48,
            *(_DWORD *)(v8 + v6 + 1192),
            *(_QWORD *)(v8 + v6 + 1416));
          *(_DWORD *)(v8 + v6 + 1172) = v26;
          if ( v26 == 11 )
          {
            v28 = 1384LL * *(unsigned int *)(v6 + 68);
            LODWORD(v48) = 0;
            v29 = *(_DWORD *)(v28 + v6 + 1172);
            if ( v29 == 5 || v29 == 15 )
            {
              LODWORD(v49) = 0;
              LOBYTE(v46) = 0;
              v63 = ((_BYTE)v47 - 1) & 0x3F;
              v65 = *(_QWORD *)(v7 + 44192);
              v66 = *(_QWORD *)(v7 + 44208);
              v59[1] = 0LL;
              v61 = 0;
              v64 = 0;
              v67 = 0LL;
              v59[0] = v1;
              v60 = v3;
              v62 = v6;
              VidSchiProcessVsyncCompletedFlipEntry((__int64)v57, v59, (__int64)v68, &v49, &v48, &v46);
            }
            v30 = (struct _VIDSCH_FLIP_QUEUE_ENTRY *)(v8 + v6 + 120);
            if ( *(_BYTE *)(v1 + 59) )
              VidSchiUpdateHwPresentTimeForImmediateFlip((struct _VIDSCH_GLOBAL *)v1, v30, v3);
            v31 = *(_QWORD *)(v7 + 44208);
            *(_QWORD *)(v8 + v6 + 1248) = *(unsigned int *)(v7 + 44192);
            v32 = *(_QWORD *)(v8 + v6 + 1424);
            if ( !v32 )
              v32 = v31;
            *(_QWORD *)(v8 + v6 + 1232) = v32;
            VidSchiUnreferenceDisplayingAllocationsForThisEntry((struct HwQueueStagingList *)v57, v27, v7, (__int64)v30);
            VidSchiReferenceDisplayingAllocationsForThisEntry(
              (struct HwQueueStagingList *)v57,
              v1,
              (_WORD *)v7,
              (__int64)v30);
            v33 = v47;
            VidSchiCompleteFlipEntry((__int64)v57, v1, v3, v6, v47, v47, 0, 0LL);
          }
          else
          {
            v30 = (struct _VIDSCH_FLIP_QUEUE_ENTRY *)(v8 + v6 + 120);
            VidSchiIncrementPendingFlipsForFlipEntry(
              (struct _VIDSCH_GLOBAL *)v1,
              (struct _VIDSCH_PRESENT_INFO *)v7,
              v30);
            v33 = v47;
            if ( !*(_BYTE *)(v1 + 59) )
              *(_QWORD *)(v8 + v6 + 1224) = MEMORY[0xFFFFF78000000320];
          }
          v34 = 1384LL * *(unsigned int *)(v6 + 68);
          *(_DWORD *)(v6 + 72) = v33;
          v35 = *(_DWORD *)(v34 + v6 + 1172);
          if ( v35 != 5 && v35 != 15 )
            *(_DWORD *)(v6 + 68) = v33;
          *(_DWORD *)(v6 + 64) = ((_BYTE)v33 + 1) & 0x3F;
          VidSchiUpdateFlipQueueHistory(6u, v1, v3);
          if ( *(_BYTE *)(v1 + 59) )
            VidSchiSetNextFlipEarliestIdealTime((struct _VIDSCH_GLOBAL *)v1, v3, (struct VIDSCH_FLIP_QUEUE *)v6, v30);
          else
            *(_DWORD *)(v6 + 112) = *(_DWORD *)(v8 + v6 + 1192);
          VIDMM_GLOBAL::NotifyOnFlip(*(VIDMM_GLOBAL **)(*(_QWORD *)(v1 + 8) + 768LL));
          --*(_DWORD *)(*(_QWORD *)(v1 + 248) + 808LL);
          VidSchiUpdateFlipQueueHistory(1u, v1, v3);
          if ( !v58 )
            HwQueueStagingList::ProcessHwQueues((HwQueueStagingList *)v57);
          v36 = (AcquireSpinLock *)v70;
LABEL_38:
          AcquireSpinLock::Release(v36);
          return;
        }
        v13 = *(__int64 **)(v8 + v6 + 1296);
        v50 = v1;
        v51 = v13;
        v14 = *(_DWORD *)v13;
        v15 = *(_DWORD *)v13 & 0x3FF;
        v52 = v15;
        if ( *(_BYTE *)(v1 + 156) )
        {
          v16 = (v14 >> 10) & 0x3FF;
          v53 = v16;
LABEL_7:
          LODWORD(v49) = v9 & v49;
          v17 = v12;
          v5 = !_BitScanForward((unsigned int *)&v18, v15);
          v54 = v9;
          if ( !v5 )
            v17 = v18;
          LODWORD(v49) = v9 & v49;
          v19 = v17;
          v20 = v12;
          v5 = !_BitScanForward((unsigned int *)&v21, v16);
          v55 = v19;
          if ( !v5 )
            v20 = v21;
          v22 = (unsigned int)v20;
          v56 = v20;
          while ( v15 || v16 )
          {
            if ( v19 < (unsigned int)v22 )
              v22 = v19;
            *(_QWORD *)(288 * v22 + *(_QWORD *)(v1 + 8 * v3 + 3200) + 392) = *(_QWORD *)((unsigned int)v9
                                                                                       * ((8
                                                                                         * *(_DWORD *)(*(_QWORD *)(v8 + v6 + 1296) + 8LL)
                                                                                         + 231) & 0xFFFFFFF8)
                                                                                       + *(_QWORD *)(v8 + v6 + 1296)
                                                                                       + 24LL);
            VIDSCH_FLIP_MULTIPLANE_OVERLAY_ITERATOR::operator++(&v50);
            v16 = v53;
            v15 = v52;
            v22 = v56;
            v19 = v55;
            LODWORD(v9) = v54;
          }
          goto LABEL_17;
        }
LABEL_65:
        v16 = v9;
        v53 = v9;
        goto LABEL_7;
      }
    }
    v44 = *(_QWORD *)(v1 + 16);
    g_DxgMmsBugcheckExportIndex = 1;
    WdLogSingleEntry5(0LL, 281LL, 11LL, v10, v72, v44);
    __debugbreak();
    goto LABEL_65;
  }
  WdLogSingleEntry2(3LL, v1, v3);
}
