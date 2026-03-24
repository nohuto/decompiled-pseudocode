/*
 * XREFs of ?CheckPageTableInvalid@VIDMM_PAGE_DIRECTORY@@QEAAEI_KPEAPEAV1@PEAPEAVVIDMM_PAGE_TABLE@@@Z @ 0x1C005ED10
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C006FD20 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall VIDMM_PAGE_DIRECTORY::CheckPageTableInvalid(
        VIDMM_PAGE_DIRECTORY *this,
        unsigned int a2,
        __int64 a3,
        struct VIDMM_PAGE_DIRECTORY **a4,
        struct VIDMM_PAGE_TABLE **a5)
{
  __int64 v5; // r11
  __int64 v7; // r8
  __int64 v9; // rdx
  __int64 v10; // r8
  struct VIDMM_PAGE_TABLE *v11; // rcx
  struct VIDMM_PAGE_DIRECTORY *v12; // rdx

  v5 = a2;
  v7 = *((_QWORD *)this + 5);
  v9 = 2LL * a2;
  if ( (*(_BYTE *)(v7 + 8 * v9) & 1) == 0 || *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 6) + 8 * v5) + 4LL) )
    return 0;
  --*((_DWORD *)this + 1);
  *(_QWORD *)(v7 + 8 * v9) = 0LL;
  *(_QWORD *)(v7 + 8 * v9 + 8) = 0LL;
  v10 = *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v5);
  if ( (*(_DWORD *)this & 0x20) != 0 )
  {
    *(_QWORD *)(v10 + 40) = *a5;
    v11 = *(struct VIDMM_PAGE_TABLE **)(*((_QWORD *)this + 6) + 8 * v5);
    *a5 = v11;
    *((_QWORD *)v11 + 1) = a3;
  }
  else
  {
    *(_QWORD *)(v10 + 32) = *a4;
    v12 = *(struct VIDMM_PAGE_DIRECTORY **)(*((_QWORD *)this + 6) + 8 * v5);
    *a4 = v12;
    *((_QWORD *)v12 + 1) = a3;
  }
  *(_QWORD *)(*((_QWORD *)this + 6) + 8 * v5) = 0LL;
  return 1;
}
