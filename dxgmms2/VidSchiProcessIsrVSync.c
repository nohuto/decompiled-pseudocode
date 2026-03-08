/*
 * XREFs of VidSchiProcessIsrVSync @ 0x1C000B2F0
 * Callers:
 *     VidSchDdiNotifyInterruptWorker @ 0x1C000B040 (VidSchDdiNotifyInterruptWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0019940 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C001A8E0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001AC80 (memset.c)
 *     McTemplateK0pqx_EtwWriteTransfer @ 0x1C002F1D8 (McTemplateK0pqx_EtwWriteTransfer.c)
 *     ?VidSchiProcessIsrVSyncMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU_DXGKARGCB_NOTIFY_INTERRUPT_DATA@@PEAU_VIDSCH_VSYNC_COOKIE@@@Z @ 0x1C0036460 (-VidSchiProcessIsrVSyncMultiPlaneOverlay3@@YAXPEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@PEAU.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall VidSchiProcessIsrVSync(
        union _SLIST_HEADER *a1,
        struct _DXGKARGCB_NOTIFY_INTERRUPT_DATA *a2,
        __int64 a3,
        LARGE_INTEGER a4)
{
  bool v4; // r13
  DXGK_INTERRUPT_TYPE InterruptType; // eax
  UINT SubmissionFenceId; // edx
  __int64 v10; // r15
  unsigned int v11; // r12d
  __int64 v12; // rcx
  unsigned int v13; // r9d
  __int64 v14; // rdi
  unsigned __int64 v15; // rsi
  LARGE_INTEGER PerformanceCounter; // rcx
  LARGE_INTEGER *v17; // rdx
  unsigned int v18; // eax
  char v19; // al
  PSLIST_ENTRY v20; // rax
  DXGK_INTERRUPT_TYPE v21; // ecx
  LARGE_INTEGER *v22; // rsi
  unsigned int v23; // ecx
  DXGK_INTERRUPT_TYPE v24; // eax
  __int64 EngineOrdinal; // rcx
  __int64 v26; // rdx
  char v27; // cl
  __int64 v28; // r8
  unsigned int *v29; // rdx
  __int64 v30; // rcx
  unsigned __int64 v32; // r9
  unsigned __int64 v33; // rax
  ULONGLONG Region; // rcx
  int v35; // eax
  __int64 v36; // rcx
  UINT v37; // ecx
  ULONGLONG Alignment; // rax
  unsigned int v39; // r10d
  char v40; // dl
  char v41; // r11
  UINT64 v42; // r8
  LARGE_INTEGER *v43; // rcx
  LARGE_INTEGER *v44; // r9
  DWORD v45; // edx
  unsigned int v46; // edx
  unsigned int v47; // eax
  int v48; // eax
  int v49; // ecx
  int v50; // eax
  int v51; // ecx
  int v52; // eax
  int v53; // ecx
  int v54; // eax
  int v55; // ecx
  DXGK_MULTIPLANE_OVERLAY_STEREO_FLIP_MODE StereoFlipMode; // eax
  DXGK_MULTIPLANE_OVERLAY_VSYNC_INFO *pMultiPlaneOverlayVsyncInfo; // rcx
  char *v58; // r8
  LARGE_INTEGER *v59; // rcx
  DWORD v60; // edx
  unsigned int v61; // edx
  unsigned int v62; // eax
  int v63; // eax
  int v64; // ecx
  int v65; // eax
  int v66; // ecx
  int v67; // eax
  int v68; // ecx
  int v69; // eax
  DXGK_MULTIPLANE_OVERLAY_VSYNC_INFO *v70; // r8
  LARGE_INTEGER *v71; // rcx
  DWORD v72; // edx
  unsigned int v73; // edx
  unsigned int Rotation; // eax
  int v75; // eax
  int v76; // ecx
  int v77; // eax
  int v78; // ecx
  int v79; // eax
  int v80; // ecx
  int v81; // eax
  LARGE_INTEGER PhysicalAddress; // rax
  char v83; // [rsp+50h] [rbp-78h]
  UINT v84; // [rsp+54h] [rbp-74h]
  int v85; // [rsp+58h] [rbp-70h]
  DWORD LowPart; // [rsp+60h] [rbp-68h]
  __int128 v87; // [rsp+68h] [rbp-60h] BYREF
  __int64 v88; // [rsp+78h] [rbp-50h]
  int v89; // [rsp+80h] [rbp-48h]

  v85 = a3;
  LowPart = 0;
  v4 = 0;
  InterruptType = a2->InterruptType;
  SubmissionFenceId = a2->DmaCompleted.SubmissionFenceId;
  v84 = SubmissionFenceId;
  if ( InterruptType != DXGK_INTERRUPT_CRTC_VSYNC_WITH_MULTIPLANE_OVERLAY )
  {
    v84 = SubmissionFenceId;
    if ( InterruptType == DXGK_INTERRUPT_CRTC_VSYNC_WITH_MULTIPLANE_OVERLAY2 )
    {
      v4 = (a2->Flags.Value & 2) != 0;
    }
    else
    {
      v84 = SubmissionFenceId;
      if ( InterruptType == (DXGK_INTERRUPT_GPU_ENGINE_TIMEOUT|DXGK_INTERRUPT_DMA_PREEMPTED) )
        v4 = (a2->Flags.Value & 2) != 0;
      else
        v84 = SubmissionFenceId;
    }
  }
  v10 = 0LL;
  v11 = 0;
  v12 = *(_QWORD *)(a1[1].Alignment + 2920);
  v13 = *(_DWORD *)(v12 + 96);
  if ( v13 )
  {
    a3 = *(_QWORD *)(v12 + 128);
    while ( *(_DWORD *)(4000LL * v11 + a3 + 1088) != SubmissionFenceId )
    {
      if ( ++v11 >= v13 )
        goto LABEL_40;
    }
    if ( v11 != -1 && v11 < *((_DWORD *)&a1[2].HeaderX64 + 2) )
    {
      _mm_lfence();
      v14 = *(&a1[200].Alignment + v11);
      if ( v4 )
        goto LABEL_15;
      LODWORD(v15) = 1;
      if ( _InterlockedExchange((volatile __int32 *)(v14 + 44260), 0) )
      {
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v32 = _InterlockedCompareExchange64((volatile signed __int64 *)(v14 + 44272), 0LL, 0LL);
        v17 = (LARGE_INTEGER *)(v14 + 44144);
        v33 = PerformanceCounter.QuadPart - *(_QWORD *)(v14 + 44144);
        if ( v32 )
        {
          v17 = (LARGE_INTEGER *)(v14 + 44144);
          if ( v33 > v32 )
          {
            v17 = (LARGE_INTEGER *)(v14 + 44144);
            v15 = v33 / v32;
            if ( !(unsigned int)(v33 / v32) )
              goto LABEL_15;
          }
        }
      }
      else
      {
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
        v17 = (LARGE_INTEGER *)(v14 + 44144);
      }
      *(_QWORD *)(v14 + 44152) += (unsigned int)v15;
      v18 = *(_DWORD *)(v14 + 44256) + 1;
      *(_DWORD *)(v14 + 44256) = v18;
      if ( v18 < *(_DWORD *)(v14 + 82932) )
      {
        v19 = 1;
      }
      else
      {
        *(_DWORD *)(v14 + 44168) += v15;
        v19 = 0;
        *(_DWORD *)(v14 + 44256) = 0;
        *(LARGE_INTEGER *)(v14 + 44160) = PerformanceCounter;
      }
      *(_BYTE *)(v14 + 44184) = v19;
      *v17 = PerformanceCounter;
      if ( *(_BYTE *)(v14 + 8) && !*((_BYTE *)&a1[9].HeaderX64 + 12) )
      {
        Region = a1->Region;
        v88 = 0LL;
        v89 = 0;
        v87 = 0LL;
        v35 = ((__int64 (__fastcall *)(ULONGLONG, _QWORD, _QWORD, __int128 *))DxgCoreInterface[61])(
                Region,
                0LL,
                0LL,
                &v87);
        v36 = 0LL;
        if ( v35 >= 0 )
          v36 = *((_QWORD *)&v87 + 1);
        *(_QWORD *)(v14 + 44176) = v36;
      }
LABEL_15:
      v20 = ExpInterlockedPopEntrySList((PSLIST_HEADER)(v14 + 44688));
      if ( !v20 )
      {
LABEL_26:
        LOBYTE(SubmissionFenceId) = v84;
        goto LABEL_27;
      }
      v21 = a2->InterruptType;
      v22 = (LARGE_INTEGER *)&v20[-1];
      *((_BYTE *)&v20[6].Next + 12) &= ~1u;
      LODWORD(v20->Next) = v21;
      v23 = *(_DWORD *)(&v20[6].Next + 1) & 0xFFFFFC00;
      HIDWORD(v20[6].Next) = v85;
      *((_DWORD *)&v20[6].Next + 2) = v23;
      v20[2].Next = (struct _SLIST_ENTRY *)a1;
      *((_DWORD *)&v20[5].Next + 3) = v11;
      LODWORD(v20[6].Next) = v84;
      v24 = a2->InterruptType;
      if ( a2->InterruptType != DXGK_INTERRUPT_CRTC_VSYNC_WITH_MULTIPLANE_OVERLAY2 )
        goto LABEL_49;
      EngineOrdinal = a2->DmaCompleted.EngineOrdinal;
      v26 = *((unsigned int *)&a1[9].HeaderX64 + 2);
      if ( (unsigned int)EngineOrdinal > (unsigned int)v26 )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 281LL, 14LL, a1, EngineOrdinal, v26);
        __debugbreak();
      }
      else
      {
        *(_QWORD *)(v14 + 44176) = a2->MiracastEncodeChunkCompleted.pPrivateDriverData;
        if ( (a2->Flags.Value & 2) == 0 )
        {
          v27 = 0;
LABEL_20:
          BYTE4(v22[15].QuadPart) = v27 | BYTE4(v22[15].QuadPart) & 0xFE;
          memset(&v22[16], 0, 0xA0uLL);
          if ( !a2->DmaCompleted.EngineOrdinal )
            goto LABEL_23;
          while ( 1 )
          {
            v28 = *((unsigned int *)&a1[9].HeaderX64 + 2);
            v29 = (unsigned int *)(a2->MiracastEncodeChunkCompleted.ChunkInfo.ChunkId.Value + 24LL * (unsigned int)v10);
            v30 = *v29;
            if ( (unsigned int)v30 >= (unsigned int)v28 )
              break;
            v10 = (unsigned int)(v10 + 1);
            v22[2 * v30 + 16] = *(LARGE_INTEGER *)(v29 + 2);
            v22[2 * *v29 + 17].LowPart = v29[4];
            if ( (unsigned int)v10 >= a2->DmaCompleted.EngineOrdinal )
              goto LABEL_23;
          }
          g_DxgMmsBugcheckExportIndex = 1;
          v24 = (unsigned int)WdLogSingleEntry5(0LL, 281LL, 14LL, a1, v30, v28);
          __debugbreak();
LABEL_49:
          if ( v24 == (DXGK_INTERRUPT_GPU_ENGINE_TIMEOUT|DXGK_INTERRUPT_DMA_PREEMPTED) )
          {
            VidSchiProcessIsrVSyncMultiPlaneOverlay3(
              (struct _VIDSCH_GLOBAL *)a1,
              (struct _VIDSCH_PRESENT_INFO *)v14,
              a2,
              (struct _VIDSCH_VSYNC_COOKIE *)v22);
            goto LABEL_23;
          }
          if ( v24 != DXGK_INTERRUPT_CRTC_VSYNC_WITH_MULTIPLANE_OVERLAY )
          {
            v22[15].LowPart = v23 | 1;
            PhysicalAddress = a2->CrtcVsync.PhysicalAddress;
            v22[16] = PhysicalAddress;
            LowPart = PhysicalAddress.LowPart;
            goto LABEL_23;
          }
          v37 = a2->DmaCompleted.EngineOrdinal;
          if ( v37 >= 0xA )
          {
            WdLogSingleEntry3(1LL, a1, a2->DmaCompleted.SubmissionFenceId, a2->DmaCompleted.EngineOrdinal);
            ((void (*)(_QWORD, __int64, __int64, const wchar_t *, ...))DxgCoreInterface[86])(
              0LL,
              0x40000LL,
              0xFFFFFFFFLL,
              L"Driver reports out of range layer count: pVidSchGlobal = 0x%I64x, VidPnTargetId = 0x%I64x, Reported Layers = 0x%I64x",
              a1,
              a2->DmaCompleted.SubmissionFenceId,
              a2->DmaCompleted.EngineOrdinal,
              v10,
              v10);
            goto LABEL_23;
          }
          Alignment = a1[1].Alignment;
          v39 = v10;
          v40 = *(_BYTE *)(Alignment + 2835);
          v41 = *(_BYTE *)(Alignment + 2834);
          v83 = v40;
          if ( v37 )
          {
            do
            {
              if ( v41 )
              {
                v42 = a2->MiracastEncodeChunkCompleted.ChunkInfo.ChunkId.Value + 96LL * (unsigned int)v10;
                if ( *(_DWORD *)(v42 + 4) )
                {
                  v22[15].LowPart ^= ((unsigned __int16)v22[15].LowPart ^ (unsigned __int16)(v22[15].LowPart | (1 << *(_DWORD *)v42))) & 0x3FF;
                  v43 = &v22[5 * v39];
                  v43[16] = *(LARGE_INTEGER *)(v42 + 8);
                  LOWORD(v43[17].LowPart) = *(_WORD *)(v42 + 20);
                  WORD2(v43[17].QuadPart) = *(_WORD *)(v42 + 24);
                  HIWORD(v43[17].u.LowPart) = *(_WORD *)(v42 + 28);
                  HIWORD(v43[17].QuadPart) = *(_WORD *)(v42 + 32);
                  LOWORD(v43[18].LowPart) = *(_WORD *)(v42 + 36);
                  WORD2(v43[18].QuadPart) = *(_WORD *)(v42 + 40);
                  HIWORD(v43[18].u.LowPart) = *(_WORD *)(v42 + 44);
                  HIWORD(v43[18].QuadPart) = *(_WORD *)(v42 + 48);
                  LOWORD(v43[19].LowPart) = *(_WORD *)(v42 + 36);
                  WORD2(v43[19].QuadPart) = *(_WORD *)(v42 + 40);
                  HIWORD(v43[19].u.LowPart) = *(_WORD *)(v42 + 44);
                  HIWORD(v43[19].QuadPart) = *(_WORD *)(v42 + 48);
                  v44 = &v22[5 * v39 + 20];
                  LODWORD(v43) = v44->LowPart ^ (*(_DWORD *)(v42 + 16) ^ v44->LowPart) & 1;
                  v44->LowPart = (unsigned int)v43;
                  v45 = (unsigned int)v43 ^ (*(_DWORD *)(v42 + 16) ^ (unsigned int)v43) & 2;
                  v44->LowPart = v45;
                  v46 = v45 & 0xFFFFFFE7;
                  v47 = *(_DWORD *)(v42 + 52);
                  if ( v47 > 1 )
                    v46 |= 8 * (((_BYTE)v47 - 1) & 3);
                  v44->LowPart = v46;
                  v48 = v46 ^ ((unsigned __int8)v46 ^ (unsigned __int8)(4 * *(_DWORD *)(v42 + 56))) & 4;
                  v44->LowPart = v48;
                  v49 = v48 ^ ((unsigned __int8)v48 ^ (unsigned __int8)(32 * *(_DWORD *)(v42 + 72))) & 0x60;
                  v44->LowPart = v49;
                  v50 = v49 ^ ((unsigned __int8)v49 ^ (unsigned __int8)((unsigned __int8)*(_DWORD *)(v42 + 76) << 7)) & 0x80;
                  v44->LowPart = v50;
                  v51 = v50 ^ ((unsigned __int16)v50 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v42 + 76) << 7)) & 0x100;
                  v44->LowPart = v51;
                  v52 = v51 ^ ((unsigned __int16)v51 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v42 + 76) << 7)) & 0x200;
                  v44->LowPart = v52;
                  v53 = v52 ^ ((unsigned __int16)v52 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v42 + 80) << 10)) & 0x1C00;
                  v44->LowPart = v53;
                  v54 = v53 ^ ((unsigned __int16)v53 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v42 + 84) << 13)) & 0x2000;
                  v44->LowPart = v54;
                  v55 = v54 ^ ((unsigned __int16)v54 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v42 + 88) << 14)) & 0x4000;
                  v44->LowPart = v55;
                  StereoFlipMode = *(_DWORD *)(v42 + 92);
LABEL_68:
                  v40 = v83;
                  v44->LowPart = v55 ^ (v55 ^ (StereoFlipMode << 15)) & 0x18000;
                  ++v39;
                }
              }
              else
              {
                pMultiPlaneOverlayVsyncInfo = a2->CrtcVsyncWithMultiPlaneOverlay.pMultiPlaneOverlayVsyncInfo;
                if ( v40 )
                {
                  v58 = (char *)pMultiPlaneOverlayVsyncInfo + 112 * (unsigned int)v10;
                  if ( *((_DWORD *)v58 + 1) )
                  {
                    v22[15].LowPart ^= ((unsigned __int16)v22[15].LowPart ^ (unsigned __int16)(v22[15].LowPart | (1 << *(_DWORD *)v58))) & 0x3FF;
                    v59 = &v22[5 * v39];
                    v59[16] = *(LARGE_INTEGER *)(v58 + 8);
                    LOWORD(v59[17].LowPart) = *((_WORD *)v58 + 10);
                    WORD2(v59[17].QuadPart) = *((_WORD *)v58 + 12);
                    HIWORD(v59[17].u.LowPart) = *((_WORD *)v58 + 14);
                    HIWORD(v59[17].QuadPart) = *((_WORD *)v58 + 16);
                    LOWORD(v59[18].LowPart) = *((_WORD *)v58 + 18);
                    WORD2(v59[18].QuadPart) = *((_WORD *)v58 + 20);
                    HIWORD(v59[18].u.LowPart) = *((_WORD *)v58 + 22);
                    HIWORD(v59[18].QuadPart) = *((_WORD *)v58 + 24);
                    LOWORD(v59[19].LowPart) = *((_WORD *)v58 + 26);
                    WORD2(v59[19].QuadPart) = *((_WORD *)v58 + 28);
                    HIWORD(v59[19].u.LowPart) = *((_WORD *)v58 + 30);
                    HIWORD(v59[19].QuadPart) = *((_WORD *)v58 + 32);
                    v44 = &v22[5 * v39 + 20];
                    LODWORD(v59) = v44->LowPart ^ ((unsigned __int8)v44->LowPart ^ (unsigned __int8)*((_DWORD *)v58 + 4)) & 1;
                    v44->LowPart = (unsigned int)v59;
                    v60 = (unsigned int)v59 ^ (*((_DWORD *)v58 + 4) ^ (unsigned int)v59) & 2;
                    v44->LowPart = v60;
                    v61 = v60 & 0xFFFFFFE7;
                    v62 = *((_DWORD *)v58 + 17);
                    if ( v62 > 1 )
                      v61 |= 8 * (((_BYTE)v62 - 1) & 3);
                    v44->LowPart = v61;
                    v63 = v61 ^ ((unsigned __int8)v61 ^ (unsigned __int8)(4 * *((_DWORD *)v58 + 18))) & 4;
                    v44->LowPart = v63;
                    v64 = v63 ^ ((unsigned __int8)v63 ^ (unsigned __int8)(32 * *((_DWORD *)v58 + 22))) & 0x60;
                    v44->LowPart = v64;
                    v65 = v64 ^ ((unsigned __int8)v64 ^ (unsigned __int8)((unsigned __int8)*((_DWORD *)v58 + 23) << 7)) & 0x80;
                    v44->LowPart = v65;
                    v66 = v65 ^ ((unsigned __int16)v65 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v58 + 23) << 7)) & 0x100;
                    v44->LowPart = v66;
                    v67 = v66 ^ ((unsigned __int16)v66 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v58 + 23) << 7)) & 0x200;
                    v44->LowPart = v67;
                    v68 = v67 ^ ((unsigned __int16)v67 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v58 + 24) << 10)) & 0x1C00;
                    v44->LowPart = v68;
                    v69 = v68 ^ ((unsigned __int16)v68 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v58 + 25) << 13)) & 0x2000;
                    v44->LowPart = v69;
                    v55 = v69 ^ ((unsigned __int16)v69 ^ (unsigned __int16)((unsigned __int16)*((_DWORD *)v58 + 26) << 14)) & 0x4000;
                    v44->LowPart = v55;
                    StereoFlipMode = *((_DWORD *)v58 + 27);
                    goto LABEL_68;
                  }
                }
                else
                {
                  v70 = &pMultiPlaneOverlayVsyncInfo[(unsigned int)v10];
                  if ( v70->Enabled )
                  {
                    v22[15].LowPart ^= ((unsigned __int16)v22[15].LowPart ^ (unsigned __int16)(v22[15].LowPart | (1 << v70->LayerIndex))) & 0x3FF;
                    v71 = &v22[5 * v39];
                    v71[16] = v70->PhysicalAddress;
                    LOWORD(v71[17].LowPart) = v70->PlaneAttributes.SrcRect.left;
                    WORD2(v71[17].QuadPart) = v70->PlaneAttributes.SrcRect.top;
                    HIWORD(v71[17].u.LowPart) = v70->PlaneAttributes.SrcRect.right;
                    HIWORD(v71[17].QuadPart) = v70->PlaneAttributes.SrcRect.bottom;
                    LOWORD(v71[18].LowPart) = v70->PlaneAttributes.DstRect.left;
                    WORD2(v71[18].QuadPart) = v70->PlaneAttributes.DstRect.top;
                    HIWORD(v71[18].u.LowPart) = v70->PlaneAttributes.DstRect.right;
                    HIWORD(v71[18].QuadPart) = v70->PlaneAttributes.DstRect.bottom;
                    LOWORD(v71[19].LowPart) = v70->PlaneAttributes.ClipRect.left;
                    WORD2(v71[19].QuadPart) = v70->PlaneAttributes.ClipRect.top;
                    HIWORD(v71[19].u.LowPart) = v70->PlaneAttributes.ClipRect.right;
                    HIWORD(v71[19].QuadPart) = v70->PlaneAttributes.ClipRect.bottom;
                    v44 = &v22[5 * v39 + 20];
                    LODWORD(v71) = v44->LowPart ^ ((unsigned __int8)v44->LowPart ^ (unsigned __int8)*(_DWORD *)&v70->PlaneAttributes.Flags.0) & 1;
                    v44->LowPart = (unsigned int)v71;
                    v72 = (unsigned int)v71 ^ (v70->PlaneAttributes.Flags.Value ^ (unsigned int)v71) & 2;
                    v44->LowPart = v72;
                    v73 = v72 & 0xFFFFFFE7;
                    Rotation = v70->PlaneAttributes.Rotation;
                    if ( Rotation > 1 )
                      v73 |= 8 * (((_BYTE)Rotation - 1) & 3);
                    v44->LowPart = v73;
                    v75 = v73 ^ ((unsigned __int8)v73 ^ (unsigned __int8)(4 * v70->PlaneAttributes.Blend.Value)) & 4;
                    v44->LowPart = v75;
                    v76 = v75 ^ ((unsigned __int8)v75 ^ (unsigned __int8)(32 * v70->PlaneAttributes.VideoFrameFormat)) & 0x60;
                    v44->LowPart = v76;
                    v77 = v76 ^ ((unsigned __int8)v76 ^ (unsigned __int8)((unsigned __int8)*(_DWORD *)&v70->PlaneAttributes.YCbCrFlags.0 << 7)) & 0x80;
                    v44->LowPart = v77;
                    v78 = v77 ^ ((unsigned __int16)v77 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)&v70->PlaneAttributes.YCbCrFlags.0 << 7)) & 0x100;
                    v44->LowPart = v78;
                    v79 = v78 ^ ((unsigned __int16)v78 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)&v70->PlaneAttributes.YCbCrFlags.0 << 7)) & 0x200;
                    v44->LowPart = v79;
                    v80 = v79 ^ ((unsigned __int16)v79 ^ (unsigned __int16)((unsigned __int16)v70->PlaneAttributes.StereoFormat << 10)) & 0x1C00;
                    v44->LowPart = v80;
                    v81 = v80 ^ ((unsigned __int16)v80 ^ (v70->PlaneAttributes.StereoLeftViewFrame0 << 13)) & 0x2000;
                    v44->LowPart = v81;
                    v55 = v81 ^ ((unsigned __int16)v81 ^ (v70->PlaneAttributes.StereoBaseViewFrame0 << 14)) & 0x4000;
                    v44->LowPart = v55;
                    StereoFlipMode = v70->PlaneAttributes.StereoFlipMode;
                    goto LABEL_68;
                  }
                }
              }
              LODWORD(v10) = v10 + 1;
            }
            while ( (unsigned int)v10 < a2->DmaCompleted.EngineOrdinal );
          }
LABEL_23:
          if ( !v4 )
          {
            v22[11] = *(LARGE_INTEGER *)(v14 + 44152);
            v22[12].QuadPart = *(unsigned int *)(v14 + 44168);
            LOBYTE(v22[13].LowPart) = *(_BYTE *)(v14 + 44184);
            v22[7] = *(LARGE_INTEGER *)(v14 + 44144);
            v22[8] = *(LARGE_INTEGER *)(v14 + 44160);
            v22[9] = *(LARGE_INTEGER *)(v14 + 44176);
          }
          v22[10] = a4;
          ExpInterlockedPushEntrySList(a1 + 111, (PSLIST_ENTRY)&v22[4]);
          goto LABEL_26;
        }
      }
      v27 = 1;
      goto LABEL_20;
    }
  }
  else
  {
LABEL_40:
    v11 = -1;
  }
LABEL_27:
  if ( bTracingEnabled )
  {
    if ( v4 )
    {
      if ( (byte_1C00769C1 & 1) != 0 )
        McTemplateK0pqx_EtwWriteTransfer(
          v12,
          (unsigned int)&EventHSyncInterrupt,
          a3,
          a1[1].Alignment,
          SubmissionFenceId,
          LowPart);
    }
    else if ( (byte_1C00769C1 & 1) != 0 )
    {
      McTemplateK0pqx_EtwWriteTransfer(
        LowPart,
        (unsigned int)&EventVSyncInterrupt,
        a3,
        a1[1].Alignment,
        SubmissionFenceId,
        LowPart);
    }
  }
  return v11;
}
