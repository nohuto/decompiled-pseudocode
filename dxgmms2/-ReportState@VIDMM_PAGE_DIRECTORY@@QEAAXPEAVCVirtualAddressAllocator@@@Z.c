/*
 * XREFs of ?ReportState@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@@Z @ 0x1C00F3640
 * Callers:
 *     ?ReportState@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@@Z @ 0x1C00F3640 (-ReportState@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?ReportVaAllocatorState@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C00F391C (-ReportVaAllocatorState@CVirtualAddressAllocator@@QEAAXXZ.c)
 * Callees:
 *     ?GetNumPde@CVirtualAddressAllocator@@QEBAIPEAVVIDMM_PAGE_DIRECTORY@@@Z @ 0x1C0017A58 (-GetNumPde@CVirtualAddressAllocator@@QEBAIPEAVVIDMM_PAGE_DIRECTORY@@@Z.c)
 *     ?ReportState@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@@Z @ 0x1C00F3640 (-ReportState@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?ReportState@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@@Z @ 0x1C00F3700 (-ReportState@VIDMM_PAGE_TABLE_BASE@@QEAAXPEAVCVirtualAddressAllocator@@@Z.c)
 */

void __fastcall VIDMM_PAGE_DIRECTORY::ReportState(VIDMM_PAGE_DIRECTORY *this, struct CVirtualAddressAllocator *a2)
{
  unsigned int NumPde; // eax
  unsigned int v5; // r15d
  unsigned int v6; // ebp
  __int64 v7; // r14
  __int64 v8; // rsi
  VIDMM_PAGE_TABLE_BASE *v9; // rcx

  if ( *((_QWORD *)this + 6) )
  {
    NumPde = CVirtualAddressAllocator::GetNumPde(a2, this);
    v5 = 2 * NumPde;
    if ( (*(_DWORD *)this & 0x1020) != 0x1020 )
      v5 = NumPde;
    v6 = 0;
    if ( v5 )
    {
      v7 = 0LL;
      v8 = 0LL;
      do
      {
        v9 = *(VIDMM_PAGE_TABLE_BASE **)(v8 + *((_QWORD *)this + 6));
        if ( v9 )
        {
          if ( (*(_DWORD *)this & 0x20) != 0 )
          {
            if ( (*(_DWORD *)(v7 + *((_QWORD *)this + 5)) & 0x400LL) == 0 )
              VIDMM_PAGE_TABLE_BASE::ReportState(v9, a2);
          }
          else
          {
            VIDMM_PAGE_DIRECTORY::ReportState(v9, a2);
          }
        }
        ++v6;
        v8 += 8LL;
        v7 += 16LL;
      }
      while ( v6 < v5 );
    }
  }
  VIDMM_PAGE_TABLE_BASE::ReportState(this, a2);
}
