/*
 * XREFs of ?GetBufferAttributes@CCompositionSurface@@IEBAJ_KPEAUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1C000FB00
 * Callers:
 *     ?GetEarlyTokenSync@CFlipToken@@UEBA_NXZ @ 0x1C000FA20 (-GetEarlyTokenSync@CFlipToken@@UEBA_NXZ.c)
 * Callees:
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C0011B50 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 */

__int64 __fastcall CCompositionSurface::GetBufferAttributes(
        CCompositionSurface *this,
        unsigned __int64 a2,
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
  struct CCompositionBuffer *v13; // [rsp+48h] [rbp+20h] BYREF

  v13 = 0LL;
  Buffer = CCompositionSurface::FindBuffer(this, a2, &v13);
  if ( Buffer < 0 )
  {
    memset(v4, 0, 0x78uLL);
  }
  else
  {
    v5 = v13;
    v6 = *((_OWORD *)v13 + 4);
    *v4 = *((_OWORD *)v13 + 3);
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
    *(_QWORD *)&v10 = *((_QWORD *)v5 + 20);
    v4[6] = v11;
    *((_QWORD *)v4 + 14) = v10;
  }
  return (unsigned int)Buffer;
}
