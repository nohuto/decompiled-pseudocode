/*
 * XREFs of ?SetSurfaceStats@CCompositionSurface@@QEAAJ_KAEBUDXGI_FRAME_STATISTICS@@@Z @ 0x1C007C558
 * Callers:
 *     NtSetCompositionSurfaceStatistics @ 0x1C007B370 (NtSetCompositionSurfaceStatistics.c)
 * Callees:
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C000D670 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 */

__int64 __fastcall CCompositionSurface::SetSurfaceStats(
        CCompositionSurface *this,
        __int64 a2,
        const struct DXGI_FRAME_STATISTICS *a3)
{
  __int64 result; // rax
  _OWORD *v4; // r11
  struct CCompositionBuffer *v5; // rcx
  __int128 v6; // xmm1
  struct CCompositionBuffer *v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = 0LL;
  result = CCompositionSurface::FindBuffer(this, a2, &v7);
  if ( (int)result >= 0 )
  {
    v5 = v7;
    *(_OWORD *)((char *)v7 + 216) = *v4;
    v6 = v4[1];
    *((_DWORD *)v5 + 52) = 0;
    *((_DWORD *)v5 + 62) = 0;
    *(_OWORD *)((char *)v5 + 232) = v6;
    *((_BYTE *)v5 + 42) = 1;
  }
  return result;
}
