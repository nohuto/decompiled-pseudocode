void __fastcall ADAPTER_RENDER::DxgkrnlLogBuildPagingBufferInformation(
        ADAPTER_RENDER *this,
        __int64 a2,
        struct _DXGKARG_BUILDPAGINGBUFFER *a3,
        __int64 a4)
{
  DXGK_BUILDPAGINGBUFFER_OPERATION Operation; // eax
  __int64 v6; // rdi
  _QWORD *v7; // rax
  unsigned __int64 v8; // rdx
  _QWORD *v9; // rax
  _QWORD *v10; // rax
  SIZE_T TransferSize; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rax
  _QWORD *v17; // rax
  _QWORD *v18; // rax
  __int64 v19; // rax

  Operation = a3->Operation;
  v6 = (int)a2;
  if ( Operation == DXGK_OPERATION_UPDATE_PAGE_TABLE )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    v7[3] = v6;
    v7[4] = a3->Fill.FillSize;
    v7[5] = a3->UpdatePageTable.hProcess;
    v7[6] = a3->Transfer.Destination.SegmentId;
    this = (ADAPTER_RENDER *)a3->UpdatePageTable.NumPageTableEntries;
    v7[7] = this;
LABEL_3:
    v9 = (_QWORD *)WdLogNewEntry5_WdTrace(this, v8, a3, a4);
    v9[3] = v6;
    v9[4] = a3->Transfer.hAllocation;
    v9[5] = a3->Transfer.TransferOffset;
    this = (ADAPTER_RENDER *)a3->Transfer.TransferSize;
    v9[6] = this;
LABEL_4:
    v10 = (_QWORD *)WdLogNewEntry5_WdTrace(this, v8, a3, a4);
    v10[3] = v6;
    v10[4] = a3->Transfer.hAllocation;
    v10[5] = a3->Transfer.Source.SegmentId & 1;
    v10[6] = a3->Transfer.TransferOffset;
    TransferSize = a3->Transfer.TransferSize;
LABEL_5:
    v10[7] = TransferSize;
  }
  else if ( Operation == DXGK_OPERATION_FLUSH_TLB )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    v12[3] = v6;
    v12[4] = a3->Transfer.TransferSize;
    v12[5] = a3->ReadPhysical.SegmentId;
    v12[6] = a3->Fill.FillSize;
  }
  else
  {
    v8 = 0x1C0000000uLL;
    switch ( Operation )
    {
      case DXGK_OPERATION_TRANSFER:
      case DXGK_OPERATION_SPECIAL_LOCK_TRANSFER:
        v10 = (_QWORD *)WdLogNewEntry5_WdTrace(this, 0x1C0000000uLL, a3, a4);
        v10[3] = v6;
        v10[4] = a3->Transfer.hAllocation;
        v10[5] = a3->Transfer.Source.SegmentAddress.QuadPart;
        v10[6] = a3->Transfer.Destination.SegmentId;
        TransferSize = a3->Transfer.Destination.SegmentAddress.QuadPart;
        goto LABEL_5;
      case DXGK_OPERATION_FILL:
        v14 = (_QWORD *)WdLogNewEntry5_WdTrace(this, 0x1C0000000uLL, a3, a4);
        v14[3] = v6;
        v14[4] = a3->Transfer.hAllocation;
        v14[5] = a3->Transfer.Source.SegmentId;
        v14[6] = a3->Transfer.Source.SegmentAddress.QuadPart;
        break;
      case DXGK_OPERATION_DISCARD_CONTENT:
        v15 = (_QWORD *)WdLogNewEntry5_WdTrace(this, 0x1C0000000uLL, a3, a4);
        v15[3] = v6;
        v15[4] = a3->Transfer.hAllocation;
        v15[5] = a3->DiscardContent.SegmentId;
        v15[6] = a3->Transfer.TransferSize;
        break;
      case DXGK_OPERATION_READ_PHYSICAL:
      case DXGK_OPERATION_WRITE_PHYSICAL:
        v16 = (_QWORD *)WdLogNewEntry5_WdTrace(this, 0x1C0000000uLL, a3, a4);
        v16[3] = v6;
        v16[4] = a3->ReadPhysical.SegmentId;
        v16[5] = a3->Fill.FillSize;
        break;
      case DXGK_OPERATION_MAP_APERTURE_SEGMENT:
      case DXGK_OPERATION_UNMAP_APERTURE_SEGMENT:
        v13 = (_QWORD *)WdLogNewEntry5_WdTrace(this, 0x1C0000000uLL, a3, a4);
        v13[3] = v6;
        v13[4] = a3->Transfer.hAllocation;
        v13[5] = a3->Fill.FillSize;
        v13[6] = a3->Fill.FillPattern;
        break;
      case DXGK_OPERATION_VIRTUAL_TRANSFER:
        v17 = (_QWORD *)WdLogNewEntry5_WdTrace(this, 0x1C0000000uLL, a3, a4);
        v17[3] = v6;
        v17[4] = a3->Transfer.hAllocation;
        v17[5] = a3->MapApertureSegment.OffsetInPages;
        v17[6] = a3->Transfer.Source.SegmentAddress.QuadPart;
        break;
      case DXGK_OPERATION_VIRTUAL_FILL:
        v18 = (_QWORD *)WdLogNewEntry5_WdTrace(this, 0x1C0000000uLL, a3, a4);
        v18[3] = v6;
        v18[4] = a3->Transfer.hAllocation;
        v18[5] = a3->Transfer.Source.SegmentAddress.QuadPart;
        break;
      case DXGK_OPERATION_INIT_CONTEXT_RESOURCE:
        goto LABEL_3;
      case DXGK_OPERATION_NOTIFY_RESIDENCY:
        goto LABEL_4;
      default:
        v19 = WdLogNewEntry5_WdTrace(this, 0x1C0000000uLL, a3, a4);
        *(_QWORD *)(v19 + 24) = v6;
        *(_QWORD *)(v19 + 32) = a3->Operation;
        break;
    }
  }
}
