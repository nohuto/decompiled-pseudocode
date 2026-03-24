/*
 * XREFs of ?ReportState@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@@Z @ 0x1C00BDD08
 * Callers:
 *     ?ReportState@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@@Z @ 0x1C00BDC48 (-ReportState@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@@Z.c)
 * Callees:
 *     McTemplateK0pppppppppppp_EtwWriteTransfer @ 0x1C0023F90 (McTemplateK0pppppppppppp_EtwWriteTransfer.c)
 *     McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer @ 0x1C00240BC (McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer.c)
 */

void __fastcall VIDMM_PAGE_TABLE_BASE::ReportState(VIDMM_PAGE_TABLE_BASE *this, struct CVirtualAddressAllocator *a2)
{
  __int64 v2; // r8
  __int64 v3; // rdi
  _QWORD *v5; // rdx
  int v6; // [rsp+48h] [rbp-F0h]
  int v7; // [rsp+60h] [rbp-D8h]

  v2 = *((_QWORD *)this + 2);
  v3 = *((_QWORD *)a2 + 11);
  if ( v2 && bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
    McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtpht_EtwWriteTransfer(
      **(unsigned int **)(v2 + 496),
      &EventReportAdapterAllocation,
      v2,
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v2 + 96) + 8LL) + 8LL),
      0,
      *(_QWORD *)(v3 + 24),
      **(_DWORD **)(v2 + 496),
      *(_QWORD *)(v2 + 16),
      *(_DWORD *)(v2 + 32),
      v6,
      *(_DWORD *)(v2 + 68),
      *(_DWORD *)(v2 + 72),
      v7,
      *(_DWORD *)(v2 + 64),
      *(_DWORD *)(v2 + 368),
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
      (*(_DWORD *)(v2 + 84) & 2) != 0,
      *(_QWORD *)(v2 + 352),
      *(_BYTE *)(v2 + 76) & 0x3F,
      BYTE1(*(_DWORD *)(v2 + 76)) & 1);
  v5 = (_QWORD *)*((_QWORD *)this + 3);
  if ( v5 && bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
    McTemplateK0pppppppppppp_EtwWriteTransfer(
      *(_QWORD *)(*v5 + 24LL),
      &EventReportDeviceAllocation,
      *(_QWORD *)(v3 + 24),
      *(_QWORD *)(*(_QWORD *)(v5[1] + 8LL) + 8LL),
      0LL,
      *(_QWORD *)(v3 + 24),
      v5,
      *((_QWORD *)this + 2),
      0LL,
      0LL,
      0LL,
      0LL,
      0LL,
      *(_QWORD *)(*v5 + 16LL),
      *(_QWORD *)(*v5 + 24LL));
}
