/*
 * XREFs of ?GetResourceSize@CD3DSurface@@MEBAIXZ @ 0x180298D20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z @ 0x18003E6F0 (-GetPixelFormatSize@@YAEW4DXGI_FORMAT@@@Z.c)
 */

__int64 __fastcall CD3DSurface::GetResourceSize(CD3DSurface *this)
{
  __int64 result; // rax
  unsigned __int8 PixelFormatSize; // al
  __int64 v3; // rdx

  result = 0LL;
  if ( *((_DWORD *)this + 38) != 2 )
  {
    PixelFormatSize = GetPixelFormatSize(*((_DWORD *)this + 35));
    return *(_DWORD *)(v3 + 124) * *(_DWORD *)(v3 + 128) * (PixelFormatSize >> 3);
  }
  return result;
}
