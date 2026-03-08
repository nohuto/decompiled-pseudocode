/*
 * XREFs of ?DestroyDisconnectedPageTables@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@II_K1PEAUVIDMM_ALLOC@@@Z @ 0x1C00B3BF8
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0090840 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 * Callees:
 *     ?DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C009375C (-DestroyPageTable@VIDMM_PAGE_TABLE@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
 *     ?DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z @ 0x1C00A62A4 (-DestroyPageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAXPEAVCVirtualAddressAllocator@@_K@Z.c)
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
  __int64 v12; // r15
  __int64 v13; // rcx
  __int64 v14; // rax
  struct VIDMM_ALLOC **v15; // rcx
  __int64 v16; // rcx
  struct VIDMM_ALLOC **v17; // rcx
  struct VIDMM_ALLOC **v18; // rcx

  if ( a3 < a4 )
  {
    v10 = 8LL * a3;
    v11 = 16LL * a3;
    v12 = a4 - a3;
    while ( 1 )
    {
      v13 = *((_QWORD *)this + 5);
      if ( (*(_DWORD *)this & 0x20) == 0 )
        break;
      v14 = *(_QWORD *)(v11 + v13);
      if ( (v14 & 0x400) != 0 )
      {
        v16 = *(_QWORD *)(v10 + *((_QWORD *)this + 6));
        if ( v16 )
        {
          v17 = *(struct VIDMM_ALLOC ***)(v16 + 24);
          if ( v17 )
          {
            VIDMM_PAGE_TABLE::DestroyPageTable(v17, a2);
            *(_QWORD *)(*(_QWORD *)(v10 + *((_QWORD *)this + 6)) + 24LL) = 0LL;
          }
        }
        goto LABEL_11;
      }
      if ( (v14 & 3) != 1 )
      {
        v15 = *(struct VIDMM_ALLOC ***)(v10 + *((_QWORD *)this + 6));
        if ( v15 )
        {
          if ( v15[3] != a7 && (*(_DWORD *)v15 & 0x20000) == 0 )
          {
            VIDMM_PAGE_TABLE::DestroyPageTable(v15, a2);
LABEL_10:
            *(_QWORD *)(v10 + *((_QWORD *)this + 6)) = 0LL;
          }
        }
      }
LABEL_11:
      a5 += a6;
      v11 += 16LL;
      v10 += 8LL;
      if ( !--v12 )
        return;
    }
    if ( (*(_BYTE *)(v11 + v13) & 3) == 1 )
      goto LABEL_11;
    v18 = *(struct VIDMM_ALLOC ***)(v10 + *((_QWORD *)this + 6));
    if ( !v18 )
      goto LABEL_11;
    VIDMM_PAGE_DIRECTORY::DestroyPageDirectory(v18, a2, a5);
    goto LABEL_10;
  }
}
