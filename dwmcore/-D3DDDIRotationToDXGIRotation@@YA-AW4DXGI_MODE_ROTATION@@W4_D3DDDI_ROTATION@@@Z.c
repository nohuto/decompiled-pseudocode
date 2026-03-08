/*
 * XREFs of ?D3DDDIRotationToDXGIRotation@@YA?AW4DXGI_MODE_ROTATION@@W4_D3DDDI_ROTATION@@@Z @ 0x180014B94
 * Callers:
 *     ?GetRotation@CDxHandleBitmapRealization@@UEBA?AW4DXGI_MODE_ROTATION@@XZ @ 0x180014B80 (-GetRotation@CDxHandleBitmapRealization@@UEBA-AW4DXGI_MODE_ROTATION@@XZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall D3DDDIRotationToDXGIRotation(int a1)
{
  unsigned int v1; // edx
  int v2; // ecx
  int v3; // ecx

  v1 = 1;
  v2 = a1 - 2;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      if ( v3 == 1 )
        return 4;
    }
    else
    {
      return 3;
    }
  }
  else
  {
    return 2;
  }
  return v1;
}
