/*
 * XREFs of ?SubmitPresentWithDmaBuffer@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAVDXGHWQUEUE@@PEAVDXGALLOCATION@@2PEAU_DXGKARG_PRESENT@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0164230
 * Callers:
 *     ?SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCATION@@IIPEAU_DXGKARG_PRESENT@@PEAU_D3DKMT_PRESENT_RGNS@@PEAU_VIDMM_DMA_BUFFER@@PEAUVIDSCH_SUBMIT_DATA_BASE@@W4_D3DDDIFORMAT@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0163E8C (-SubmitPresent@DXGCONTEXT@@QEAAJPEBU_D3DKMT_PRESENT@@PEAPEAVDXGHWQUEUE@@IPEAPEAV1@PEAVDXGALLOCAT.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0007980 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     McTemplateK0q_EtwWriteTransfer @ 0x1C002463C (McTemplateK0q_EtwWriteTransfer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00272A0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     TraceDxgkPatchLocationList @ 0x1C004DA28 (TraceDxgkPatchLocationList.c)
 *     ?DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C0164970 (-DdiPresent@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ?DdiPresentToHwQueue@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z @ 0x1C0220C58 (-DdiPresentToHwQueue@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_PRESENT@@@Z.c)
 *     ?DdiSignalMonitoredFence@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_SIGNALMONITOREDFENCE@@@Z @ 0x1C0220F32 (-DdiSignalMonitoredFence@ADAPTER_RENDER@@QEAAJPEAXPEAU_DXGKARG_SIGNALMONITOREDFENCE@@@Z.c)
 *     ?EnsureKmSubmissionProgressSyncObject@DXGHWQUEUE@@QEAAJXZ @ 0x1C02222A8 (-EnsureKmSubmissionProgressSyncObject@DXGHWQUEUE@@QEAAJXZ.c)
 *     ?AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z @ 0x1C0336740 (-AcquireDmaBuffer@DXGCONTEXT@@QEAAJPEAPEAU_VIDMM_DMA_BUFFER@@PEAVCOREDEVICEACCESS@@E@Z.c)
 */

