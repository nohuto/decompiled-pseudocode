/*
 * XREFs of ?RecordPagingOperation@VIDMM_GLOBAL@@QEAAXKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@J_KHPEAX@Z @ 0x1C008A2EC
 * Callers:
 *     ?CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_BUILDPAGINGBUFFER@@JHPEAX@Z @ 0x1C008A1D0 (-CompleteBuildPagingBufferIteration@VIDMM_GLOBAL@@IEAA_NKPEAU_VIDMM_GLOBAL_ALLOC@@PEAU_DXGKARG_B.c)
 * Callees:
 *     McTemplateK0pptpqqx_EtwWriteTransfer @ 0x1C003117C (McTemplateK0pptpqqx_EtwWriteTransfer.c)
 *     McTemplateK0pptpqxpx_EtwWriteTransfer @ 0x1C003123C (McTemplateK0pptpqxpx_EtwWriteTransfer.c)
 *     McTemplateK0pptpqxpxx_EtwWriteTransfer @ 0x1C003131C (McTemplateK0pptpqxpxx_EtwWriteTransfer.c)
 *     McTemplateK0pptpqxq_EtwWriteTransfer @ 0x1C0031410 (McTemplateK0pptpqxq_EtwWriteTransfer.c)
 *     McTemplateK0pptpqxqqppqqxxpqx_EtwWriteTransfer @ 0x1C00314D0 (McTemplateK0pptpqxqqppqqxxpqx_EtwWriteTransfer.c)
 *     McTemplateK0pptpqxqxqxq_EtwWriteTransfer @ 0x1C003167C (McTemplateK0pptpqxqxqxq_EtwWriteTransfer.c)
 *     McTemplateK0pptpqxqxqxqqq_EtwWriteTransfer @ 0x1C0031794 (McTemplateK0pptpqxqxqxqqq_EtwWriteTransfer.c)
 *     McTemplateK0pptpqxxqt_EtwWriteTransfer @ 0x1C00318E0 (McTemplateK0pptpqxxqt_EtwWriteTransfer.c)
 *     McTemplateK0pptpqxxt_EtwWriteTransfer @ 0x1C00319CC (McTemplateK0pptpqxxt_EtwWriteTransfer.c)
 *     McTemplateK0pptpxqqx_EtwWriteTransfer @ 0x1C0031AAC (McTemplateK0pptpxqqx_EtwWriteTransfer.c)
 *     McTemplateK0pptpxx_EtwWriteTransfer @ 0x1C0031B8C (McTemplateK0pptpxx_EtwWriteTransfer.c)
 *     McTemplateK0pptpxxpq_EtwWriteTransfer @ 0x1C0031C4C (McTemplateK0pptpxxpq_EtwWriteTransfer.c)
 *     McTemplateK0pptpxxqqxx_EtwWriteTransfer @ 0x1C0031D2C (McTemplateK0pptpxxqqxx_EtwWriteTransfer.c)
 *     McTemplateK0pptpxxqqxxxqqxxx_EtwWriteTransfer @ 0x1C0031E30 (McTemplateK0pptpxxqqxxxqqxxx_EtwWriteTransfer.c)
 *     McTemplateK0pptqx_EtwWriteTransfer @ 0x1C0031FC4 (McTemplateK0pptqx_EtwWriteTransfer.c)
 */

