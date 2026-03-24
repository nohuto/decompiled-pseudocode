/*
 * XREFs of ?UseSuperSample@CDDisplayRenderTarget@@IEBA_NXZ @ 0x18018D3A8
 * Callers:
 *     ?RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCComposeTop@@@Z @ 0x18018CA3C (-RenderDirtyRegion@CDDisplayRenderTarget@@IEAAJPEAVCDrawingContext@@PEBVCDirtyRegion@@PEAVCCompo.c)
 * Callees:
 *     <none>
 */

char __fastcall CDDisplayRenderTarget::UseSuperSample(CDDisplayRenderTarget *this)
{
  char v1; // dl
  int v2; // r8d
  int v3; // r9d
  int v4; // eax
  bool v5; // zf

  v1 = 0;
  v2 = *((_DWORD *)this + 4568) - *((_DWORD *)this + 4566);
  v3 = *((_DWORD *)this + 4569) - *((_DWORD *)this + 4567);
  v4 = *((_DWORD *)this + 4572);
  if ( ((*((_DWORD *)this + 4574) - 1) & 0xFFFFFFFD) != 0 )
  {
    if ( v4 - *((_DWORD *)this + 4570) == v3 )
    {
      v5 = *((_DWORD *)this + 4573) - *((_DWORD *)this + 4571) == v2;
      goto LABEL_6;
    }
    return *((_BYTE *)this + 11209) == 0;
  }
  if ( v4 - *((_DWORD *)this + 4570) != v2 )
    return *((_BYTE *)this + 11209) == 0;
  v5 = *((_DWORD *)this + 4573) - *((_DWORD *)this + 4571) == v3;
LABEL_6:
  if ( !v5 )
    return *((_BYTE *)this + 11209) == 0;
  return v1;
}
