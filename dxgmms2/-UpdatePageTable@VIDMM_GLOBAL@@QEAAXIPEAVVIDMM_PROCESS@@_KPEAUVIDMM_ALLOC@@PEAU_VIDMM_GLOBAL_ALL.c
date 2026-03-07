// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_GLOBAL::UpdatePageTable(
        VIDMM_GLOBAL *this,
        UINT a2,
        struct VIDMM_PROCESS *a3,
        D3DGPU_VIRTUAL_ADDRESS a4,
        struct VIDMM_ALLOC *a5,
        struct _VIDMM_GLOBAL_ALLOC *a6,
        UINT64 a7,
        UINT a8,
        LONG a9,
        struct _DXGK_PTE *a10,
        struct _DXGK_PTE *a11,
        unsigned int a12,
        UINT a13,
        SIZE_T a14,
        enum _DXGK_PAGETABLEUPDATEMODE a15,
        unsigned __int64 a16,
        LONG a17,
        unsigned __int64 a18)
{
  bool v18; // zf
  UINT v19; // edi
  struct _VIDMM_GLOBAL_ALLOC *v21; // rsi
  unsigned int v22; // r13d
  LONG v23; // ebx
  enum _DXGK_PAGETABLEUPDATEMODE v24; // r12d
  __int64 v25; // rax
  __int64 v26; // r10
  _QWORD *v27; // rcx
  __int64 v28; // rax
  __int64 v29; // rax
  void *v30; // rax
  _QWORD *v31; // rdx
  D3DGPU_VIRTUAL_ADDRESS v32; // r11
  _DWORD *v33; // r15
  __int64 v34; // r9
  _QWORD *v35; // r9
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rdx
  void *v39; // rcx
  UINT v40; // eax
  int v41; // eax
  __int64 v42; // rsi
  __int64 v43; // rdi
  DXGGLOBAL *Global; // rax
  void *v45; // rax
  void (*v46)(void *); // r8
  __int64 v47; // r9
  unsigned int NumPageTableEntries; // r15d
  __int64 v49; // rsi
  _OWORD *VaPagingHistoryEntry; // rax
  _OWORD *v51; // rdx
  __int64 v52; // rsi
  int v53; // r9d
  int v54; // edi
  _DWORD *v55; // rax
  _DWORD *v56; // rcx
  _DWORD *v57; // rcx
  __int64 v58; // r9
  __int64 v59; // r8
  UINT FillPattern; // r11d
  SIZE_T OffsetInPages; // r10
  __int64 v62; // rdx
  unsigned int v63; // esi
  unsigned __int64 v64; // rdi
  __int64 v65; // r13
  __int64 v66; // rdi
  D3DGPU_VIRTUAL_ADDRESS v67; // r12
  __int64 v68; // rax
  __int64 v69; // rdx
  SIZE_T v70; // rcx
  struct VIDMM_PROCESS *v71; // r8
  struct _VIDMM_GLOBAL_ALLOC *v72; // rcx
  __int64 v73; // rax
  __int64 v74; // rax
  __int64 v75; // rcx
  __int64 v76; // r8
  DXGK_PTE *pPageTableEntries64KB; // r8
  unsigned int v78; // r9d
  __int64 v79; // r10
  __int128 v80; // xmm0
  __int64 v81; // rcx
  char v82; // al
  struct _DXGKARG_BUILDPAGINGBUFFER *v83; // rax
  _OWORD *v84; // rdx
  __int64 v85; // rcx
  __int128 v86; // xmm0
  __int64 v87; // rcx
  unsigned __int8 v88[8]; // [rsp+30h] [rbp-F8h]
  unsigned __int8 v89[8]; // [rsp+38h] [rbp-F0h]
  __int64 v90; // [rsp+40h] [rbp-E8h]
  __int64 v91; // [rsp+48h] [rbp-E0h]
  __int64 v92; // [rsp+50h] [rbp-D8h]
  __int64 v93; // [rsp+58h] [rbp-D0h]
  __int64 v94; // [rsp+60h] [rbp-C8h]
  __int64 v95; // [rsp+70h] [rbp-B8h]
  __int64 v96; // [rsp+78h] [rbp-B0h]
  __int64 v97; // [rsp+80h] [rbp-A8h]
  __int64 v98; // [rsp+98h] [rbp-90h]
  unsigned __int64 v99; // [rsp+A8h] [rbp-80h] BYREF
  enum _DXGK_PAGETABLEUPDATEMODE v100; // [rsp+B0h] [rbp-78h]
  unsigned int v101; // [rsp+B4h] [rbp-74h]
  UINT v102; // [rsp+B8h] [rbp-70h]
  _DWORD *v103; // [rsp+C0h] [rbp-68h]
  struct _DXGKARG_BUILDPAGINGBUFFER v104; // [rsp+C8h] [rbp-60h] BYREF
  SIZE_T v105; // [rsp+208h] [rbp+E0h]
  struct VIDMM_PROCESS *v106; // [rsp+210h] [rbp+E8h]
  __int64 v107; // [rsp+218h] [rbp+F0h]
  struct _VIDMM_GLOBAL_ALLOC *v108; // [rsp+220h] [rbp+F8h]
  struct _DXGK_PTE *v109; // [rsp+228h] [rbp+100h]
  DXGK_PTE *v110; // [rsp+230h] [rbp+108h]
  D3DGPU_VIRTUAL_ADDRESS v111; // [rsp+238h] [rbp+110h]
  _DWORD *v112; // [rsp+240h] [rbp+118h]
  _DWORD *v113; // [rsp+248h] [rbp+120h]
  char *v114; // [rsp+250h] [rbp+128h]
  _DWORD *v115; // [rsp+258h] [rbp+130h]
  char *v116; // [rsp+260h] [rbp+138h]
  __int64 *v117; // [rsp+268h] [rbp+140h]
  __int128 v118; // [rsp+270h] [rbp+148h] BYREF
  unsigned __int64 v119; // [rsp+350h] [rbp+228h]

  v18 = *((_BYTE *)this + 7088) == 0;
  v19 = a2;
  v21 = a6;
  v22 = a12;
  v23 = a17;
  v109 = a10;
  v110 = a11;
  v105 = a14;
  v111 = a4;
  v106 = a3;
  v102 = a2;
  v108 = a6;
  v101 = a12;
  if ( v18 )
  {
    v24 = DXGK_PAGETABLEUPDATE_CPU_VIRTUAL;
    if ( (*((_BYTE *)this + 40936) & 0x40) == 0 )
      v24 = a15;
    v100 = v24;
    memset(&v104, 0, sizeof(v104));
    v25 = *((_QWORD *)this + 2);
    v26 = a12;
    v107 = a12;
    v27 = *(_QWORD **)(v25 + 744);
    v28 = *(_QWORD *)(v27[34] + 8LL * a12);
    if ( v28 )
    {
      v30 = *(void **)(v28 + 48);
    }
    else
    {
      if ( (*((_BYTE *)this + 40937) & 0x20) != 0 )
        v29 = v27[36];
      else
        v29 = v27[33];
      v30 = *(void **)(*(_QWORD *)(v29 + 8LL * a12) + 64LL);
    }
    v104.hSystemContext = v30;
    v31 = (_QWORD *)((char *)this + 8 * a12 + 2680);
    v104.MultipassOffset = 0;
    v32 = a16 << 12;
    v112 = (_DWORD *)((char *)this + 8 * a12 + 3192);
    v119 = a16 << 12;
    v103 = v31;
    v113 = (_DWORD *)((char *)this + 4 * a12 + 1656);
    v33 = (_DWORD *)((char *)this + 4 * a12 + 2168);
    v115 = v33;
    v114 = (char *)this + 4 * a12 + 116;
    v116 = (char *)this + 4 * a12 + 372;
    v117 = (__int64 *)((char *)this + 8 * a12 + 1144);
    while ( 1 )
    {
      v34 = *((_QWORD *)this + v26 + 79);
      if ( (*(_DWORD *)(v34 + 32) & 4) == 0 )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 29LL, v34, 0LL, 0LL);
        v26 = v107;
        v32 = v119;
        v31 = v103;
      }
      v35 = (_QWORD *)*((_QWORD *)this + v26 + 143);
      if ( *(_DWORD *)(*((_QWORD *)this + v26 + 79) + 36LL) )
        v36 = *(_QWORD *)(v35[7] + 392LL);
      else
        v36 = v35[9];
      v37 = *((unsigned int *)this + v26 + 414);
      *v31 = v37 + v36;
      v38 = (unsigned int)*v33;
      v104.pDmaBuffer = (void *)(v37 + v36);
      v39 = (void *)(v38 + v35[16]);
      *((_QWORD *)this + v26 + 399) = v39;
      v40 = *((_DWORD *)this + v26 + 29) - v37;
      v104.pDmaBufferPrivateData = v39;
      v104.DmaSize = v40;
      v104.DmaBufferPrivateDataSize = *((_DWORD *)this + v26 + 93) - v38;
      v104.DmaBufferGpuVirtualAddress = v35[12];
      v41 = v23;
      v104.DmaBufferWriteOffset = v37;
      v104.Operation = DXGK_OPERATION_UPDATE_PAGE_TABLE;
      v104.Transfer.Destination.SegmentAddress.HighPart = v23;
      v104.UnmapApertureSegment.DummyPage.HighPart = a9;
      v118 = 0LL;
      if ( (unsigned int)v24 > DXGK_PAGETABLEUPDATE_GPU_VIRTUAL )
      {
        v104.Fill.FillPattern = a13;
        v104.MapApertureSegment.OffsetInPages = v105;
      }
      else
      {
        v104.Transfer.TransferSize = v105;
      }
      v104.Transfer.Destination.SegmentId = a8;
      v104.ReadPhysical.SegmentId = v19;
      if ( v109 )
      {
        v104.Transfer.Source.SegmentAddress.QuadPart = (LONGLONG)v109;
        v104.UpdatePageTable.pPageTableEntries64KB = v110;
      }
      else
      {
        v104.Transfer.Source.SegmentAddress.QuadPart = (LONGLONG)&v118;
        if ( (**(_DWORD **)(1616 * v26 + *((_QWORD *)this + 5028) + 448) & 0x80u) != 0 )
          v104.UpdatePageTable.pPageTableEntries64KB = (DXGK_PTE *)&v118;
        v41 = v23 | 1;
        v104.Transfer.Destination.SegmentAddress.HighPart = v23 | 1;
      }
      v104.Reserved.Reserved[20] = v24;
      v104.UpdatePageTable.FirstPteVirtualAddress = v32;
      if ( !v19 )
      {
        if ( a18 == 16 )
        {
          if ( (v23 & 8) != 0 )
            goto LABEL_84;
        }
        else if ( a18 == 1 && (v23 & 8) == 0 )
        {
LABEL_84:
          v104.Transfer.Destination.SegmentAddress.HighPart = v41 | 1;
        }
      }
      v104.TransferVirtual.DestinationPageTable = v111;
      if ( v21 )
      {
        v70 = *(_QWORD *)(*((_QWORD *)v21 + 67) + 40LL);
        v104.UpdatePageTable.AllocationOffsetInBytes = a7;
        v104.Fill.FillSize = v70;
      }
      v42 = *(unsigned int *)(*((_QWORD *)this + 3) + 240LL);
      v43 = *((_QWORD *)v106 + 4);
      Global = DXGGLOBAL::GetGlobal();
      if ( (unsigned int)v42 < (unsigned int)DXGGLOBAL::GetMaximumGlobalAdapterCount(Global)
        && *(_QWORD *)(8 * v42 + *(_QWORD *)(v43 + 48)) )
      {
        _mm_lfence();
        v45 = *(void **)(*(_QWORD *)(*(_QWORD *)(v43 + 48) + 8 * v42) + 48LL);
      }
      else
      {
        v45 = 0LL;
      }
      v104.UpdatePageTable.hProcess = v45;
      if ( VIDMM_GLOBAL::IsGpuVaPagingHistoryEnabled(this)
        && (VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled || *((_QWORD *)this + 5123)) )
      {
        NumPageTableEntries = v104.UpdatePageTable.NumPageTableEntries;
        if ( (v104.Reserved.Reserved[13] & 1) != 0 )
          NumPageTableEntries = 1;
        v49 = 16LL * (NumPageTableEntries - 1);
        if ( v104.UpdatePageTable.pPageTableEntries64KB )
          v49 += 16LL * NumPageTableEntries;
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx((char *)this + 41000, 0LL);
        v18 = !VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled;
        *((_QWORD *)this + 5126) = KeGetCurrentThread();
        if ( v18 )
          VaPagingHistoryEntry = (_OWORD *)VIDMM_GLOBAL::AllocateVaPagingHistoryEntry(this, 4LL, v49 + 168);
        else
          VaPagingHistoryEntry = operator new(168, (VIDMM_GLOBAL *)((char *)this + 41024), 4u, v49);
        v51 = VaPagingHistoryEntry;
        if ( VaPagingHistoryEntry )
        {
          v71 = v106;
          v72 = v108;
          *VaPagingHistoryEntry = *(_OWORD *)&v104.Transfer.hAllocation;
          VaPagingHistoryEntry[1] = *(_OWORD *)&v104.NotifyResidency.PhysicalAddress.SegmentOffset;
          VaPagingHistoryEntry[2] = *(_OWORD *)&v104.Reserved.Reserved[8];
          VaPagingHistoryEntry[3] = *(_OWORD *)&v104.Reserved.Reserved[12];
          VaPagingHistoryEntry[4] = *(_OWORD *)&v104.Reserved.Reserved[16];
          VaPagingHistoryEntry[5] = *(_OWORD *)&v104.Reserved.Reserved[20];
          *((_QWORD *)VaPagingHistoryEntry + 12) = v104.UpdatePageTable.FirstPteVirtualAddress;
          *((_DWORD *)VaPagingHistoryEntry + 36) = v22;
          *((_QWORD *)VaPagingHistoryEntry + 15) = a5;
          *((_QWORD *)VaPagingHistoryEntry + 16) = v72;
          *((_QWORD *)VaPagingHistoryEntry + 13) = *(_QWORD *)v71;
          *((_QWORD *)VaPagingHistoryEntry + 14) = *((_QWORD *)v71 + 4);
          if ( a5 && (v73 = *((_QWORD *)a5 + 2)) != 0 )
          {
            v74 = *(_QWORD *)(v73 + 32);
          }
          else if ( v72 )
          {
            v74 = *(_QWORD *)(*((_QWORD *)v72 + 67) + 40LL);
          }
          else
          {
            v74 = 0LL;
          }
          *((_QWORD *)v51 + 17) = v74;
          if ( NumPageTableEntries )
          {
            v75 = 0LL;
            v76 = NumPageTableEntries;
            do
            {
              ++v75;
              *(_OWORD *)((char *)&v51[v75 + 8] + 8) = *(_OWORD *)(v75 * 16
                                                                 + v104.Transfer.Source.SegmentAddress.QuadPart
                                                                 - 16);
              --v76;
            }
            while ( v76 );
          }
          pPageTableEntries64KB = v104.UpdatePageTable.pPageTableEntries64KB;
          if ( v104.UpdatePageTable.pPageTableEntries64KB )
          {
            v78 = 0;
            if ( NumPageTableEntries )
            {
              v79 = 0LL;
              while ( 1 )
              {
                v80 = *(_OWORD *)&pPageTableEntries64KB[v79].0;
                v81 = v78 + NumPageTableEntries;
                ++v78;
                ++v79;
                *(_OWORD *)((char *)&v51[v81 + 9] + 8) = v80;
                if ( v78 >= NumPageTableEntries )
                  break;
                pPageTableEntries64KB = v104.UpdatePageTable.pPageTableEntries64KB;
              }
            }
          }
        }
        *((_QWORD *)this + 5126) = 0LL;
        ExReleasePushLockExclusiveEx((char *)this + 41000, 0LL);
        KeLeaveCriticalRegion();
      }
      if ( !v104.ReadPhysical.SegmentId && *((_QWORD *)this + 5132) && (v104.Reserved.Reserved[13] & 1) == 0 )
      {
        v46 = (void (*)(void *))v104.UpdatePageTable.NumPageTableEntries;
        v47 = 4096LL;
        if ( (v104.Reserved.Reserved[13] & 8) != 0 )
          v47 = 0x10000LL;
        v63 = 0;
        LODWORD(v99) = v47;
        if ( v104.UnmapApertureSegment.DummyPage.HighPart )
        {
          do
          {
            v64 = *(_QWORD *)(v104.Transfer.Source.SegmentAddress.QuadPart + 16LL * v63);
            if ( (v64 & 1) != 0 )
            {
              v65 = *(_QWORD *)(v104.Transfer.Source.SegmentAddress.QuadPart + 16LL * v63 + 8);
              v66 = (v64 >> 5) & 0x1F;
              v67 = v104.UpdatePageTable.FirstPteVirtualAddress + (unsigned int)v47 * v63;
              if ( *((_QWORD *)this + 5132) )
              {
                KeEnterCriticalRegion();
                ExAcquirePushLockExclusiveEx((char *)this + 41000, 0LL);
                *((_QWORD *)this + 5126) = KeGetCurrentThread();
                v68 = *((unsigned int *)this + 10266);
                if ( (_DWORD)v68 == dword_1C0076464 )
                {
                  *((_DWORD *)this + 10266) = 0;
                  v68 = 0LL;
                }
                v69 = *((_QWORD *)this + 5132) + 48 * v68;
                *(_QWORD *)v69 = MEMORY[0xFFFFF78000000014];
                *(_DWORD *)(v69 + 32) = 1;
                *(_DWORD *)(v69 + 36) = v66;
                *(_QWORD *)(v69 + 8) = v65;
                *(_QWORD *)(v69 + 16) = 1LL;
                *(_QWORD *)(v69 + 24) = v67;
                *(_DWORD *)(v69 + 40) = *((_DWORD *)this + 10248);
                ++*((_DWORD *)this + 10266);
                *((_QWORD *)this + 5126) = 0LL;
                ExReleasePushLockExclusiveEx((char *)this + 41000, 0LL);
                KeLeaveCriticalRegion();
                v46 = (void (*)(void *))v104.UpdatePageTable.NumPageTableEntries;
                v47 = (unsigned int)v99;
              }
            }
            ++v63;
          }
          while ( v63 < (unsigned int)v46 );
          v23 = a17;
          v24 = v100;
          v22 = v101;
        }
      }
      if ( (*(_DWORD *)(*((_QWORD *)this + 3) + 436LL) & 0x200) != 0
        && v24 == DXGK_PAGETABLEUPDATE_CPU_VIRTUAL
        && *((VIDMM_GLOBAL **)this + 473) != (VIDMM_GLOBAL *)((char *)this + 3784)
        && *((_BYTE *)this + 40939)
        && (v23 & 2) != 0 )
      {
        VIDMM_GLOBAL::FlushPagingBuffer(this, 0, v46, (void *)v47);
        VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, v22);
        *((_BYTE *)this + 40939) = 0;
      }
      v52 = (int)ADAPTER_RENDER::DdiBuildPagingBuffer(
                   *((ADAPTER_RENDER **)this + 2),
                   (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)&v104);
      v99 = -1LL;
      v53 = LODWORD(v104.pDmaBuffer) - *v103;
      v54 = LODWORD(v104.pDmaBufferPrivateData) - *v112;
      if ( LODWORD(v104.pDmaBuffer) != *v103 || v54 )
      {
        VIDMM_GLOBAL::GetOrGeneratePendingPagingBufferFence(this, v22, &v99);
        v82 = *((_BYTE *)this + 40937);
        if ( (v82 & 8) != 0 )
          *((_BYTE *)this + 40937) = v82 & 0xF7;
      }
      v55 = v113;
      v56 = v114;
      *v113 += v53;
      if ( *v55 > *v56 )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 18LL, 0LL, 0LL, 0LL);
      }
      v33 = v115;
      v57 = v116;
      *v115 += v54;
      if ( *v33 > *v57 )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 19LL, 0LL, 0LL, 0LL);
      }
      if ( bTracingEnabled )
      {
        v58 = *((_QWORD *)this + 3);
        v59 = *v117;
        if ( v104.Operation == DXGK_OPERATION_UPDATE_PAGE_TABLE )
        {
          v57 = (_DWORD *)v104.Reserved.Reserved[20];
          FillPattern = 0;
          if ( v104.Reserved.Reserved[20] > 1 )
          {
            if ( v104.Reserved.Reserved[20] == 2 )
            {
              OffsetInPages = v104.MapApertureSegment.OffsetInPages;
              FillPattern = v104.Fill.FillPattern;
            }
            else
            {
              OffsetInPages = 0LL;
            }
          }
          else
          {
            OffsetInPages = v104.Transfer.TransferSize;
          }
          if ( (byte_1C00769C1 & 8) != 0 )
          {
            LODWORD(v98) = v104.UpdatePageTable.UpdateMode;
            LODWORD(v96) = v104.Transfer.Destination.SegmentAddress.HighPart;
            LODWORD(v93) = v104.UnmapApertureSegment.DummyPage.HighPart;
            LODWORD(v95) = v104.Transfer.Destination.SegmentId;
            LODWORD(v92) = FillPattern;
            LODWORD(v90) = v104.ReadPhysical.SegmentId;
            *(_DWORD *)v88 = v52 == -1071775743;
            McTemplateK0pptpqxqqppqqxxpqx_EtwWriteTransfer(
              (__int64)&DxgkControlGuid_Context,
              (__int64)&EventPagingOpUpdatePageTable,
              0LL,
              v58,
              v59,
              *(_QWORD *)v88,
              0LL,
              v90,
              OffsetInPages,
              v92,
              v93,
              v104.Transfer.Source.SegmentAddress.QuadPart,
              v104.UpdatePageTable.pPageTableEntries64KB,
              v95,
              v96,
              *(_OWORD *)&v104.Reserved.Reserved[14],
              v104.UpdatePageTable.hProcess,
              v98,
              v104.UpdatePageTable.FirstPteVirtualAddress);
          }
        }
        else if ( v104.Operation == DXGK_OPERATION_FLUSH_TLB )
        {
          if ( (byte_1C00769C1 & 8) != 0 )
          {
            LODWORD(v90) = v104.ReadPhysical.SegmentId;
            *(_DWORD *)v88 = v52 == -1071775743;
            McTemplateK0pptpqxpxx_EtwWriteTransfer(
              (__int64)&DxgkControlGuid_Context,
              (__int64)&EventPagingOpFlushTlb,
              0LL,
              v58,
              v59,
              *(_QWORD *)v88,
              0LL,
              v90,
              *(_OWORD *)&v104.SpecialLockTransfer.TransferOffset,
              *(_OWORD *)&v104.Reserved.Reserved[6]);
          }
        }
        else
        {
          switch ( v104.Operation )
          {
            case DXGK_OPERATION_TRANSFER:
              if ( (byte_1C00769C1 & 8) != 0 )
              {
                LODWORD(v95) = v104.Transfer.Flags.0;
                LODWORD(v94) = v104.Transfer.Destination.SegmentId;
                LODWORD(v92) = v104.Transfer.Source.SegmentId;
                LODWORD(v90) = v104.Transfer.TransferOffset;
                *(_DWORD *)v88 = v52 == -1071775743;
                McTemplateK0pptpqxqxqxq_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  (__int64)&EventPagingOpTransfer,
                  0LL,
                  v58,
                  v59,
                  *(_QWORD *)v88,
                  0LL,
                  v90,
                  v104.Transfer.TransferSize,
                  v92,
                  v104.Transfer.Source.SegmentAddress.QuadPart,
                  v94,
                  v104.Transfer.Destination.SegmentAddress.QuadPart,
                  v95);
              }
              break;
            case DXGK_OPERATION_FILL:
              if ( (byte_1C00769C1 & 8) != 0 )
              {
                LODWORD(v92) = v104.Transfer.Source.SegmentId;
                LODWORD(v91) = v104.Fill.FillPattern;
                *(_DWORD *)v88 = v52 == -1071775743;
                McTemplateK0pptpxqqx_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  (__int64)&EventPagingOpFill,
                  0LL,
                  v58,
                  v59,
                  *(_QWORD *)v88,
                  0LL,
                  v104.Fill.FillSize,
                  v91,
                  v92,
                  v104.Transfer.Source.SegmentAddress.QuadPart);
              }
              break;
            case DXGK_OPERATION_DISCARD_CONTENT:
              if ( (byte_1C00769C1 & 8) != 0 )
              {
                LODWORD(v91) = v104.DiscardContent.SegmentId;
                LODWORD(v90) = v104.Transfer.TransferOffset;
                *(_DWORD *)v88 = v52 == -1071775743;
                McTemplateK0pptpqqx_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  (__int64)&EventPagingOpDiscard,
                  0LL,
                  v58,
                  v59,
                  *(_QWORD *)v88,
                  0LL,
                  v90,
                  v91,
                  v104.Transfer.TransferSize);
              }
              break;
            case DXGK_OPERATION_READ_PHYSICAL:
              if ( (byte_1C00769C1 & 8) != 0 )
              {
                *(_DWORD *)v89 = v104.ReadPhysical.SegmentId;
                *(_DWORD *)v88 = v52 == -1071775743;
                McTemplateK0pptqx_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  &EventPagingOpReadPhysical,
                  0LL,
                  v58,
                  v59,
                  *(_QWORD *)v88,
                  *(_QWORD *)v89,
                  v104.Fill.FillSize);
              }
              break;
            case DXGK_OPERATION_WRITE_PHYSICAL:
              if ( (byte_1C00769C1 & 8) != 0 )
              {
                *(_DWORD *)v89 = v104.ReadPhysical.SegmentId;
                *(_DWORD *)v88 = v52 == -1071775743;
                McTemplateK0pptqx_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  &EventPagingOpWritePhysical,
                  0LL,
                  v58,
                  v59,
                  *(_QWORD *)v88,
                  *(_QWORD *)v89,
                  v104.Fill.FillSize);
              }
              break;
            case DXGK_OPERATION_MAP_APERTURE_SEGMENT:
              if ( (byte_1C00769C1 & 8) != 0 )
              {
                LODWORD(v94) = 0;
                LODWORD(v93) = v104.Transfer.Destination.SegmentAddress.LowPart;
                LODWORD(v90) = v104.Fill.FillPattern;
                *(_DWORD *)v88 = v52 == -1071775743;
                McTemplateK0pptpqxxqt_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  &EventPagingOpMapApertureSegment,
                  0LL,
                  v58,
                  v59,
                  *(_QWORD *)v88,
                  0LL,
                  v90,
                  *(_OWORD *)&v104.Reserved.Reserved[6],
                  v93,
                  v94);
              }
              break;
            case DXGK_OPERATION_UNMAP_APERTURE_SEGMENT:
              if ( (byte_1C00769C1 & 8) != 0 )
              {
                LODWORD(v93) = 0;
                LODWORD(v90) = v104.Fill.FillPattern;
                *(_DWORD *)v88 = v52 == -1071775743;
                McTemplateK0pptpqxxt_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  (__int64)&EventPagingOpUnmapApertureSegment,
                  0LL,
                  v58,
                  v59,
                  *(_QWORD *)v88,
                  0LL,
                  v90,
                  *(_OWORD *)&v104.Reserved.Reserved[6],
                  v93);
              }
              break;
            case DXGK_OPERATION_SPECIAL_LOCK_TRANSFER:
              if ( (byte_1C00769C1 & 8) != 0 )
              {
                LODWORD(v97) = v104.SpecialLockTransfer.SwizzlingRangeData;
                LODWORD(v96) = v104.Transfer.MdlOffset;
                LODWORD(v95) = v104.Transfer.Flags.0;
                LODWORD(v94) = v104.Transfer.Destination.SegmentId;
                LODWORD(v92) = v104.Transfer.Source.SegmentId;
                LODWORD(v90) = v104.Transfer.TransferOffset;
                *(_DWORD *)v88 = v52 == -1071775743;
                McTemplateK0pptpqxqxqxqqq_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  (__int64)&EventPagingOpSpecialLockTransfer,
                  0LL,
                  v58,
                  v59,
                  *(_QWORD *)v88,
                  0LL,
                  v90,
                  v104.Transfer.TransferSize,
                  v92,
                  v104.Transfer.Source.SegmentAddress.QuadPart,
                  v94,
                  v104.Transfer.Destination.SegmentAddress.QuadPart,
                  v95,
                  v96,
                  v97);
              }
              break;
            case DXGK_OPERATION_VIRTUAL_TRANSFER:
              if ( (byte_1C00769C1 & 8) != 0 )
              {
                LODWORD(v97) = v104.Transfer.Destination.SegmentAddress.HighPart;
                LODWORD(v96) = v104.Transfer.Destination.SegmentAddress.LowPart;
                LODWORD(v93) = MEMORY[4];
                LODWORD(v92) = MEMORY[0];
                *(_DWORD *)v88 = v52 == -1071775743;
                McTemplateK0pptpxxqqxxxqqxxx_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  (__int64)&EventPagingOpVirtualTransfer,
                  0LL,
                  v58,
                  v59,
                  *(_QWORD *)v88,
                  0LL,
                  *(_OWORD *)&v104.SpecialLockTransfer.TransferOffset,
                  v92,
                  v93,
                  *(_OWORD *)&v104.Reserved.Reserved[6],
                  v104.UnmapApertureSegment.DummyPage.QuadPart,
                  v96,
                  v97,
                  v104.TransferVirtual.DestinationPageTable,
                  MEMORY[8],
                  MEMORY[0x10]);
              }
              break;
            case DXGK_OPERATION_VIRTUAL_FILL:
              if ( (byte_1C00769C1 & 8) != 0 )
              {
                LODWORD(v93) = MEMORY[0];
                LODWORD(v92) = v104.Transfer.Source.SegmentId;
                *(_DWORD *)v88 = v52 == -1071775743;
                McTemplateK0pptpxxqqxx_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  (__int64)&EventPagingOpVirtualFill,
                  0LL,
                  v58,
                  v59,
                  *(_QWORD *)v88,
                  0LL,
                  *(_OWORD *)&v104.SpecialLockTransfer.TransferOffset,
                  v92,
                  v93,
                  v104.Transfer.Source.SegmentAddress.QuadPart,
                  MEMORY[8]);
              }
              break;
            case DXGK_OPERATION_INIT_CONTEXT_RESOURCE:
              if ( (byte_1C00769C1 & 8) != 0 )
              {
                LODWORD(v90) = v104.Transfer.TransferOffset;
                *(_DWORD *)v88 = v52 == -1071775743;
                McTemplateK0pptpqxpx_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  (__int64)&EventPagingOpInitContextResource,
                  0LL,
                  v58,
                  v59,
                  *(_QWORD *)v88,
                  0LL,
                  v90,
                  *(_OWORD *)&v104.NotifyResidency.PhysicalAddress.SegmentOffset,
                  v104.Transfer.Source.SegmentAddress.QuadPart);
              }
              break;
            case DXGK_OPERATION_UPDATE_CONTEXT_ALLOCATION:
              if ( (byte_1C00769C1 & 8) != 0 )
              {
                LODWORD(v93) = v104.Transfer.Source.SegmentId;
                *(_DWORD *)v88 = v52 == -1071775743;
                McTemplateK0pptpxxpq_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  (__int64)&EventPagingOpUpdateContextAllocation,
                  0LL,
                  v58,
                  v59,
                  *(_QWORD *)v88,
                  0LL,
                  *(_OWORD *)&v104.Transfer.hAllocation,
                  v104.Transfer.TransferSize,
                  v93);
              }
              break;
            case DXGK_OPERATION_NOTIFY_RESIDENCY:
              if ( (byte_1C00769C1 & 8) != 0 )
              {
                LODWORD(v92) = v104.Transfer.Source.SegmentId;
                LODWORD(v90) = v104.Transfer.TransferOffset;
                *(_DWORD *)v88 = v52 == -1071775743;
                McTemplateK0pptpqxq_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  (__int64)&EventPagingOpNotifyResidency,
                  0LL,
                  v58,
                  v59,
                  *(_QWORD *)v88,
                  0LL,
                  v90,
                  v104.Transfer.TransferSize,
                  v92);
              }
              break;
            case DXGK_OPERATION_SIGNAL_MONITORED_FENCE:
              if ( (byte_1C00769C1 & 8) != 0 )
              {
                *(_DWORD *)v88 = v52 == -1071775743;
                McTemplateK0pptpxx_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  (__int64)&EventPagingOpSignalMonitoredFence,
                  0LL,
                  v58,
                  v59,
                  *(_QWORD *)v88,
                  0LL,
                  *(_OWORD *)&v104.Transfer.hAllocation);
              }
              break;
            case DXGK_OPERATION_SIGNAL_MONITORED_FENCE|DXGK_OPERATION_FILL:
              if ( (byte_1C00769C1 & 8) != 0 )
              {
                LODWORD(v94) = 0;
                LODWORD(v93) = v104.Transfer.Flags.0;
                LODWORD(v90) = v104.Fill.FillPattern;
                *(_DWORD *)v88 = v52 == -1071775743;
                McTemplateK0pptpqxxqt_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  &EventPagingOpMapApertureSegment2,
                  0LL,
                  v58,
                  v59,
                  *(_QWORD *)v88,
                  0LL,
                  v90,
                  *(_OWORD *)&v104.Reserved.Reserved[6],
                  v93,
                  v94);
              }
              break;
            default:
              break;
          }
        }
      }
      v62 = *((_QWORD *)this + 985);
      if ( v62 )
      {
        *(_QWORD *)(360LL * *((unsigned int *)this + 1972) + v62 + 8) = 0LL;
        *(_QWORD *)(360LL * *((unsigned int *)this + 1972) + *((_QWORD *)this + 985) + 16) = 0LL;
        *(_DWORD *)(360LL * *((unsigned int *)this + 1972) + *((_QWORD *)this + 985)) = v22;
        v83 = &v104;
        v84 = (_OWORD *)(360LL * *((unsigned int *)this + 1972) + *((_QWORD *)this + 985) + 24LL);
        v85 = 2LL;
        do
        {
          v84 += 8;
          v86 = *(_OWORD *)&v83->pDmaBuffer;
          v83 = (struct _DXGKARG_BUILDPAGINGBUFFER *)((char *)v83 + 128);
          *(v84 - 8) = v86;
          *(v84 - 7) = *(_OWORD *)&v83[-1].Reserved.Reserved[42];
          *(v84 - 6) = *(_OWORD *)&v83[-1].Reserved.Reserved[46];
          *(v84 - 5) = *(_OWORD *)&v83[-1].Reserved.Reserved[50];
          *(v84 - 4) = *(_OWORD *)&v83[-1].Reserved.Reserved[54];
          *(v84 - 3) = *(_OWORD *)&v83[-1].Reserved.Reserved[58];
          *(v84 - 2) = *(_OWORD *)&v83[-1].Reserved.Reserved[62];
          *(v84 - 1) = *(_OWORD *)&v83[-1].DmaBufferGpuVirtualAddress;
          --v85;
        }
        while ( v85 );
        *v84 = *(_OWORD *)&v83->pDmaBuffer;
        v84[1] = *(_OWORD *)&v83->pDmaBufferPrivateData;
        v84[2] = *(_OWORD *)&v83->MultipassOffset;
        v84[3] = *(_OWORD *)&v83->SpecialLockTransfer.TransferOffset;
        *(_DWORD *)(360LL * *((unsigned int *)this + 1972) + *((_QWORD *)this + 985) + 344) = v52;
        v57 = (_DWORD *)*((_QWORD *)this + 985);
        *(_QWORD *)&v57[90 * (*((_DWORD *)this + 1972))++ + 88] = v99;
        if ( *((_DWORD *)this + 1972) >= *((_DWORD *)this + 1968) )
        {
          ++*((_DWORD *)this + 1973);
          *((_DWORD *)this + 1972) = 0;
        }
      }
      if ( (int)v52 >= 0 )
        return;
      if ( (_DWORD)v52 != -1071775743 )
      {
        v87 = *((_QWORD *)this + 3);
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 11LL, &v104, v52, v87);
        return;
      }
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v57);
      VIDMM_GLOBAL::FlushPagingBufferInternal(this, v22, 1u, 0LL, 0LL, 1u, 0);
      v26 = v107;
      v32 = v119;
      v31 = v103;
      v19 = v102;
      v21 = v108;
    }
  }
}