__int64 __fastcall DXGCONTEXT::SubmitPresentWithDmaBuffer(
        DXGCONTEXT *this,
        const struct _D3DKMT_PRESENT *a2,
        struct DXGHWQUEUE *a3,
        struct DXGALLOCATION *a4,
        struct DXGALLOCATION *a5,
        struct _DXGKARG_PRESENT *a6,
        struct _VIDMM_DMA_BUFFER *a7,
        struct VIDSCH_SUBMIT_DATA_BASE *a8,
        struct COREDEVICEACCESS *a9)
{
  struct _DXGKARG_PRESENT *v9; // rbx
  struct _VIDMM_DMA_BUFFER *v10; // rdi
  struct DXGALLOCATION *v11; // r10
  struct COREDEVICEACCESS *v12; // rdx
  struct DXGALLOCATION *v14; // rcx
  char v15; // si
  struct _DXGK_PRESENTFLAGS::$39B5E91464CC7478F36F75826127ACBA::$425066DE2CBEB6B5ED4C7449D399EBDF Value; // eax
  _DWORD *v17; // r13
  int v18; // eax
  int v19; // eax
  __int64 v20; // rax
  __int64 (__fastcall *v21)(struct _VIDMM_DMA_BUFFER *, int *, __int64); // r11
  int v22; // eax
  __int64 v23; // r12
  void *v24; // rdx
  UINT v25; // ecx
  UINT v26; // eax
  __int64 v27; // rdi
  __int64 v28; // rax
  __int64 v29; // r8
  struct DXGALLOCATION *v30; // r10
  __int64 v31; // rdi
  __int64 v32; // rax
  __int64 v33; // r9
  UINT v34; // eax
  void *v35; // rdx
  __int64 v36; // rcx
  int v37; // eax
  unsigned int v38; // edi
  __int64 v39; // rax
  int v40; // ecx
  __int64 v41; // rax
  unsigned __int64 v42; // rdi
  __int64 v43; // r8
  int v44; // eax
  int v45; // eax
  char *v46; // rdi
  unsigned int *v47; // rcx
  char *v48; // rax
  bool v49; // zf
  int v50; // eax
  int v51; // edi
  __int64 v53; // rcx
  void *v54; // rdx
  __int64 v55; // rax
  int v56; // eax
  __int64 v57; // rax
  __int64 v58; // r10
  ADAPTER_RENDER *v59; // rcx
  __int64 v60; // rbx
  DXGHWQUEUE *v61; // r8
  UINT64 v62; // rdx
  __int64 v63; // rcx
  __int64 v64; // rax
  void *v65; // rdx
  int v66; // eax
  struct _VIDMM_DMA_BUFFER *v67; // rsi
  __int64 v68; // rdi
  __int64 v69; // rbx
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rax
  __int64 v73; // rcx
  int v74; // eax
  char *v75; // r8
  char *v76; // r9
  char v77; // dl
  struct DXGALLOCATION *v78; // r8
  __int64 v79; // rcx
  __int64 v80; // rcx
  char *v81; // rcx
  char *v82; // rcx
  DXGHWQUEUE *v83; // rdx
  __int64 v84; // rdx
  unsigned int v85; // ebx
  __int64 v86; // r8
  __int64 v87; // rax
  bool v88; // [rsp+61h] [rbp-9Fh]
  char v89; // [rsp+62h] [rbp-9Eh]
  struct _VIDMM_DMA_BUFFER *v90; // [rsp+68h] [rbp-98h] BYREF
  struct DXGALLOCATION *v91; // [rsp+70h] [rbp-90h]
  char *v92; // [rsp+78h] [rbp-88h] BYREF
  int v93; // [rsp+84h] [rbp-7Ch] BYREF
  char *v94; // [rsp+88h] [rbp-78h] BYREF
  UINT v95; // [rsp+90h] [rbp-70h]
  unsigned int *v96; // [rsp+98h] [rbp-68h]
  DXGHWQUEUE *v97; // [rsp+A0h] [rbp-60h]
  struct DXGALLOCATION *v98; // [rsp+A8h] [rbp-58h]
  D3DGPU_VIRTUAL_ADDRESS v99; // [rsp+B0h] [rbp-50h]
  LARGE_INTEGER v100; // [rsp+B8h] [rbp-48h]
  struct COREDEVICEACCESS *v101; // [rsp+C0h] [rbp-40h]
  __int64 v102; // [rsp+C8h] [rbp-38h]
  struct _DXGKARG_PRESENT *v103; // [rsp+D0h] [rbp-30h]
  struct _DXGKARG_SIGNALMONITOREDFENCE v104; // [rsp+E0h] [rbp-20h] BYREF
  struct _DXGKARG_SIGNALMONITOREDFENCE v105; // [rsp+130h] [rbp+30h] BYREF
  int v106; // [rsp+180h] [rbp+80h] BYREF
  int v107; // [rsp+184h] [rbp+84h]
  int v108; // [rsp+188h] [rbp+88h]
  int v109; // [rsp+18Ch] [rbp+8Ch]
  int v110; // [rsp+190h] [rbp+90h]
  __int64 v111; // [rsp+194h] [rbp+94h]
  int v112; // [rsp+19Ch] [rbp+9Ch]
  struct DXGALLOCATION *v113; // [rsp+1A0h] [rbp+A0h]
  struct DXGALLOCATION *v114; // [rsp+1A8h] [rbp+A8h]
  _QWORD v115[12]; // [rsp+1B0h] [rbp+B0h] BYREF