void __fastcall VIDMM_GLOBAL::RecordPagingOperation(
        VIDMM_GLOBAL *this,
        unsigned int a2,
        struct _VIDMM_GLOBAL_ALLOC *a3,
        struct _DXGKARG_BUILDPAGINGBUFFER *a4,
        int a5,
        unsigned __int64 a6,
        int a7,
        _DWORD *a8)
{
  __int64 v12; // rbp
  __int64 v13; // r10
  __int64 v14; // r9
  DXGK_BUILDPAGINGBUFFER_OPERATION Operation; // ecx
  __int32 v16; // ecx
  __int32 v17; // ecx
  __int32 v18; // ecx
  DXGK_PAGETABLEUPDATEMODE UpdateMode; // edx
  UINT FillPattern; // r11d
  SIZE_T OffsetInPages; // rcx
  __int64 v22; // rcx
  int v23; // ecx
  __int32 v24; // ecx
  __int32 v25; // ecx
  __int32 v26; // ecx
  int v27; // ecx
  int v28; // ecx
  int v29; // ecx
  const EVENT_DESCRIPTOR *v30; // rdx
  DWORD Value; // eax
  const EVENT_DESCRIPTOR *v32; // rdx
  int v33; // ecx
  int v34; // ecx
  int v35; // ecx
  __int64 v36; // rdx
  _OWORD *v37; // rdx
  __int128 v38; // xmm1
  int v39; // [rsp+58h] [rbp-60h]

  v12 = 2LL;
  if ( !bTracingEnabled )
    goto LABEL_10;
  v13 = *((_QWORD *)this + a2 + 143);
  v14 = *((_QWORD *)this + 3);
  Operation = a4->Operation;
  if ( Operation > DXGK_OPERATION_VIRTUAL_TRANSFER )
  {
    v16 = Operation - 9;
    if ( v16 )
    {
      v17 = v16 - 1;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( !v18 )
        {
          UpdateMode = a4->UpdatePageTable.UpdateMode;
          FillPattern = 0;
          if ( (unsigned int)UpdateMode > DXGK_PAGETABLEUPDATE_GPU_VIRTUAL )
          {
            if ( UpdateMode == DXGK_PAGETABLEUPDATE_GPU_PHYSICAL )
            {
              OffsetInPages = a4->MapApertureSegment.OffsetInPages;
              FillPattern = a4->Fill.FillPattern;
            }
            else
            {
              OffsetInPages = 0LL;
            }
          }
          else
          {
            OffsetInPages = a4->Transfer.TransferSize;
          }
          if ( (byte_1C00769C1 & 8) != 0 )
            McTemplateK0pptpqxqqppqqxxpqx_EtwWriteTransfer(
              (__int64)&DxgkControlGuid_Context,
              (__int64)&EventPagingOpUpdatePageTable,
              0LL,
              v14,
              v13,
              a5 == -1071775743,
              a3,
              a4->ReadPhysical.SegmentId,
              OffsetInPages,
              FillPattern,
              a4->UnmapApertureSegment.DummyPage.HighPart,
              a4->Transfer.Source.SegmentAddress.QuadPart,
              a4->UpdatePageTable.pPageTableEntries64KB,
              a4->Transfer.Destination.SegmentId,
              a4->Transfer.Destination.SegmentAddress.HighPart,
              a4->TransferVirtual.DestinationPageTable,
              a4->UpdatePageTable.AllocationOffsetInBytes,
              a4->UpdatePageTable.hProcess,
              a4->Reserved.Reserved[20],
              a4->UpdatePageTable.FirstPteVirtualAddress);
          goto LABEL_10;
        }
        v23 = v18 - 1;
        if ( !v23 )
        {
          if ( (byte_1C00769C1 & 8) != 0 )
            McTemplateK0pptpqxpxx_EtwWriteTransfer(
              (__int64)&DxgkControlGuid_Context,
              (__int64)&EventPagingOpFlushTlb,
              0LL,
              v14,
              v13,
              a5 == -1071775743,
              a3,
              a4->ReadPhysical.SegmentId,
              a4->Fill.FillSize,
              a4->Transfer.TransferSize,
              a4->MapApertureSegment.OffsetInPages,
              a4->Transfer.Source.SegmentAddress.QuadPart);
          goto LABEL_10;
        }
        v33 = v23 - 1;
        if ( v33 )
        {
          v34 = v33 - 2;
          if ( v34 )
          {
            v35 = v34 - 1;
            if ( v35 )
            {
              if ( v35 != 1 || (byte_1C00769C1 & 8) == 0 )
                goto LABEL_10;
              v30 = (const EVENT_DESCRIPTOR *)&EventPagingOpMapApertureSegment2;
              v39 = a7;
              Value = a4->Transfer.Flags.Value;
LABEL_33:
              McTemplateK0pptpqxxqt_EtwWriteTransfer(
                (__int64)&DxgkControlGuid_Context,
                v30,
                0LL,
                v14,
                v13,
                a5 == -1071775743,
                a3,
                a4->Fill.FillPattern,
                a4->MapApertureSegment.OffsetInPages,
                a4->Transfer.Source.SegmentAddress.QuadPart,
                Value,
                v39);
              goto LABEL_10;
            }
            if ( (byte_1C00769C1 & 8) != 0 )
              McTemplateK0pptpxx_EtwWriteTransfer(
                (__int64)&DxgkControlGuid_Context,
                (__int64)&EventPagingOpSignalMonitoredFence,
                0LL,
                v14,
                v13,
                a5 == -1071775743,
                a3,
                a4->UpdateContextAllocation.ContextAllocation,
                a4->Fill.FillSize);
          }
          else if ( (byte_1C00769C1 & 8) != 0 )
          {
            McTemplateK0pptpqxq_EtwWriteTransfer(
              (__int64)&DxgkControlGuid_Context,
              (__int64)&EventPagingOpNotifyResidency,
              0LL,
              v14,
              v13,
              a5 == -1071775743,
              a3,
              a4->Transfer.TransferOffset,
              a4->Transfer.TransferSize,
              a4->Transfer.Source.SegmentId);
          }
        }
        else if ( (byte_1C00769C1 & 8) != 0 )
        {
          McTemplateK0pptpxxpq_EtwWriteTransfer(
            (__int64)&DxgkControlGuid_Context,
            (__int64)&EventPagingOpUpdateContextAllocation,
            0LL,
            v14,
            v13,
            a5 == -1071775743,
            a3,
            a4->UpdateContextAllocation.ContextAllocation,
            a4->Fill.FillSize,
            a4->Transfer.TransferSize,
            a4->Transfer.Source.SegmentId);
        }
      }
      else if ( (byte_1C00769C1 & 8) != 0 )
      {
        McTemplateK0pptpqxpx_EtwWriteTransfer(
          (__int64)&DxgkControlGuid_Context,
          (__int64)&EventPagingOpInitContextResource,
          0LL,
          v14,
          v13,
          a5 == -1071775743,
          a3,
          a4->Transfer.TransferOffset,
          a4->Transfer.TransferSize,
          a4->MapApertureSegment.OffsetInPages,
          a4->Transfer.Source.SegmentAddress.QuadPart);
      }
    }
    else if ( (byte_1C00769C1 & 8) != 0 )
    {
      McTemplateK0pptpxxqqxx_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        (__int64)&EventPagingOpVirtualFill,
        0LL,
        v14,
        v13,
        a5 == -1071775743,
        a3,
        a4->Fill.FillSize,
        a4->Transfer.TransferSize,
        a4->Transfer.Source.SegmentId,
        *a8,
        a4->Transfer.Source.SegmentAddress.QuadPart,
        *((_QWORD *)a8 + 1));
    }
    goto LABEL_10;
  }
  if ( Operation == DXGK_OPERATION_VIRTUAL_TRANSFER )
  {
    if ( (byte_1C00769C1 & 8) != 0 )
      McTemplateK0pptpxxqqxxxqqxxx_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        (__int64)&EventPagingOpVirtualTransfer,
        0LL,
        v14,
        v13,
        a5 == -1071775743,
        a3,
        a4->Fill.FillSize,
        a4->Transfer.TransferSize,
        *a8,
        a8[1],
        a4->MapApertureSegment.OffsetInPages,
        a4->Transfer.Source.SegmentAddress.QuadPart,
        a4->UnmapApertureSegment.DummyPage.QuadPart,
        a4->Transfer.Destination.SegmentAddress.LowPart,
        a4->Transfer.Destination.SegmentAddress.HighPart,
        a4->TransferVirtual.DestinationPageTable,
        *((_QWORD *)a8 + 1),
        *((_QWORD *)a8 + 2));
    goto LABEL_10;
  }
  if ( Operation == DXGK_OPERATION_TRANSFER )
  {
    if ( (byte_1C00769C1 & 8) != 0 )
      McTemplateK0pptpqxqxqxq_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        (__int64)&EventPagingOpTransfer,
        0LL,
        v14,
        v13,
        a5 == -1071775743,
        a3,
        a4->Transfer.TransferOffset,
        a4->Transfer.TransferSize,
        a4->Transfer.Source.SegmentId,
        a4->Transfer.Source.SegmentAddress.QuadPart,
        a4->Transfer.Destination.SegmentId,
        a4->Transfer.Destination.SegmentAddress.QuadPart,
        a4->Transfer.Flags.Value);
    goto LABEL_10;
  }
  v24 = Operation - 1;
  if ( !v24 )
  {
    if ( (byte_1C00769C1 & 8) != 0 )
      McTemplateK0pptpxqqx_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        (__int64)&EventPagingOpFill,
        0LL,
        v14,
        v13,
        a5 == -1071775743,
        a3,
        a4->Fill.FillSize,
        a4->Fill.FillPattern,
        a4->Transfer.Source.SegmentId,
        a4->Transfer.Source.SegmentAddress.QuadPart);
    goto LABEL_10;
  }
  v25 = v24 - 1;
  if ( !v25 )
  {
    if ( (byte_1C00769C1 & 8) != 0 )
      McTemplateK0pptpqqx_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        (__int64)&EventPagingOpDiscard,
        0LL,
        v14,
        v13,
        a5 == -1071775743,
        a3,
        a4->Transfer.TransferOffset,
        a4->DiscardContent.SegmentId,
        a4->Transfer.TransferSize);
    goto LABEL_10;
  }
  v26 = v25 - 1;
  if ( !v26 )
  {
    if ( (byte_1C00769C1 & 8) == 0 )
      goto LABEL_10;
    v32 = (const EVENT_DESCRIPTOR *)&EventPagingOpReadPhysical;
    goto LABEL_38;
  }
  v27 = v26 - 1;
  if ( !v27 )
  {
    if ( (byte_1C00769C1 & 8) == 0 )
      goto LABEL_10;
    v32 = (const EVENT_DESCRIPTOR *)&EventPagingOpWritePhysical;
LABEL_38:
    McTemplateK0pptqx_EtwWriteTransfer(
      (__int64)&DxgkControlGuid_Context,
      v32,
      0LL,
      v14,
      v13,
      a5 == -1071775743,
      a4->ReadPhysical.SegmentId,
      a4->Fill.FillSize);
    goto LABEL_10;
  }
  v28 = v27 - 1;
  if ( !v28 )
  {
    if ( (byte_1C00769C1 & 8) == 0 )
      goto LABEL_10;
    v30 = (const EVENT_DESCRIPTOR *)&EventPagingOpMapApertureSegment;
    v39 = a7;
    Value = a4->Transfer.Destination.SegmentAddress.LowPart;
    goto LABEL_33;
  }
  v29 = v28 - 1;
  if ( v29 )
  {
    if ( v29 == 1 && (byte_1C00769C1 & 8) != 0 )
      McTemplateK0pptpqxqxqxqqq_EtwWriteTransfer(
        (__int64)&DxgkControlGuid_Context,
        (__int64)&EventPagingOpSpecialLockTransfer,
        0LL,
        v14,
        v13,
        a5 == -1071775743,
        a3,
        a4->Transfer.TransferOffset,
        a4->Transfer.TransferSize,
        a4->Transfer.Source.SegmentId,
        a4->Transfer.Source.SegmentAddress.QuadPart,
        a4->Transfer.Destination.SegmentId,
        a4->Transfer.Destination.SegmentAddress.QuadPart,
        a4->Transfer.Flags.Value,
        a4->Transfer.MdlOffset,
        a4->SpecialLockTransfer.SwizzlingRangeData);
  }
  else if ( (byte_1C00769C1 & 8) != 0 )
  {
    McTemplateK0pptpqxxt_EtwWriteTransfer(
      (__int64)&DxgkControlGuid_Context,
      (__int64)&EventPagingOpUnmapApertureSegment,
      0LL,
      v14,
      v13,
      a5 == -1071775743,
      a3,
      a4->Fill.FillPattern,
      a4->MapApertureSegment.OffsetInPages,
      a4->Transfer.Source.SegmentAddress.QuadPart,
      a7);
  }
