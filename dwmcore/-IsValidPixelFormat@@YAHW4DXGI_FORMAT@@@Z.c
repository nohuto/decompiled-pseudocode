/*
 * XREFs of ?IsValidPixelFormat@@YAHW4DXGI_FORMAT@@@Z @ 0x1800A875C
 * Callers:
 *     ?IsValidPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@@Z @ 0x1800A86F8 (-IsValidPixelFormatInfo@@YA_NAEBUPixelFormatInfo@@@Z.c)
 *     ?UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z @ 0x1801E7348 (-UpdatePixelFormatInfo@COffScreenRenderTarget@@IEAAJW4DXGI_FORMAT@@@Z.c)
 *     ?EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z @ 0x1801E9CA4 (-EnsureResources@CCaptureRenderTarget@@IEAAJPEAVCD3DDevice@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsValidPixelFormat(int a1)
{
  int v1; // ecx
  int v3; // ecx
  int v4; // ecx
  int v5; // ecx
  int v6; // ecx
  int v7; // ecx
  int v8; // ecx
  int v9; // ecx
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx

  if ( a1 <= 65 )
  {
    if ( a1 == 65 )
      return 1LL;
    v4 = a1 - 2;
    if ( !v4 )
      return 1LL;
    v5 = v4 - 8;
    if ( !v5 )
      return 1LL;
    v6 = v5 - 1;
    if ( !v6 )
      return 1LL;
    v7 = v6 - 13;
    if ( !v7 )
      return 1LL;
    v8 = v7 - 4;
    if ( !v8 )
      return 1LL;
    v9 = v8 - 21;
    if ( !v9 )
      return 1LL;
    return v9 == 12;
  }
  else
  {
    v1 = a1 - 87;
    if ( !v1 )
      return 1LL;
    v3 = v1 - 1;
    if ( !v3 )
      return 1LL;
    v11 = v3 - 3;
    if ( !v11 )
      return 1LL;
    v12 = v11 - 12;
    if ( !v12 )
      return 1LL;
    v13 = v12 - 1;
    if ( !v13 )
      return 1LL;
    v14 = v13 - 2;
    if ( !v14 )
      return 1LL;
    return v14 == 1;
  }
}
