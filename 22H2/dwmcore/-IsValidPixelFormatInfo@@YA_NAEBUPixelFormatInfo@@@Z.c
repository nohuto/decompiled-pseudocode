/*
 * XREFs of ?IsValidPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@@Z @ 0x180032318
 * Callers:
 *     ?HrInit@CClientMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@IPEAXIPEAUIUnknown@@@Z @ 0x1800321CC (-HrInit@CClientMemoryBitmap@@QEAAJIIAEBUPixelFormatInfo@@IPEAXIPEAUIUnknown@@@Z.c)
 *     ?Initialize@CFormatConverter@@IEAAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@N@Z @ 0x180219698 (-Initialize@CFormatConverter@@IEAAJPEAVIBitmapSource@@AEBUPixelFormatInfo@@N@Z.c)
 * Callees:
 *     ?IsValidPixelFormat@@YAHW4DXGI_FORMAT@@@Z @ 0x1800322E8 (-IsValidPixelFormat@@YAHW4DXGI_FORMAT@@@Z.c)
 *     ?HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z @ 0x180033940 (-HasAlphaChannel@@YAHW4DXGI_FORMAT@@@Z.c)
 */

char __fastcall IsValidPixelFormatInfo(const struct PixelFormatInfo *a1)
{
  enum DXGI_FORMAT v1; // ecx
  __int64 v2; // rdx
  int v3; // ecx
  bool v4; // zf
  char v5; // cl
  bool v6; // al
  int v7; // eax

  if ( !IsValidPixelFormat(*(_DWORD *)a1) )
    return 0;
  if ( (unsigned int)HasAlphaChannel(v1) )
  {
    v4 = v3 == 24;
    v5 = 1;
    if ( v4 )
    {
      v6 = *(_DWORD *)(v2 + 4) != 1;
      goto LABEL_5;
    }
  }
  else
  {
    v5 = 1;
    if ( (unsigned int)(*(_DWORD *)(v2 + 4) - 1) <= 1 )
      return 0;
  }
  v6 = 1;
LABEL_5:
  if ( !v6 )
    return 0;
  v7 = *(_DWORD *)(v2 + 8);
  if ( v7 < 0 || v7 == 4 || v7 > 17 )
    return 0;
  return v5;
}