LABEL_10:
  v22 = *((_QWORD *)this + 985);
  if ( v22 )
  {
    v36 = 360LL * *((unsigned int *)this + 1972);
    if ( a3 )
    {
      *(_QWORD *)(v36 + v22 + 8) = a3;
      *(_QWORD *)(360LL * *((unsigned int *)this + 1972) + *((_QWORD *)this + 985) + 16) = *((_QWORD *)a3 + 5);
    }
    else
    {
      *(_QWORD *)(v36 + v22 + 8) = 0LL;
      *(_QWORD *)(360LL * *((unsigned int *)this + 1972) + *((_QWORD *)this + 985) + 16) = 0LL;
    }
    *(_DWORD *)(360LL * *((unsigned int *)this + 1972) + *((_QWORD *)this + 985)) = a2;
    v37 = (_OWORD *)(360LL * *((unsigned int *)this + 1972) + *((_QWORD *)this + 985) + 24LL);
    do
    {
      *v37 = *(_OWORD *)&a4->pDmaBuffer;
      v37[1] = *(_OWORD *)&a4->pDmaBufferPrivateData;
      v37[2] = *(_OWORD *)&a4->MultipassOffset;
      v37[3] = *(_OWORD *)&a4->SpecialLockTransfer.TransferOffset;
      v37[4] = *(_OWORD *)&a4->Reserved.Reserved[6];
      v37[5] = *(_OWORD *)&a4->Reserved.Reserved[10];
      v37[6] = *(_OWORD *)&a4->Reserved.Reserved[14];
      v37 += 8;
      v38 = *(_OWORD *)&a4->Reserved.Reserved[18];
      a4 = (struct _DXGKARG_BUILDPAGINGBUFFER *)((char *)a4 + 128);
      *(v37 - 1) = v38;
      --v12;
    }
    while ( v12 );
    *v37 = *(_OWORD *)&a4->pDmaBuffer;
    v37[1] = *(_OWORD *)&a4->pDmaBufferPrivateData;
    v37[2] = *(_OWORD *)&a4->MultipassOffset;
    v37[3] = *(_OWORD *)&a4->SpecialLockTransfer.TransferOffset;
    *(_DWORD *)(360LL * *((unsigned int *)this + 1972) + *((_QWORD *)this + 985) + 344) = a5;
    *(_QWORD *)(360LL * (unsigned int)(*((_DWORD *)this + 1972))++ + *((_QWORD *)this + 985) + 352) = a6;
    if ( *((_DWORD *)this + 1972) >= *((_DWORD *)this + 1968) )
    {
      *((_DWORD *)this + 1972) = 0;
      ++*((_DWORD *)this + 1973);
    }
  }
}
