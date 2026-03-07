__int64 __fastcall CCompositionSurface::UpdateStats(
        CCompositionSurface *this,
        __int64 a2,
        const struct DXGI_FRAME_STATISTICS *a3)
{
  __int64 result; // rax
  __int128 *v4; // r11
  struct CCompositionBuffer *v5; // rcx
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  struct CCompositionBuffer *v8; // [rsp+48h] [rbp+20h] BYREF

  v8 = 0LL;
  result = CCompositionSurface::FindBuffer(this, a2, &v8);
  if ( (int)result >= 0 )
  {
    v5 = v8;
    v6 = *v4;
    v7 = v4[1];
    *((_DWORD *)v8 + 52) = 0;
    *((_DWORD *)v5 + 62) = 0;
    *(_OWORD *)((char *)v5 + 216) = v6;
    *((_BYTE *)v5 + 42) = 1;
    *(_OWORD *)((char *)v5 + 232) = v7;
  }
  return result;
}