  v9 = a6;
  v10 = a7;
  v11 = a4;
  v12 = a9;
  v14 = a5;
  v15 = 0;
  Value = (struct _DXGK_PRESENTFLAGS::$39B5E91464CC7478F36F75826127ACBA::$425066DE2CBEB6B5ED4C7449D399EBDF)a6->Flags.Value;
  v91 = a4;
  v97 = a3;
  v103 = a6;
  v98 = a5;
  v90 = a7;
  v101 = a9;
  v94 = 0LL;
  v89 = 0;
  v88 = 1;
  a6->MultipassOffset = 0;
  if ( (*(_BYTE *)&Value & 4) != 0 && !a4 )
  {
    WdLogSingleEntry1(2LL, 8893LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Source allocation cannot be NULL for Flip present",
      8893LL,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v23) = -1073741823;
    v17 = (_DWORD *)((char *)this + 404);
    goto LABEL_153;
  }
  v17 = (_DWORD *)((char *)this + 404);
  if ( (*((_DWORD *)this + 101) & 0x10) != 0 && !a3 )
  {
    WdLogSingleEntry1(2LL, 8903LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Hardware context present is not provided with hardware queue array",
      8903LL,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v23) = -1073741823;
    goto LABEL_153;
  }
  while ( 1 )
  {
    if ( !v10 )
    {
      LODWORD(v23) = DXGCONTEXT::AcquireDmaBuffer(this, &v90, v12, 0);
      if ( (int)v23 < 0 )
      {
        WdLogSingleEntry1(2LL, this);
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to acquire DMA buffer for Present. Context: 0x%I64x",
          (__int64)this,
          0LL,
          0LL,
          0LL,
          0LL);
LABEL_152:
        v15 = 0;
        goto LABEL_153;
      }
      v10 = v90;
      if ( !v90 )
      {
        WdLogSingleEntry1(1LL, 8923LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pVidMmDmaBuffer", 8923LL, 0LL, 0LL, 0LL, 0LL);
        v10 = v90;
      }
      v14 = v98;
      v11 = v91;
    }
    v107 &= 2u;
    v106 = 0;
    if ( v11 )
      v18 = *((_DWORD *)v11 + 4);
    else
      v18 = 0;
    v109 &= 2u;
    v108 = v18;
    if ( v14 )
      v19 = *((_DWORD *)v14 + 4);
    else
      v19 = 0;
    v110 = v19;
    v112 = 0;
    v113 = v11;
    v111 = v111 & 2 | 1;
    v20 = *((_QWORD *)this + 2);
    v114 = v14;
    v95 = 0;
    v100.QuadPart = 0LL;
    v99 = 0LL;
    v102 = 0LL;
    DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(v20 + 16) + 16LL));
    v22 = v21(v10, &v106, 3LL);
    LODWORD(v23) = v22;
    if ( v22 < 0 )
    {
      WdLogSingleEntry2(3LL, this, v22);
      goto LABEL_152;
    }
    (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, char **))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                        + 760LL)
                                                                            + 8LL)
                                                                + 504LL))(
      v90,
      &v94);
    v9->pDmaBuffer = v94;
    v9->DmaSize = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                + 760LL)
                                                                                    + 8LL)
                                                                        + 528LL))(v90);
    v24 = (void *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                                + 760LL)
                                                                                    + 8LL)
                                                                        + 560LL))(v90);
    v25 = v95;
    v9->pDmaBufferPrivateData = v24;
    v26 = *((_DWORD *)this + 52);
    v9->DmaBufferSegmentId = v25;
    v9->DmaBufferPhysicalAddress = v100;
    v9->DmaBufferPrivateDataSize = v26;
    if ( v89 )
    {
      v104.DmaBufferPrivateDataSize = v26;
      v104.DmaSize = v9->DmaSize;
      v104.MultipassOffset = v9->MultipassOffset;
      v104.pDmaBuffer = v9->pDmaBuffer;
      v104.DmaBufferGpuVirtualAddress = v99;
      v104.pDmaBufferPrivateData = v24;
      *((_DWORD *)&v104.KernelSubmissionType + 1) = 0;
      *(&v104.DmaSize + 1) = 0;
      v53 = *((_QWORD *)v97 + 11);
      v104.MonitoredFenceGpuVa = *(_QWORD *)(v53 + 48);
      v104.MonitoredFenceCpuVa = *(void **)(v53 + 64);
      v104.MonitoredFenceValue = *((_QWORD *)v97 + 12);
      v54 = (void *)*((_QWORD *)this + 23);
      v104.hHwQueue = (HANDLE)*((_QWORD *)v97 + 4);
      v55 = *((_QWORD *)this + 2);
      v104.KernelSubmissionType = DXGK_KERNEL_SUBMISSION_PRESENTBLT;
      v56 = ADAPTER_RENDER::DdiSignalMonitoredFence(*(ADAPTER_RENDER **)(v55 + 16), v54, &v104);
      v23 = v56;
      v9->DmaBufferPrivateDataSize = v104.DmaBufferPrivateDataSize;
      v9->DmaSize = v104.DmaSize;
      v9->MultipassOffset = v104.MultipassOffset;
      v9->pDmaBuffer = v104.pDmaBuffer;
      v9->pDmaBufferPrivateData = v104.pDmaBufferPrivateData;
      if ( v56 == -1071775743 )
      {
        WdLogSingleEntry5(0LL, 275LL, 40LL, this, 0LL, 0LL);
LABEL_140:
        WdLogSingleEntry2(3LL, this, v23);
        goto LABEL_141;
      }
      if ( v56 < 0 )
        goto LABEL_140;
      v89 = 0;
    }
    *(_DWORD *)a8 ^= (*(_DWORD *)a8 ^ (*((unsigned __int8 *)this + 438) << 27)) & 0x8000000;
    if ( !v88 )
      goto LABEL_31;
    v27 = *((_QWORD *)this + 2);
    if ( !*((_BYTE *)this + 438) )
    {
      v9->pAllocationList = (DXGK_ALLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *, void *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v27 + 16) + 760LL) + 8LL) + 552LL))(
                                                     v90,
                                                     v24);
      v9->pPatchLocationListOut = (D3DDDI_PATCHLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL) + 8LL) + 544LL))(v90);
      v34 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                          + 760LL)
                                                                              + 8LL)
                                                                  + 536LL))(v90);
      goto LABEL_18;
    }
    memset(v115, 0, sizeof(v115));
    v28 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v27 + 16) + 760LL)
                                                                            + 8LL)
                                                                + 552LL))(v90);
    v30 = v91;
    v31 = v28;
    v115[4] = *(_QWORD *)(v28 + 24);
    if ( v91 )
    {
      LOBYTE(v29) = *((_BYTE *)this + 439);
      v32 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                               + 760LL)
                                                                                   + 8LL)
                                                                       + 240LL))(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 768LL),
              *((_QWORD *)v91 + 3),
              v29,
              *((unsigned int *)this + 100));
      v30 = v91;
      v115[5] = v32;
    }
    if ( (v9->Flags.Value & 4) == 0 )
    {
      if ( !v98 )
        goto LABEL_17;
      v33 = *((unsigned int *)this + 100);
      LOBYTE(v29) = *((_BYTE *)this + 439);
      v115[8] = *(_QWORD *)(v31 + 48);
      v115[9] = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64, __int64))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL)
                                                                                        + 8LL)
                                                                            + 240LL))(
                  *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 768LL),
                  *((_QWORD *)v98 + 3),
                  v29,
                  v33);
      if ( v115[9] )
        goto LABEL_17;
      LODWORD(v23) = -1073741811;
      WdLogSingleEntry3(2LL, this, -1073741811LL, 9121LL);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x Rejecting Present because the virtual address is not assigned to the destination allocation, ntStatus 0x%I64x",
        (__int64)this,
        -1073741811LL,
        9121LL,
        0LL,
        0LL);
