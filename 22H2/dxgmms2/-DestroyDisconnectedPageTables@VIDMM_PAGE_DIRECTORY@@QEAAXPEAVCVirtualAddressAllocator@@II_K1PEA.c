/*
 * XREFs of ?DestroyDisconnectedPageTables@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@II_K1PEAUVIDMM_ALLOC@@@Z @ 0x1C00B2A74
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00987B0 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 * Callees:
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C0087C64 (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C009B6CC (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 */

void __fastcall VIDMM_PAGE_DIRECTORY::DestroyDisconnectedPageTables(
        VIDMM_PAGE_DIRECTORY *this,
        struct CVirtualAddressAllocator *a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int64 a5,
        unsigned __int64 a6,
        struct VIDMM_ALLOC *a7)
{
  __int64 v10; // rdi
  __int64 v11; // rsi
  unsigned int v12; // r9d
  __int64 v13; // r15
  __int64 v14; // rcx
  __int64 v15; // rax
  struct VIDMM_ALLOC **v16; // rcx
  __int64 v17; // rcx
  struct VIDMM_ALLOC **v18; // rcx
  VIDMM_PAGE_DIRECTORY *v19; // rcx

  if ( a3 < a4 )
  {
    v10 = 8LL * a3;
    v11 = 16LL * a3;
    v12 = a4 - a3;
    v13 = v12;
    while ( 1 )
    {
      v14 = *((_QWORD *)this + 5);
      if ( (*(_DWORD *)this & 0x20) == 0 )
        break;
      v15 = *(_QWORD *)(v11 + v14);
      if ( (v15 & 0x400) != 0 )
      {
        v17 = *(_QWORD *)(v10 + *((_QWORD *)this + 6));
        if ( v17 )
        {
          v18 = *(struct VIDMM_ALLOC ***)(v17 + 24);
          if ( v18 )
          {
            VIDMM_PAGE_TABLE::DestroyPageTable(v18, a2);
            *(_QWORD *)(*(_QWORD *)(v10 + *((_QWORD *)this + 6)) + 24LL) = 0LL;
          }
        }
        goto LABEL_11;
      }
      if ( (v15 & 3) != 1 )
      {
        v16 = *(struct VIDMM_ALLOC ***)(v10 + *((_QWORD *)this + 6));
        if ( v16 )
        {
          if ( v16[3] != a7 && (*(_DWORD *)v16 & 0x20000) == 0 )
          {
            VIDMM_PAGE_TABLE::DestroyPageTable(v16, a2);
LABEL_10:
            *(_QWORD *)(v10 + *((_QWORD *)this + 6)) = 0LL;
          }
        }
      }
LABEL_11:
      a5 += a6;
      v11 += 16LL;
      v10 += 8LL;
      if ( !--v13 )
        return;
    }
    if ( (*(_BYTE *)(v11 + v14) & 3) == 1 )
      goto LABEL_11;
    v19 = *(VIDMM_PAGE_DIRECTORY **)(v10 + *((_QWORD *)this + 6));
    if ( !v19 )
      goto LABEL_11;
    VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(v19, a2, a5, v12);
    goto LABEL_10;
  }
}
