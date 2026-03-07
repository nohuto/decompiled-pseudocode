void __fastcall VIDMM_PAGE_TABLE_BASE::ReportState(VIDMM_PAGE_TABLE_BASE *this, struct CVirtualAddressAllocator *a2)
{
  __int64 v2; // r10
  __int64 v3; // rdi
  __int64 v5; // r8
  _QWORD *v6; // rdx
  int v7; // [rsp+48h] [rbp-F0h]
  int v8; // [rsp+60h] [rbp-D8h]

  v2 = *((_QWORD *)this + 2);
  v3 = *((_QWORD *)a2 + 11);
  if ( v2 && bTracingEnabled && (byte_1C00769C1 & 8) != 0 )
  {
    v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 88) + 8LL) + 8LL);
    McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer(
      **(unsigned int **)(v2 + 536),
      &EventReportAdapterAllocation,
      v5,
      v5,
      0,
      *(_QWORD *)(v3 + 24),
      **(_DWORD **)(v2 + 536),
      *(_QWORD *)(v2 + 16),
      *(_DWORD *)(v2 + 32),
      v7,
      *(_DWORD *)(v2 + 60),
      *(_DWORD *)(v2 + 64),
      v8,
      *(_DWORD *)(v2 + 56),
      *(_DWORD *)(v2 + 400),
      v2,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      (*(_DWORD *)(v2 + 76) & 2) != 0,
      *(_QWORD *)(v2 + 384),
      *(_BYTE *)(v2 + 68) & 0x3F,
      BYTE1(*(_DWORD *)(v2 + 68)) & 1);
  }
  v6 = (_QWORD *)*((_QWORD *)this + 3);
  if ( v6 && bTracingEnabled && (byte_1C00769C1 & 8) != 0 )
    McTemplateK0ppppppppppppq_EtwWriteTransfer(
      *(_QWORD *)(v6[1] + 8LL),
      &EventReportDeviceAllocation,
      *(_QWORD *)(*v6 + 24LL),
      *(_QWORD *)(*(_QWORD *)(v6[1] + 8LL) + 8LL),
      0LL,
      *(_QWORD *)(v3 + 24),
      v6,
      *((_QWORD *)this + 2),
      0LL,
      0LL,
      0LL,
      0LL,
      0LL,
      *(_QWORD *)(*v6 + 16LL),
      *(_QWORD *)(*v6 + 24LL));
}
