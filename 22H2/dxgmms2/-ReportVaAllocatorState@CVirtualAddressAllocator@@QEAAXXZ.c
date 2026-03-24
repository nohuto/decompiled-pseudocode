/*
 * XREFs of ?ReportVaAllocatorState@CVirtualAddressAllocator@@QEAAXXZ @ 0x1C00BDF30
 * Callers:
 *     ?ReportProcessStates@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C00B1CC0 (-ReportProcessStates@VIDMM_GLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001B54 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C0001BCC (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0001D2C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     McTemplateK0ppp_EtwWriteTransfer @ 0x1C0024F28 (McTemplateK0ppp_EtwWriteTransfer.c)
 *     McTemplateK0ppxxxxxqxx_EtwWriteTransfer @ 0x1C00260D4 (McTemplateK0ppxxxxxqxx_EtwWriteTransfer.c)
 *     McTemplateK0pqxx_EtwWriteTransfer @ 0x1C00261D4 (McTemplateK0pqxx_EtwWriteTransfer.c)
 *     ?ReportState@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@@Z @ 0x1C00BDC48 (-ReportState@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@@Z.c)
 */

void __fastcall CVirtualAddressAllocator::ReportVaAllocatorState(CVirtualAddressAllocator *this)
{
  _QWORD *v2; // rcx
  __int64 v3; // r8
  _QWORD *v4; // rax
  unsigned __int64 k; // rbx
  __int64 i; // rbp
  __int64 *j; // rsi
  _QWORD **v8; // rax
  _QWORD *m; // rax
  _QWORD **v10; // rax
  VIDMM_PAGE_DIRECTORY *v11; // rcx
  __int64 v12; // [rsp+20h] [rbp-78h]
  __int64 v13; // [rsp+50h] [rbp-48h]
  _BYTE v14[8]; // [rsp+70h] [rbp-28h] BYREF
  DXGPUSHLOCK *v15; // [rsp+78h] [rbp-20h]
  int v16; // [rsp+80h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v14, (struct _KTHREAD **)this + 7, 0);
  DXGPUSHLOCK::AcquireExclusive(v15);
  v16 = 2;
  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
    McTemplateK0ppp_EtwWriteTransfer(
      *(_QWORD *)(*((_QWORD *)this + 12) + 32LL),
      &ReportGpuVirtualAddressAllocator,
      *((_QWORD *)this + 11),
      this,
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 12) + 32LL) + 64LL) + 72LL),
      *(_QWORD *)(*((_QWORD *)this + 11) + 24LL));
  v4 = (_QWORD *)*((_QWORD *)this + 6);
  k = 0LL;
  while ( v4 )
  {
    k = (unsigned __int64)v4;
    v4 = (_QWORD *)*v4;
  }
  while ( k )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
    {
      LODWORD(v12) = *(_DWORD *)(k + 72);
      McTemplateK0pqxx_EtwWriteTransfer(
        (__int64)v2,
        &ReportGpuVirtualAddressRange,
        v3,
        this,
        v12,
        *(_QWORD *)(k + 24),
        *(_QWORD *)(k + 32));
    }
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(*((_QWORD *)this + 11) + 7000LL); i = (unsigned int)(i + 1) )
    {
      for ( j = *(__int64 **)(k + 24 * i + 96); j != (__int64 *)(k + 24 * (i + 4)); j = (__int64 *)*j )
      {
        if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
        {
          LODWORD(v13) = *((_DWORD *)j + 14);
          McTemplateK0ppxxxxxqxx_EtwWriteTransfer(
            (__int64)v2,
            &ReportGpuVirtualAddressRangeMapping,
            v3,
            this,
            j[6],
            j[8],
            j[11],
            j[12],
            j[10],
            j[9],
            v13,
            j[13],
            j[14]);
        }
      }
    }
    v8 = *(_QWORD ***)(k + 8);
    v2 = (_QWORD *)k;
    if ( v8 )
    {
      v2 = *v8;
      for ( k = *(_QWORD *)(k + 8); v2; v2 = (_QWORD *)*v2 )
        k = (unsigned __int64)v2;
    }
    else
    {
      while ( 1 )
      {
        k = *(_QWORD *)(k + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !k || *(_QWORD **)k == v2 )
          break;
        v2 = (_QWORD *)k;
      }
    }
  }
  for ( m = (_QWORD *)*((_QWORD *)this + 5); m; m = (_QWORD *)*m )
    k = (unsigned __int64)m;
  while ( k )
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000) != 0 )
    {
      LODWORD(v12) = *(_DWORD *)(k + 72);
      McTemplateK0pqxx_EtwWriteTransfer(
        (__int64)v2,
        &ReportGpuVirtualAddressRange,
        v3,
        this,
        v12,
        *(_QWORD *)(k + 24),
        *(_QWORD *)(k + 32));
    }
    v10 = *(_QWORD ***)(k + 8);
    v2 = (_QWORD *)k;
    if ( v10 )
    {
      v2 = *v10;
      for ( k = *(_QWORD *)(k + 8); v2; v2 = (_QWORD *)*v2 )
        k = (unsigned __int64)v2;
    }
    else
    {
      while ( 1 )
      {
        k = *(_QWORD *)(k + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !k || *(_QWORD **)k == v2 )
          break;
        v2 = (_QWORD *)k;
      }
    }
  }
  v11 = (VIDMM_PAGE_DIRECTORY *)**((_QWORD **)this + 15);
  if ( v11 )
    VIDMM_PAGE_DIRECTORY::ReportState(v11, this);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
}