LABEL_141:
      v15 = 1;
      goto LABEL_153;
    }
    v57 = *((_QWORD *)this + 2);
    v58 = *((_QWORD *)v30 + 6);
    LODWORD(v92) = 0;
    (*(void (__fastcall **)(_QWORD, _QWORD, char **, _QWORD *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v57 + 16)
                                                                                              + 760LL)
                                                                                  + 8LL)
                                                                      + 208LL))(
      *(_QWORD *)(*(_QWORD *)(v57 + 16) + 768LL),
      *(_QWORD *)(v58 + 8),
      &v92,
      &v115[6],
      0LL);
    LOWORD(v115[7]) = (_WORD)v92;
LABEL_17:
    v9->DmaBufferGpuVirtualAddress = v99;
    v9->pAllocationList = (DXGK_ALLOCATIONLIST *)v115;
    v34 = 0;
    v9->pPatchLocationListOut = 0LL;
LABEL_18:
    v9->PatchLocationListOutSize = v34;
    if ( (*v17 & 0x10) != 0
      && (v59 = *(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL),
          *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)v59 + 2) + 216LL) + 64LL) + 40LL) + 28LL) >= 0xA002u) )
    {
      LODWORD(v23) = ADAPTER_RENDER::DdiPresentToHwQueue(v59, *((void **)v97 + 4), v9);
      if ( (_DWORD)v23 != -1073741822 )
        goto LABEL_22;
    }
    else
    {
      v35 = 0LL;
      if ( (v9->Flags.Value & 1) == 0
        && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL) + 2874LL) )
      {
        goto LABEL_21;
      }
    }
    v35 = (void *)*((_QWORD *)this + 23);
LABEL_21:
    LODWORD(v23) = ADAPTER_RENDER::DdiPresent(*(ADAPTER_RENDER **)(*((_QWORD *)this + 2) + 16LL), v35, v9);
LABEL_22:
    if ( *((_BYTE *)this + 438) && (v9->pPatchLocationListOut || v9->PatchLocationListOutSize) )
      WdLogSingleEntry5(0LL, 275LL, 9LL, v9, 0LL, 0LL);
    if ( (_DWORD)v23 == -1071775743 )
    {
      if ( (v9->Flags.Value & 4) == 0 )
        goto LABEL_27;
      WdLogSingleEntry1(2LL, this);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x Driver must not return STATUS_GRAPHICS_INSUFFICIENT_DMA_BUFFER for Flip",
        (__int64)this,
        0LL,
        0LL,
        0LL,
        0LL);
      v60 = -1073741823LL;
      LODWORD(v23) = -1073741823;
