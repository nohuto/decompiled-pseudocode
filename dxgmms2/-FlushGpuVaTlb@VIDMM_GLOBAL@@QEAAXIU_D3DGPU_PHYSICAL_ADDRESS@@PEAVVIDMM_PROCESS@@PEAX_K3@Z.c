// write access to const memory has been detected, the output may be wrong!
void __fastcall VIDMM_GLOBAL::FlushGpuVaTlb(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct _D3DGPU_PHYSICAL_ADDRESS *a3,
        struct VIDMM_PROCESS *a4,
        void *a5,
        unsigned __int64 a6,
        unsigned __int64 a7)
{
  VIDMM_PROCESS *v7; // r15
  __int64 v9; // r12
  _QWORD *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  void *v14; // rax
  __int64 v15; // r9
  _QWORD *v16; // r9
  __int64 v17; // rcx
  __int64 v18; // r8
  __int128 v19; // xmm0
  __int64 v20; // rdx
  void *v21; // rcx
  UINT v22; // eax
  bool v23; // zf
  _OWORD *VaPagingHistoryEntry; // rax
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // r8
  int v28; // r9d
  int v29; // esi
  __int64 v30; // r15
  __int64 v31; // r9
  UINT FillPattern; // r11d
  SIZE_T OffsetInPages; // r10
  __int64 v34; // rdx
  _DWORD *v35; // rcx
  char v36; // al
  struct _DXGKARG_BUILDPAGINGBUFFER *v37; // rax
  _OWORD *v38; // rdx
  __int64 v39; // rcx
  __int128 v40; // xmm0
  __int64 v41; // rcx
  VIDMM_PROCESS *v42; // rdi
  __int64 v43; // rcx
  __int64 v44; // r8
  unsigned __int8 v45[8]; // [rsp+30h] [rbp-F8h]
  unsigned __int8 v46[8]; // [rsp+38h] [rbp-F0h]
  __int64 v47; // [rsp+40h] [rbp-E8h]
  __int64 v48; // [rsp+48h] [rbp-E0h]
  __int64 v49; // [rsp+50h] [rbp-D8h]
  __int64 v50; // [rsp+58h] [rbp-D0h]
  __int64 v51; // [rsp+60h] [rbp-C8h]
  __int64 v52; // [rsp+70h] [rbp-B8h]
  __int64 v53; // [rsp+78h] [rbp-B0h]
  __int64 v54; // [rsp+80h] [rbp-A8h]
  __int64 v55; // [rsp+98h] [rbp-90h]
  int v56; // [rsp+A8h] [rbp-80h] BYREF
  __int64 v57; // [rsp+B0h] [rbp-78h]
  char v58; // [rsp+B8h] [rbp-70h]
  struct _DXGKARG_BUILDPAGINGBUFFER v59; // [rsp+C8h] [rbp-60h] BYREF
  unsigned __int64 v60; // [rsp+248h] [rbp+120h] BYREF
  VIDMM_PROCESS *v61; // [rsp+260h] [rbp+138h]

  v61 = a4;
  v7 = a4;
  v9 = a2;
  if ( !*((_BYTE *)this + 7088) && (*((_BYTE *)this + 40936) & 0x40) == 0 )
  {
    memset(&v59, 0, sizeof(v59));
    v11 = *(_QWORD **)(*((_QWORD *)this + 2) + 744LL);
    v12 = *(_QWORD *)(v11[34] + 8 * v9);
    if ( v12 )
    {
      v14 = *(void **)(v12 + 48);
    }
    else
    {
      if ( (*((_BYTE *)this + 40937) & 0x20) != 0 )
        v13 = v11[36];
      else
        v13 = v11[33];
      v14 = *(void **)(*(_QWORD *)(v13 + 8 * v9) + 64LL);
    }
    v59.hSystemContext = v14;
    v59.MultipassOffset = 0;
    while ( 1 )
    {
      v15 = *((_QWORD *)this + v9 + 79);
      if ( (*(_DWORD *)(v15 + 32) & 4) == 0 )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 29LL, v15, 0LL, 0LL);
      }
      v16 = (_QWORD *)*((_QWORD *)this + v9 + 143);
      if ( *(_DWORD *)(*((_QWORD *)this + v9 + 79) + 36LL) )
        v17 = *(_QWORD *)(v16[7] + 392LL);
      else
        v17 = v16[9];
      v18 = *((unsigned int *)this + v9 + 414);
      v19 = (__int128)*a3;
      *((_QWORD *)this + v9 + 335) = v18 + v17;
      v20 = *((unsigned int *)this + v9 + 542);
      v59.pDmaBuffer = (void *)(v18 + v17);
      v21 = (void *)(v20 + v16[16]);
      *((_QWORD *)this + v9 + 399) = v21;
      v22 = *((_DWORD *)this + v9 + 29) - v18;
      v59.pDmaBufferPrivateData = v21;
      v59.DmaSize = v22;
      v59.DmaBufferPrivateDataSize = *((_DWORD *)this + v9 + 93) - v20;
      v59.DmaBufferGpuVirtualAddress = v16[12];
      *(_OWORD *)&v59.NotifyResidency.PhysicalAddress.SegmentOffset = __PAIR128__(a6, (unsigned __int64)a5);
      v59.Transfer.Source.SegmentAddress.QuadPart = a7;
      v59.DmaBufferWriteOffset = v18;
      v59.Operation = DXGK_OPERATION_FLUSH_TLB;
      *(_OWORD *)&v59.Transfer.hAllocation = v19;
      if ( VIDMM_GLOBAL::IsGpuVaPagingHistoryEnabled(this)
        && (VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled || *((_QWORD *)this + 5123)) )
      {
        KeEnterCriticalRegion();
        ExAcquirePushLockExclusiveEx((char *)this + 41000, 0LL);
        v23 = !VIDMM_GLOBAL::GpuVaPagingHistoryFreEnabled;
        *((_QWORD *)this + 5126) = KeGetCurrentThread();
        if ( v23 )
          VaPagingHistoryEntry = (_OWORD *)VIDMM_GLOBAL::AllocateVaPagingHistoryEntry(this, 5LL, 64LL);
        else
          VaPagingHistoryEntry = operator new(64, (VIDMM_GLOBAL *)((char *)this + 41024), 5u, 0);
        if ( VaPagingHistoryEntry )
        {
          *VaPagingHistoryEntry = *(_OWORD *)&v59.Transfer.hAllocation;
          VaPagingHistoryEntry[1] = *(_OWORD *)&v59.NotifyResidency.PhysicalAddress.SegmentOffset;
          *((_QWORD *)VaPagingHistoryEntry + 4) = v59.Transfer.Source.SegmentAddress.QuadPart;
          *((_DWORD *)VaPagingHistoryEntry + 14) = v9;
          *((_QWORD *)VaPagingHistoryEntry + 5) = *(_QWORD *)v7;
          *((_QWORD *)VaPagingHistoryEntry + 6) = *((_QWORD *)v7 + 4);
        }
        *((_QWORD *)this + 5126) = 0LL;
        ExReleasePushLockExclusiveEx((char *)this + 41000, 0LL);
        KeLeaveCriticalRegion();
      }
      v25 = ADAPTER_RENDER::DdiBuildPagingBuffer(
              *((ADAPTER_RENDER **)this + 2),
              (struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3 *)&v59);
      v28 = LODWORD(v59.pDmaBuffer) - *((_DWORD *)this + 2 * v9 + 670);
      v29 = LODWORD(v59.pDmaBufferPrivateData) - *((_DWORD *)this + 2 * v9 + 798);
      v30 = v25;
      v60 = -1LL;
      if ( v28 || v29 )
      {
        VIDMM_GLOBAL::GetOrGeneratePendingPagingBufferFence(this, v9, &v60);
        v36 = *((_BYTE *)this + 40937);
        if ( (v36 & 8) != 0 )
          *((_BYTE *)this + 40937) = v36 & 0xF7;
      }
      *((_DWORD *)this + v9 + 414) += v28;
      if ( *((_DWORD *)this + v9 + 414) > *((_DWORD *)this + v9 + 29) )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 18LL, 0LL, 0LL, 0LL);
      }
      *((_DWORD *)this + v9 + 542) += v29;
      if ( *((_DWORD *)this + v9 + 542) > *((_DWORD *)this + v9 + 93) )
      {
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 19LL, 0LL, 0LL, 0LL);
      }
      if ( bTracingEnabled )
      {
        v27 = *((_QWORD *)this + v9 + 143);
        v31 = *((_QWORD *)this + 3);
        if ( v59.Operation == DXGK_OPERATION_UPDATE_PAGE_TABLE )
        {
          v26 = v59.Reserved.Reserved[20];
          FillPattern = 0;
          if ( v59.Reserved.Reserved[20] > 1 )
          {
            if ( v59.Reserved.Reserved[20] == 2 )
            {
              OffsetInPages = v59.MapApertureSegment.OffsetInPages;
              FillPattern = v59.Fill.FillPattern;
            }
            else
            {
              OffsetInPages = 0LL;
            }
          }
          else
          {
            OffsetInPages = v59.Transfer.TransferSize;
          }
          if ( (byte_1C00769C1 & 8) != 0 )
          {
            LODWORD(v55) = v59.UpdatePageTable.UpdateMode;
            LODWORD(v53) = v59.Transfer.Destination.SegmentAddress.HighPart;
            LODWORD(v50) = v59.UnmapApertureSegment.DummyPage.HighPart;
            LODWORD(v52) = v59.Transfer.Destination.SegmentId;
            LODWORD(v49) = FillPattern;
            LODWORD(v47) = v59.ReadPhysical.SegmentId;
            *(_DWORD *)v45 = v30 == -1071775743;
            McTemplateK0pptpqxqqppqqxxpqx_EtwWriteTransfer(
              (__int64)&DxgkControlGuid_Context,
              (__int64)&EventPagingOpUpdatePageTable,
              0LL,
              v31,
              v27,
              *(_QWORD *)v45,
              0LL,
              v47,
              OffsetInPages,
              v49,
              v50,
              v59.Transfer.Source.SegmentAddress.QuadPart,
              v59.UpdatePageTable.pPageTableEntries64KB,
              v52,
              v53,
              *(_OWORD *)&v59.Reserved.Reserved[14],
              v59.UpdatePageTable.hProcess,
              v55,
              v59.UpdatePageTable.FirstPteVirtualAddress);
          }
        }
        else if ( v59.Operation == DXGK_OPERATION_FLUSH_TLB )
        {
          if ( (byte_1C00769C1 & 8) != 0 )
          {
            LODWORD(v47) = v59.ReadPhysical.SegmentId;
            *(_DWORD *)v45 = v30 == -1071775743;
            McTemplateK0pptpqxpxx_EtwWriteTransfer(
              (__int64)&DxgkControlGuid_Context,
              (__int64)&EventPagingOpFlushTlb,
              0LL,
              v31,
              v27,
              *(_QWORD *)v45,
              0LL,
              v47,
              *(_OWORD *)&v59.SpecialLockTransfer.TransferOffset,
              *(_OWORD *)&v59.Reserved.Reserved[6]);
          }
        }
        else
        {
          switch ( v59.Operation )
          {
            case DXGK_OPERATION_TRANSFER:
              if ( (byte_1C00769C1 & 8) != 0 )
              {
                LODWORD(v52) = v59.Transfer.Flags.0;
                LODWORD(v51) = v59.Transfer.Destination.SegmentId;
                LODWORD(v49) = v59.Transfer.Source.SegmentId;
                LODWORD(v47) = v59.Transfer.TransferOffset;
                *(_DWORD *)v45 = v30 == -1071775743;
                McTemplateK0pptpqxqxqxq_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  (__int64)&EventPagingOpTransfer,
                  0LL,
                  v31,
                  v27,
                  *(_QWORD *)v45,
                  0LL,
                  v47,
                  v59.Transfer.TransferSize,
                  v49,
                  v59.Transfer.Source.SegmentAddress.QuadPart,
                  v51,
                  v59.Transfer.Destination.SegmentAddress.QuadPart,
                  v52);
              }
              break;
            case DXGK_OPERATION_FILL:
              if ( (byte_1C00769C1 & 8) != 0 )
              {
                LODWORD(v49) = v59.Transfer.Source.SegmentId;
                LODWORD(v48) = v59.Fill.FillPattern;
                *(_DWORD *)v45 = v30 == -1071775743;
                McTemplateK0pptpxqqx_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  (__int64)&EventPagingOpFill,
                  0LL,
                  v31,
                  v27,
                  *(_QWORD *)v45,
                  0LL,
                  v59.Fill.FillSize,
                  v48,
                  v49,
                  v59.Transfer.Source.SegmentAddress.QuadPart);
              }
              break;
            case DXGK_OPERATION_DISCARD_CONTENT:
              if ( (byte_1C00769C1 & 8) != 0 )
              {
                LODWORD(v48) = v59.DiscardContent.SegmentId;
                LODWORD(v47) = v59.Transfer.TransferOffset;
                *(_DWORD *)v45 = v30 == -1071775743;
                McTemplateK0pptpqqx_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  (__int64)&EventPagingOpDiscard,
                  0LL,
                  v31,
                  v27,
                  *(_QWORD *)v45,
                  0LL,
                  v47,
                  v48,
                  v59.Transfer.TransferSize);
              }
              break;
            case DXGK_OPERATION_READ_PHYSICAL:
              if ( (byte_1C00769C1 & 8) != 0 )
              {
                *(_DWORD *)v46 = v59.ReadPhysical.SegmentId;
                *(_DWORD *)v45 = v30 == -1071775743;
                McTemplateK0pptqx_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  &EventPagingOpReadPhysical,
                  0LL,
                  v31,
                  v27,
                  *(_QWORD *)v45,
                  *(_QWORD *)v46,
                  v59.Fill.FillSize);
              }
              break;
            case DXGK_OPERATION_WRITE_PHYSICAL:
              if ( (byte_1C00769C1 & 8) != 0 )
              {
                *(_DWORD *)v46 = v59.ReadPhysical.SegmentId;
                *(_DWORD *)v45 = v30 == -1071775743;
                McTemplateK0pptqx_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  &EventPagingOpWritePhysical,
                  0LL,
                  v31,
                  v27,
                  *(_QWORD *)v45,
                  *(_QWORD *)v46,
                  v59.Fill.FillSize);
              }
              break;
            case DXGK_OPERATION_MAP_APERTURE_SEGMENT:
              if ( (byte_1C00769C1 & 8) != 0 )
              {
                LODWORD(v51) = 0;
                LODWORD(v50) = v59.Transfer.Destination.SegmentAddress.LowPart;
                LODWORD(v47) = v59.Fill.FillPattern;
                *(_DWORD *)v45 = v30 == -1071775743;
                McTemplateK0pptpqxxqt_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  &EventPagingOpMapApertureSegment,
                  0LL,
                  v31,
                  v27,
                  *(_QWORD *)v45,
                  0LL,
                  v47,
                  *(_OWORD *)&v59.Reserved.Reserved[6],
                  v50,
                  v51);
              }
              break;
            case DXGK_OPERATION_UNMAP_APERTURE_SEGMENT:
              if ( (byte_1C00769C1 & 8) != 0 )
              {
                LODWORD(v50) = 0;
                LODWORD(v47) = v59.Fill.FillPattern;
                *(_DWORD *)v45 = v30 == -1071775743;
                McTemplateK0pptpqxxt_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  (__int64)&EventPagingOpUnmapApertureSegment,
                  0LL,
                  v31,
                  v27,
                  *(_QWORD *)v45,
                  0LL,
                  v47,
                  *(_OWORD *)&v59.Reserved.Reserved[6],
                  v50);
              }
              break;
            case DXGK_OPERATION_SPECIAL_LOCK_TRANSFER:
              if ( (byte_1C00769C1 & 8) != 0 )
              {
                LODWORD(v54) = v59.SpecialLockTransfer.SwizzlingRangeData;
                LODWORD(v53) = v59.Transfer.MdlOffset;
                LODWORD(v52) = v59.Transfer.Flags.0;
                LODWORD(v51) = v59.Transfer.Destination.SegmentId;
                LODWORD(v49) = v59.Transfer.Source.SegmentId;
                LODWORD(v47) = v59.Transfer.TransferOffset;
                *(_DWORD *)v45 = v30 == -1071775743;
                McTemplateK0pptpqxqxqxqqq_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  (__int64)&EventPagingOpSpecialLockTransfer,
                  0LL,
                  v31,
                  v27,
                  *(_QWORD *)v45,
                  0LL,
                  v47,
                  v59.Transfer.TransferSize,
                  v49,
                  v59.Transfer.Source.SegmentAddress.QuadPart,
                  v51,
                  v59.Transfer.Destination.SegmentAddress.QuadPart,
                  v52,
                  v53,
                  v54);
              }
              break;
            case DXGK_OPERATION_VIRTUAL_TRANSFER:
              if ( (byte_1C00769C1 & 8) != 0 )
              {
                LODWORD(v54) = v59.Transfer.Destination.SegmentAddress.HighPart;
                LODWORD(v53) = v59.Transfer.Destination.SegmentAddress.LowPart;
                LODWORD(v50) = MEMORY[4];
                LODWORD(v49) = MEMORY[0];
                *(_DWORD *)v45 = v30 == -1071775743;
                McTemplateK0pptpxxqqxxxqqxxx_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  (__int64)&EventPagingOpVirtualTransfer,
                  0LL,
                  v31,
                  v27,
                  *(_QWORD *)v45,
                  0LL,
                  *(_OWORD *)&v59.SpecialLockTransfer.TransferOffset,
                  v49,
                  v50,
                  *(_OWORD *)&v59.Reserved.Reserved[6],
                  v59.UnmapApertureSegment.DummyPage.QuadPart,
                  v53,
                  v54,
                  v59.TransferVirtual.DestinationPageTable,
                  MEMORY[8],
                  MEMORY[0x10]);
              }
              break;
            case DXGK_OPERATION_VIRTUAL_FILL:
              if ( (byte_1C00769C1 & 8) != 0 )
              {
                LODWORD(v50) = MEMORY[0];
                LODWORD(v49) = v59.Transfer.Source.SegmentId;
                *(_DWORD *)v45 = v30 == -1071775743;
                McTemplateK0pptpxxqqxx_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  (__int64)&EventPagingOpVirtualFill,
                  0LL,
                  v31,
                  v27,
                  *(_QWORD *)v45,
                  0LL,
                  *(_OWORD *)&v59.SpecialLockTransfer.TransferOffset,
                  v49,
                  v50,
                  v59.Transfer.Source.SegmentAddress.QuadPart,
                  MEMORY[8]);
              }
              break;
            case DXGK_OPERATION_INIT_CONTEXT_RESOURCE:
              if ( (byte_1C00769C1 & 8) != 0 )
              {
                LODWORD(v47) = v59.Transfer.TransferOffset;
                *(_DWORD *)v45 = v30 == -1071775743;
                McTemplateK0pptpqxpx_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  (__int64)&EventPagingOpInitContextResource,
                  0LL,
                  v31,
                  v27,
                  *(_QWORD *)v45,
                  0LL,
                  v47,
                  *(_OWORD *)&v59.NotifyResidency.PhysicalAddress.SegmentOffset,
                  v59.Transfer.Source.SegmentAddress.QuadPart);
              }
              break;
            case DXGK_OPERATION_UPDATE_CONTEXT_ALLOCATION:
              if ( (byte_1C00769C1 & 8) != 0 )
              {
                LODWORD(v50) = v59.Transfer.Source.SegmentId;
                *(_DWORD *)v45 = v30 == -1071775743;
                McTemplateK0pptpxxpq_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  (__int64)&EventPagingOpUpdateContextAllocation,
                  0LL,
                  v31,
                  v27,
                  *(_QWORD *)v45,
                  0LL,
                  *(_OWORD *)&v59.Transfer.hAllocation,
                  v59.Transfer.TransferSize,
                  v50);
              }
              break;
            case DXGK_OPERATION_NOTIFY_RESIDENCY:
              if ( (byte_1C00769C1 & 8) != 0 )
              {
                LODWORD(v49) = v59.Transfer.Source.SegmentId;
                LODWORD(v47) = v59.Transfer.TransferOffset;
                *(_DWORD *)v45 = v30 == -1071775743;
                McTemplateK0pptpqxq_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  (__int64)&EventPagingOpNotifyResidency,
                  0LL,
                  v31,
                  v27,
                  *(_QWORD *)v45,
                  0LL,
                  v47,
                  v59.Transfer.TransferSize,
                  v49);
              }
              break;
            case DXGK_OPERATION_SIGNAL_MONITORED_FENCE:
              if ( (byte_1C00769C1 & 8) != 0 )
              {
                *(_DWORD *)v45 = v30 == -1071775743;
                McTemplateK0pptpxx_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  (__int64)&EventPagingOpSignalMonitoredFence,
                  0LL,
                  v31,
                  v27,
                  *(_QWORD *)v45,
                  0LL,
                  *(_OWORD *)&v59.Transfer.hAllocation);
              }
              break;
            case DXGK_OPERATION_SIGNAL_MONITORED_FENCE|DXGK_OPERATION_FILL:
              if ( (byte_1C00769C1 & 8) != 0 )
              {
                LODWORD(v51) = 0;
                LODWORD(v50) = v59.Transfer.Flags.0;
                LODWORD(v47) = v59.Fill.FillPattern;
                *(_DWORD *)v45 = v30 == -1071775743;
                McTemplateK0pptpqxxqt_EtwWriteTransfer(
                  (__int64)&DxgkControlGuid_Context,
                  &EventPagingOpMapApertureSegment2,
                  0LL,
                  v31,
                  v27,
                  *(_QWORD *)v45,
                  0LL,
                  v47,
                  *(_OWORD *)&v59.Reserved.Reserved[6],
                  v50,
                  v51);
              }
              break;
            default:
              break;
          }
        }
      }
      v34 = *((_QWORD *)this + 985);
      if ( v34 )
      {
        *(_QWORD *)(360LL * *((unsigned int *)this + 1972) + v34 + 8) = 0LL;
        *(_QWORD *)(360LL * *((unsigned int *)this + 1972) + *((_QWORD *)this + 985) + 16) = 0LL;
        *(_DWORD *)(360LL * *((unsigned int *)this + 1972) + *((_QWORD *)this + 985)) = v9;
        v37 = &v59;
        v38 = (_OWORD *)(360LL * *((unsigned int *)this + 1972) + *((_QWORD *)this + 985) + 24LL);
        v39 = 2LL;
        do
        {
          v38 += 8;
          v40 = *(_OWORD *)&v37->pDmaBuffer;
          v37 = (struct _DXGKARG_BUILDPAGINGBUFFER *)((char *)v37 + 128);
          *(v38 - 8) = v40;
          *(v38 - 7) = *(_OWORD *)&v37[-1].Reserved.Reserved[42];
          *(v38 - 6) = *(_OWORD *)&v37[-1].Reserved.Reserved[46];
          *(v38 - 5) = *(_OWORD *)&v37[-1].Reserved.Reserved[50];
          *(v38 - 4) = *(_OWORD *)&v37[-1].Reserved.Reserved[54];
          *(v38 - 3) = *(_OWORD *)&v37[-1].Reserved.Reserved[58];
          *(v38 - 2) = *(_OWORD *)&v37[-1].Reserved.Reserved[62];
          *(v38 - 1) = *(_OWORD *)&v37[-1].DmaBufferGpuVirtualAddress;
          --v39;
        }
        while ( v39 );
        *v38 = *(_OWORD *)&v37->pDmaBuffer;
        v38[1] = *(_OWORD *)&v37->pDmaBufferPrivateData;
        v38[2] = *(_OWORD *)&v37->MultipassOffset;
        v38[3] = *(_OWORD *)&v37->SpecialLockTransfer.TransferOffset;
        *(_DWORD *)(360LL * *((unsigned int *)this + 1972) + *((_QWORD *)this + 985) + 344) = v30;
        v26 = *((_QWORD *)this + 985);
        *(_QWORD *)(360LL * (unsigned int)(*((_DWORD *)this + 1972))++ + v26 + 352) = v60;
        if ( *((_DWORD *)this + 1972) >= *((_DWORD *)this + 1968) )
        {
          ++*((_DWORD *)this + 1973);
          *((_DWORD *)this + 1972) = 0;
        }
      }
      if ( (int)v30 >= 0 )
        break;
      if ( (_DWORD)v30 != -1071775743 )
      {
        v41 = *((_QWORD *)this + 3);
        g_DxgMmsBugcheckExportIndex = 1;
        WdLogSingleEntry5(0LL, 270LL, 11LL, &v59, v30, v41);
        break;
      }
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v26);
      VIDMM_GLOBAL::FlushPagingBufferInternal(this, v9, 1u, 0LL, 0LL, 1u, 0);
      v7 = v61;
    }
    v35 = *(_DWORD **)(1616LL * (unsigned int)v9 + *((_QWORD *)this + 5028) + 448);
    if ( (*v35 & 0x20) != 0 )
    {
      v42 = v61;
      if ( (*((_DWORD *)v61 + 24) & 2) == 0 )
      {
        if ( bTracingEnabled && (byte_1C00769C1 & 1) != 0 )
          McTemplateK0q_EtwWriteTransfer((__int64)v35, &EventPerformanceWarning, v27, 23);
        v56 = -1;
        v57 = 0LL;
        if ( (qword_1C0076010 & 2) != 0 )
        {
          v58 = 1;
          v56 = 8010;
          if ( byte_1C00769C1 < 0 )
            McTemplateK0q_EtwWriteTransfer((__int64)v35, &EventProfilerEnter, v27, 8010);
        }
        else
        {
          v58 = 0;
        }
        DXGETWPROFILER_BASE::PushProfilerEntry();
        VIDMM_GLOBAL::FlushPagingBufferInternal(this, v9, 0, 0LL, 0LL, 0, 0);
        VIDMM_GLOBAL::WaitForAllPagingEnginesIdle(this, v9);
        if ( (*((_DWORD *)v42 + 24) & 4) == 0 )
        {
          VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(v42, *(_DWORD *)(*((_QWORD *)this + 3) + 240LL), 1);
          VIDMM_PROCESS::SuspendResumeProcessGpuMmuContexts(v42, *(_DWORD *)(*((_QWORD *)this + 3) + 240LL), 0);
        }
        DXGETWPROFILER_BASE::PopProfilerEntry((DXGETWPROFILER_BASE *)&v56);
        if ( v58 )
        {
          if ( byte_1C00769C1 < 0 )
            McTemplateK0q_EtwWriteTransfer(v43, &EventProfilerExit, v44, v56);
        }
      }
    }
  }
}
