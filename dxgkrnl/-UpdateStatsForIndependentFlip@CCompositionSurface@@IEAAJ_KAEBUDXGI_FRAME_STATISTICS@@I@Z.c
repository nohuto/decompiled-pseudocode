/*
 * XREFs of ?UpdateStatsForIndependentFlip@CCompositionSurface@@IEAAJ_KAEBUDXGI_FRAME_STATISTICS@@I@Z @ 0x1C007C688
 * Callers:
 *     ?UpdateStatsForIndependentFlip@CompositionSurfaceObject@@QEAAX_KAEBUDXGI_FRAME_STATISTICS@@I@Z @ 0x1C0077380 (-UpdateStatsForIndependentFlip@CompositionSurfaceObject@@QEAAX_KAEBUDXGI_FRAME_STATISTICS@@I@Z.c)
 * Callees:
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C000D670 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 */

__int64 __fastcall CCompositionSurface::UpdateStatsForIndependentFlip(
        CCompositionSurface *this,
        __int64 a2,
        const struct DXGI_FRAME_STATISTICS *a3,
        int a4)
{
  __int64 result; // rax
  __int128 *v6; // r11
  struct CCompositionBuffer *v7; // rcx
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  struct CCompositionBuffer *v10; // [rsp+20h] [rbp-18h] BYREF

  v10 = 0LL;
  result = CCompositionSurface::FindBuffer(this, a2, &v10);
  if ( (int)result >= 0 )
  {
    v7 = v10;
    v8 = *v6;
    v9 = v6[1];
    *((_DWORD *)v10 + 52) = 0;
    *((_DWORD *)v7 + 62) = 0;
    *(_OWORD *)((char *)v7 + 216) = v8;
    *((_BYTE *)v7 + 42) = 1;
    *(_OWORD *)((char *)v7 + 232) = v9;
    *((_DWORD *)v7 + 50) = 0;
    *((_DWORD *)v7 + 52) = a4;
    *((_DWORD *)v7 + 62) = 2;
  }
  return result;
}