LABEL_143:
      WdLogSingleEntry2(2LL, this, v60);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"0x%I64x Driver failed Present 0x%I64x",
        (__int64)this,
        v60,
        0LL,
        0LL,
        0LL);
      goto LABEL_141;
    }
    if ( (int)v23 < 0 )
    {
      v60 = (int)v23;
      if ( (_DWORD)v23 == -1071775736 )
      {
        WdLogSingleEntry2(4LL, this, -1071775736LL);
        goto LABEL_141;
      }
      goto LABEL_143;
    }
LABEL_27:
    if ( *((_BYTE *)this + 438) )
    {
      if ( v9->pAllocationList != (DXGK_ALLOCATIONLIST *)v115 )
      {
        WdLogSingleEntry1(1LL, 9244LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pPresentDdiArg->pAllocationInfo == AllocationInfo",
          9244LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
    }
    else if ( v9->pAllocationList != (DXGK_ALLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL) + 8LL) + 552LL))(v90) )
    {
      WdLogSingleEntry1(1LL, 9248LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pPresentDdiArg->pAllocationList == GetVidMmExport()->VidMmGetDmaAllocationList(pVidMmDmaBuffer)",
        9248LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v88 = (_DWORD)v23 == -1071775743;
    if ( (*v17 & 0x10) != 0 )
    {
      LODWORD(v23) = DXGHWQUEUE::EnsureKmSubmissionProgressSyncObject(v97);
      if ( (int)v23 < 0 )
        goto LABEL_145;
      v61 = v97;
      v62 = *((_QWORD *)v97 + 12) + 1LL;
      *((_QWORD *)v97 + 12) = v62;
      if ( !*((_BYTE *)this + 296) )
      {
        v105.DmaBufferPrivateDataSize = v9->DmaBufferPrivateDataSize;
        v105.DmaSize = v9->DmaSize;
        v105.MultipassOffset = v9->MultipassOffset;
        v105.pDmaBuffer = v9->pDmaBuffer;
        v105.pDmaBufferPrivateData = v9->pDmaBufferPrivateData;
        v105.DmaBufferGpuVirtualAddress = v99;
        *((_DWORD *)&v105.KernelSubmissionType + 1) = 0;
        *(&v105.DmaSize + 1) = 0;
        v63 = *((_QWORD *)v61 + 11);
        v105.MonitoredFenceGpuVa = *(_QWORD *)(v63 + 48);
        v105.MonitoredFenceCpuVa = *(void **)(v63 + 64);
        v105.hHwQueue = (HANDLE)*((_QWORD *)v61 + 4);
        v64 = *((_QWORD *)this + 2);
        v105.MonitoredFenceValue = v62;
        v65 = (void *)*((_QWORD *)this + 23);
        v105.KernelSubmissionType = DXGK_KERNEL_SUBMISSION_PRESENTBLT;
        v66 = ADAPTER_RENDER::DdiSignalMonitoredFence(*(ADAPTER_RENDER **)(v64 + 16), v65, &v105);
        v23 = v66;
        v9->DmaBufferPrivateDataSize = v105.DmaBufferPrivateDataSize;
        v9->DmaSize = v105.DmaSize;
        v9->MultipassOffset = v105.MultipassOffset;
        v9->pDmaBuffer = v105.pDmaBuffer;
        v9->pDmaBufferPrivateData = v105.pDmaBufferPrivateData;
        if ( v66 == -1071775743 )
        {
          v89 = 1;
        }
        else if ( v66 < 0 )
        {
          goto LABEL_140;
        }
      }
    }
LABEL_31:
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                            + 736LL)
                                                                + 8LL)
                                                    + 568LL))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                        + 744LL))
      && v9->pDmaBuffer <= v94 )
    {
      WdLogSingleEntry1(1LL, 9323LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"GetVidSchExport()->VidSchIsTDRPending(GetRenderCore()->GetVidSchGlobal()) || static_cast<BYTE*>(pPresen"
                  "tDdiArg->pDmaBuffer) > static_cast<BYTE*>(pDmaBuffer)",
        9323LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v36 = (*(unsigned int (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                             + 760LL)
                                                                                 + 8LL)
                                                                     + 528LL))(v90);
    v37 = (int)v94;
    if ( v9->pDmaBuffer > &v94[v36] )
    {
      WdLogSingleEntry1(1LL, 9324LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"static_cast<BYTE*>(pPresentDdiArg->pDmaBuffer) <= static_cast<BYTE*>(pDmaBuffer)+GetVidMmExport()->VidM"
                  "mGetDmaBufferLength(pVidMmDmaBuffer)",
        9324LL,
        0LL,
        0LL,
        0LL,
        0LL);
      v37 = (int)v94;
    }
    v38 = LODWORD(v9->pDmaBuffer) - v37;
    v39 = *((_QWORD *)this + 2);
    LODWORD(v92) = v38;
    v40 = LODWORD(v9->pDmaBufferPrivateData)
        - (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v39 + 16) + 760LL)
                                                                            + 8LL)
                                                                + 560LL))(v90);
    v41 = *((_QWORD *)this + 2);
    LODWORD(v96) = v40;
    if ( (*(unsigned int (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v41 + 16)
                                                                                            + 760LL)
                                                                                + 8LL)
                                                                    + 528LL))(v90) < v38 )
    {
      WdLogSingleEntry1(1LL, 9331LL);
      LODWORD(v42) = 0;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"GetVidMmExport()->VidMmGetDmaBufferLength(pVidMmDmaBuffer) >= DMABufferLength",
        9331LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    else
    {
      LODWORD(v42) = 0;
    }
    (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                               + 760LL)
                                                                   + 8LL)
                                                       + 512LL))(v90);
    v94 = 0LL;
    if ( !*((_BYTE *)this + 438) )
    {
      if ( v9->pPatchLocationListOut < (D3DDDI_PATCHLOCATIONLIST *)(*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL) + 8LL) + 544LL))(v90) )
      {
        WdLogSingleEntry1(1LL, 9346LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pPresentDdiArg->pPatchLocationListOut >= GetVidMmExport()->VidMmGetDmaPatchLocationList(pVidMmDmaBuffer)",
          9346LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v67 = v90;
      v68 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL);
      v69 = (*(unsigned int (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(v68 + 8) + 536LL))(v90);
      v70 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(v68 + 8) + 544LL))(v67);
      v71 = 3 * v69;
      v9 = v103;
      if ( v103->pPatchLocationListOut > (D3DDDI_PATCHLOCATIONLIST *)(v70 + 8 * v71) )
      {
        WdLogSingleEntry1(1LL, 9347LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pPresentDdiArg->pPatchLocationListOut <= GetVidMmExport()->VidMmGetDmaPatchLocationList(pVidMmDmaBuff"
                    "er) + GetVidMmExport()->VidMmGetDmaPatchLocationListLength(pVidMmDmaBuffer)",
          9347LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v42 = 0xAAAAAAAAAAAAAAABuLL
          * (((__int64)v9->pPatchLocationListOut
            - (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                            + 760LL)
                                                                                + 8LL)
                                                                    + 544LL))(v90)) >> 3);
      if ( (*(unsigned int (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                              + 760LL)
                                                                                  + 8LL)
                                                                      + 536LL))(v90) < (unsigned int)v42 )
      {
        WdLogSingleEntry1(1LL, 9357LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"GetVidMmExport()->VidMmGetDmaPatchLocationListLength(pVidMmDmaBuffer) >= PatchLocationTableLength",
          9357LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      if ( (qword_1C013A870 & 0x10) != 0 )
      {
        v72 = (*(__int64 (__fastcall **)(struct _VIDMM_DMA_BUFFER *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                            + 760LL)
                                                                                + 8LL)
                                                                    + 544LL))(v90);
        TraceDxgkPatchLocationList((__int64)this, (__int64)v90, v42, v72);
      }
    }
    if ( !(_DWORD)v92
      && !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                            + 736LL)
                                                                + 8LL)
                                                    + 568LL))(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                        + 744LL)) )
    {
      WdLogSingleEntry1(1LL, 9372LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"DMABufferLength > 0 || GetVidSchExport()->VidSchIsTDRPending(GetRenderCore()->GetVidSchGlobal())",
        9372LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    v44 = *(_DWORD *)a8;
    if ( (*(_DWORD *)a8 & 0x20) != 0 )
    {
      if ( v88 || v89 )
        v73 = 64LL;
      else
        v73 = 0LL;
      v74 = v73 | v44 & 0xFFFFFFBF;
      *(_DWORD *)a8 = v74;
      if ( (v74 & 0x40) != 0 && bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100) != 0 )
        McTemplateK0q_EtwWriteTransfer(v73, &EventPerformanceWarning, v43, 1);
    }
    else
    {
      *(_DWORD *)a8 = v44 & 0xFFFFFFBF;
    }
    *((_QWORD *)a8 + 1) = v90;
    *((_DWORD *)a8 + 13) = (_DWORD)v92;
    v45 = (int)v96;
    *((_DWORD *)a8 + 19) = (_DWORD)v96;
    *((_DWORD *)a8 + 12) = 0;
    *((_DWORD *)a8 + 15) = 3;
    *((_DWORD *)a8 + 14) = 0;
    *((_DWORD *)a8 + 17) = v42;
    *((_DWORD *)a8 + 16) = 0;
    *((_DWORD *)a8 + 18) = 0;
    if ( *((_BYTE *)this + 438) )
    {
      *((_DWORD *)a8 + 20) = v45;
      *((_DWORD *)a8 + 19) = v9->DmaBufferPrivateDataSize;
    }
    v46 = (char *)a8 + 600;
    if ( *((_BYTE *)a8 + 356) )
    {
      v47 = (unsigned int *)((char *)a8 + 600);
      v48 = &v46[*((_DWORD *)a8 + 151) * ((8 * *((_DWORD *)a8 + 152) + 231) & 0xFFFFFFF8) + 48];
    }
    else
    {
      v47 = (unsigned int *)((char *)a8 + 496);
      v48 = (char *)a8 + 504;
    }
    v49 = *((_DWORD *)a8 + 30) == 4;
    v92 = v48;
    v96 = v47;
    if ( v49 )
    {
      if ( !v91 )
      {
        WdLogSingleEntry1(1LL, 9410LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pSrcAllocation", 9410LL, 0LL, 0LL, 0LL, 0LL);
      }
      if ( (*(_DWORD *)a8 & 0x40) != 0 )
      {
        WdLogSingleEntry1(1LL, 9411LL);
        DxgkLogInternalTriageEvent(
          0LL,
          262146,
          -1,
          (__int64)L"pVidSchSubmitData->SubmitFlags.SplitedPresent == FALSE",
          9411LL,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      v75 = v92;
      *v96 = *v96 & 0xFFFFFC00 | 1;
      if ( (*(int (__fastcall **)(_QWORD, _QWORD, char *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                             + 16LL)
                                                                                 + 760LL)
                                                                     + 8LL)
                                                         + 408LL))(
             *(_QWORD *)(*((_QWORD *)this + 2) + 792LL),
             *((_QWORD *)v91 + 3),
             v75) < 0 )
      {
        WdLogSingleEntry1(1LL, 9430LL);
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NT_SUCCESS(RefStatus)", 9430LL, 0LL, 0LL, 0LL, 0LL);
      }
      v93 = 0;
      if ( *((_BYTE *)a8 + 356) )
        v76 = (char *)a8 + *((_DWORD *)a8 + 151) * ((8 * *((_DWORD *)a8 + 152) + 231) & 0xFFFFFFF8) + 640;
      else
        v76 = (char *)a8 + 520;
      (*(void (__fastcall **)(_QWORD, _QWORD, int *, char *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                            + 760LL)
                                                                                + 8LL)
                                                                    + 208LL))(
        *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 768LL),
        *(_QWORD *)(*((_QWORD *)v91 + 6) + 8LL),
        &v93,
        v76,
        0LL);
      v77 = *((_BYTE *)a8 + 356);
      if ( v77 )
      {
        *(_WORD *)&v46[*((_DWORD *)a8 + 151) * ((8 * *((_DWORD *)a8 + 152) + 231) & 0xFFFFFFF8) + 32] = v93;
        v77 = *((_BYTE *)a8 + 356);
      }
      else
      {
        *((_DWORD *)a8 + 139) ^= (*((_DWORD *)a8 + 139) ^ (v93 << 17)) & 0x3E0000;
      }
      v78 = v91;
      v79 = *((_QWORD *)v91 + 5);
      if ( v79 && (*(_DWORD *)(v79 + 4) & 8) != 0 )
        v80 = *(_QWORD *)(*(_QWORD *)(v79 + 56) + 184LL);
      else
        v80 = 0LL;
      if ( v77 )
        *(_QWORD *)&v46[*((_DWORD *)a8 + 151) * ((8 * *((_DWORD *)a8 + 152) + 231) & 0xFFFFFFF8) + 56] = v80;
      else
        *((_QWORD *)a8 + 72) = v80;
      if ( *((_BYTE *)a8 + 356) )
        v81 = (char *)a8 + *((_DWORD *)a8 + 151) * ((8 * *((_DWORD *)a8 + 152) + 231) & 0xFFFFFFF8) + 624;
      else
        v81 = (char *)a8 + 512;
      *(_QWORD *)v81 = *(_QWORD *)(*((_QWORD *)v78 + 6) + 16LL);
      if ( *((_BYTE *)a8 + 356) )
        v82 = (char *)a8 + *((_DWORD *)a8 + 151) * ((8 * *((_DWORD *)a8 + 152) + 231) & 0xFFFFFFF8) + 616;
      else
        v82 = (char *)a8 + 568;
      *(_QWORD *)v82 = *((_QWORD *)this + 23);
      if ( *((_BYTE *)a8 + 356) )
        *((_DWORD *)a8 + 160) = -1;
    }
    else if ( (*v47 & 0x3FF) != 0 )
    {
      WdLogSingleEntry1(1LL, 9469LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"pVidSchFlipMultiplaneOverlay->ToLayers == 0",
        9469LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( *((struct _KTHREAD **)this + 57) != KeGetCurrentThread() )
    {
      WdLogSingleEntry1(1LL, 9472LL);
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"GetContextLock()->IsExclusiveOwner()",
        9472LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    if ( (*v17 & 0x10) != 0 )
    {
      v83 = v97;
      *((_QWORD *)a8 + 62) = *((_QWORD *)v97 + 12);
      *((_DWORD *)a8 + 126) = 0;
      *((_QWORD *)a8 + 65) = *(_QWORD *)(*((_QWORD *)v83 + 11) + 64LL);
      *((_QWORD *)a8 + 64) = *(_QWORD *)(*((_QWORD *)v83 + 11) + 48LL);
      v50 = (*(__int64 (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL)
                                                                                            + 8LL)
                                                                                + 432LL))(
              *((_QWORD *)v83 + 5),
              a8);
    }
    else
    {
      v50 = (*(__int64 (__fastcall **)(_QWORD, struct VIDSCH_SUBMIT_DATA_BASE *))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL)
                                                                                            + 8LL)
                                                                                + 424LL))(
              *((_QWORD *)this + 32),
              a8);
    }
    v51 = v50;
    if ( v50 < 0 )
      break;
    v10 = 0LL;
    v11 = v91;
    v14 = v98;
    v12 = v101;
    v90 = 0LL;
    if ( !v89 && !v88 )
      return (unsigned int)v23;
  }
  (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 736LL)
                                                     + 8LL)
                                         + 440LL))(
    *((_QWORD *)this + 32),
    0LL);
  if ( (*v96 & 0x3FF) != 0 && *(_QWORD *)v92 )
    (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2)
                                                                                               + 16LL)
                                                                                   + 760LL)
                                                                       + 8LL)
                                                           + 424LL))(
      *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 768LL),
      *((unsigned int *)a8 + 34),
      *(_QWORD *)v92,
      0LL);
  LODWORD(v23) = v51;
