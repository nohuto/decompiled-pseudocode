/*
 * XREFs of ?InitializePageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C00B2AB8
 * Callers:
 *     ?CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z @ 0x1C00B29A4 (-CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C00023B8 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x1C00199EC (DxgkLogInternalTriageEvent.c)
 *     ?CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z @ 0x1C009304C (-CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z.c)
 */

__int64 __fastcall VIDMM_PAGE_DIRECTORY::InitializePageDirectory(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2)
{
  int v4; // edx
  __int64 v5; // r10
  __int64 v6; // r9
  unsigned int *v7; // rcx
  int v8; // eax
  unsigned int v9; // r8d
  __int64 v10; // rdx
  unsigned int v11; // esi
  unsigned int v12; // edx
  unsigned __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  int VidMmObjects; // ebx
  __int64 v20; // rcx
  __int64 v21; // rcx

  v4 = *(_DWORD *)this;
  v5 = *(_QWORD *)(*((_QWORD *)a2 + 11) + 40224LL) + 1616LL * ((*(_DWORD *)this >> 7) & 0x1F);
  v6 = *((_QWORD *)a2 + 15) + 32LL * ((*(_DWORD *)this >> 7) & 0x1F);
  v7 = (unsigned int *)(v6 + 16);
  if ( (v4 & 0x10) != 0 && !*v7 )
    return 0LL;
  v8 = v4 ^ ((unsigned __int16)v4 ^ (unsigned __int16)(32 * **(_DWORD **)(v5 + 448))) & 0x1000;
  *(_DWORD *)this = v8;
  v9 = v8 ^ ((unsigned __int16)v8 ^ (unsigned __int16)((unsigned __int16)*(_DWORD *)(v5 + 432) << 13)) & 0xE000;
  *(_DWORD *)this = v9;
  if ( (v9 & 0x10) != 0 )
  {
    v11 = *(_DWORD *)(v6 + 20);
  }
  else
  {
    v10 = v9 & 7;
    v7 = (unsigned int *)(v5 + 48 * (v10 + 2));
    v11 = *(_DWORD *)(v5 + 48 * v10 + 104);
  }
  v12 = *v7;
  v13 = 2 * *v7;
  *(_DWORD *)this = v9 ^ ((unsigned __int8)v9 ^ (unsigned __int8)(v9 >> 6)) & 0x40;
  if ( (v9 & 0x1020) != 0x1020 )
    v13 = v12;
  v14 = 16 * v13;
  if ( !is_mul_ok(v13, 0x10uLL) )
    v14 = -1LL;
  v15 = operator new[](v14, 0x37356956u, 256LL);
  *((_QWORD *)this + 5) = v15;
  if ( !v15 )
  {
    WdLogSingleEntry1(1LL, 4376LL);
LABEL_19:
    DxgkLogInternalTriageEvent(v20, 0x40000LL);
    return 3221225495LL;
  }
  v16 = 8 * v13;
  if ( !is_mul_ok(v13, 8uLL) )
    v16 = -1LL;
  v17 = operator new[](v16, 0x33356956u, 256LL);
  *((_QWORD *)this + 6) = v17;
  if ( !v17 )
  {
    WdLogSingleEntry1(1LL, 4383LL);
    goto LABEL_19;
  }
  VidMmObjects = VIDMM_PAGE_TABLE_BASE::CreateVidMmObjects(
                   (struct VIDMM_ALLOC **)this,
                   a2,
                   v11,
                   *(_DWORD *)(32LL * ((*(_DWORD *)this >> 7) & 0x1F) + *((_QWORD *)a2 + 15) + 24));
  if ( VidMmObjects >= 0 )
    return 0LL;
  WdLogSingleEntry1(1LL, 4390LL);
  DxgkLogInternalTriageEvent(v21, 0x40000LL);
  return (unsigned int)VidMmObjects;
}
