/*
 * XREFs of ?GetBufferAttributes@CCompositionSurface@@IEBAJ_KPEAUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1C007BA08
 * Callers:
 *     ?GetEarlyTokenSync@CompositionSurfaceObject@@QEBA_N_K@Z @ 0x1C0078C48 (-GetEarlyTokenSync@CompositionSurfaceObject@@QEBA_N_K@Z.c)
 * Callees:
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C000D670 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     memset @ 0x1C0027640 (memset.c)
 */

__int64 __fastcall CCompositionSurface::GetBufferAttributes(
        CCompositionSurface *this,
        __int64 a2,
        struct CSM_BUFFER_ATTRIBUTES *a3)
{
  int Buffer; // ebx
  _OWORD *v4; // r11
  struct CCompositionBuffer *v5; // rcx
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  struct CCompositionBuffer *v14; // [rsp+48h] [rbp+20h] BYREF

  v14 = 0LL;
  Buffer = CCompositionSurface::FindBuffer(this, a2, &v14);
  if ( Buffer < 0 )
  {
    memset(v4, 0, 0x90uLL);
  }
  else
  {
    v5 = v14;
    v6 = *((_OWORD *)v14 + 4);
    *v4 = *((_OWORD *)v14 + 3);
    v7 = *((_OWORD *)v5 + 5);
    v4[1] = v6;
    v8 = *((_OWORD *)v5 + 6);
    v4[2] = v7;
    v9 = *((_OWORD *)v5 + 7);
    v4[3] = v8;
    v10 = *((_OWORD *)v5 + 8);
    v4[4] = v9;
    v11 = *((_OWORD *)v5 + 9);
    v4[5] = v10;
    v12 = *((_OWORD *)v5 + 11);
    v4[6] = v11;
    v4[7] = *((_OWORD *)v5 + 10);
    v4[8] = v12;
  }
  return (unsigned int)Buffer;
}
