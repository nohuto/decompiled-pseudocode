/*
 * XREFs of ??0VIDMM_PAGE_DIRECTORY@@QEAA@III@Z @ 0x1C00B2A44
 * Callers:
 *     ?CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z @ 0x1C00B29A4 (-CreatePageDirectory@@YAPEAVVIDMM_PAGE_DIRECTORY@@PEAVCVirtualAddressAllocator@@II@Z.c)
 * Callees:
 *     <none>
 */

VIDMM_PAGE_DIRECTORY *__fastcall VIDMM_PAGE_DIRECTORY::VIDMM_PAGE_DIRECTORY(
        VIDMM_PAGE_DIRECTORY *this,
        char a2,
        int a3,
        int a4)
{
  int v4; // r10d
  int v5; // r11d
  int v6; // eax
  int v7; // r11d
  VIDMM_PAGE_DIRECTORY *result; // rax

  v4 = 0;
  *(_OWORD *)this = 0LL;
  v5 = 0;
  *((_OWORD *)this + 1) = 0LL;
  *((_OWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  if ( a4 == a3 )
    v5 = 16;
  v6 = 0;
  if ( a4 == 1 )
    v6 = 32;
  v7 = a4 & 7 | v6 | v5;
  if ( a4 == a3 && a3 == 1 )
    v4 = 8;
  result = this;
  *(_DWORD *)this = v4 | v7 | ((a2 & 0x1F) << 7);
  return result;
}