LABEL_145:
  v15 = 1;
LABEL_153:
  if ( v90 )
  {
    if ( v94 )
    {
      (*(void (**)(void))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 760LL) + 8LL) + 512LL))();
      if ( (*v17 & 0x10) == 0 )
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                       + 736LL)
                                                           + 8LL)
                                               + 440LL))(
          *((_QWORD *)this + 32),
          0LL);
    }
    if ( DXGADAPTER::IsDxgmms2(*(DXGADAPTER **)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 16LL)) )
    {
      v85 = 0;
      if ( *((_DWORD *)a8 + 50) )
      {
        do
        {
          v86 = *((_QWORD *)a8 + v85 + 26);
          if ( v86 )
          {
            (*(void (__fastcall **)(_QWORD, _QWORD, __int64, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                            + 760LL)
                                                                                + 8LL)
                                                                    + 424LL))(
              *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL) + 768LL),
              0LL,
              v86,
              0LL);
            *((_QWORD *)a8 + v85 + 26) = 0LL;
          }
          ++v85;
        }
        while ( v85 < *((_DWORD *)a8 + 50) );
        v84 = *((_QWORD *)this + 2);
      }
    }
    if ( v15 )
    {
      v87 = *(_QWORD *)(v84 + 16);
      LOBYTE(v84) = 1;
      (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, __int64))(*(_QWORD *)(*(_QWORD *)(v87 + 760) + 8LL) + 576LL))(
        v90,
        v84);
    }
    (*(void (__fastcall **)(struct _VIDMM_DMA_BUFFER *, _QWORD))(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 16LL)
                                                                                       + 760LL)
                                                                           + 8LL)
                                                               + 496LL))(
      v90,
      0LL);
  }
  return (unsigned int)v23;
}
