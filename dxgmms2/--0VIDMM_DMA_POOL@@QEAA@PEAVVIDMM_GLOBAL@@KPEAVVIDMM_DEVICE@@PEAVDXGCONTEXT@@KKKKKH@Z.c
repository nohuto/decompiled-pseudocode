/*
 * XREFs of ??0VIDMM_DMA_POOL@@QEAA@PEAVVIDMM_GLOBAL@@KPEAVVIDMM_DEVICE@@PEAVDXGCONTEXT@@KKKKKH@Z @ 0x1C00B4840
 * Callers:
 *     VidMmCreateDmaPool @ 0x1C00184B0 (VidMmCreateDmaPool.c)
 *     ?InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C00C2308 (-InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

VIDMM_DMA_POOL *__fastcall VIDMM_DMA_POOL::VIDMM_DMA_POOL(
        VIDMM_DMA_POOL *this,
        struct VIDMM_GLOBAL *a2,
        int a3,
        struct VIDMM_DEVICE *a4,
        struct DXGCONTEXT *a5,
        unsigned int a6,
        unsigned int a7,
        unsigned int a8,
        unsigned int a9,
        unsigned int a10,
        int a11)
{
  int v12; // eax
  unsigned int v13; // ecx
  int v14; // eax
  unsigned int v15; // ecx
  int v16; // eax

  *((_DWORD *)this + 9) = a9;
  *((_QWORD *)this + 5) = a6;
  *((_QWORD *)this + 6) = a6;
  *((_QWORD *)this + 7) = a6;
  *((_DWORD *)this + 16) = a7;
  *((_DWORD *)this + 17) = a7;
  *((_DWORD *)this + 18) = a7;
  *((_DWORD *)this + 19) = a8;
  *((_DWORD *)this + 20) = a8;
  *((_DWORD *)this + 21) = a8;
  *((_DWORD *)this + 22) = a10;
  v12 = *((_DWORD *)this + 8);
  *(_QWORD *)this = a2;
  *((_DWORD *)this + 2) = a3;
  *((_QWORD *)this + 2) = a4;
  *((_QWORD *)this + 3) = a5;
  *((_DWORD *)this + 23) = 0;
  *((_QWORD *)this + 16) = 0LL;
  *((_DWORD *)this + 34) = 0;
  v13 = v12 & 0xFFFFFFFC | (a11 != 0) | 0xC;
  *((_DWORD *)this + 8) = v13;
  if ( !a5 || (v14 = 16, !*((_BYTE *)a5 + 438)) )
    v14 = 0;
  v15 = v14 | v13 & 0xFFFFFFEF;
  *((_DWORD *)this + 8) = v15;
  if ( !a5 || (v16 = 32, !*((_BYTE *)a5 + 439)) )
    v16 = 0;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 8) = v16 | v15 & 0xFFFFFFDF;
  *((_QWORD *)this + 13) = (char *)this + 96;
  *((_QWORD *)this + 12) = (char *)this + 96;
  return this;
}
