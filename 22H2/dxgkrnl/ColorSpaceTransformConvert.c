/*
 * XREFs of ColorSpaceTransformConvert @ 0x1C0019604
 * Callers:
 *     ?_CombineDXGIGammaRamp@DXGMONITOR@@AEAAJPEAUDXGK_GAMMA_RAMP@@PEAPEAU2@@Z @ 0x1C0140054 (-_CombineDXGIGammaRamp@DXGMONITOR@@AEAAJPEAUDXGK_GAMMA_RAMP@@PEAPEAU2@@Z.c)
 *     ?_SetColorSpaceTransform@DXGMONITOR@@AEAAJKPEAX@Z @ 0x1C015F084 (-_SetColorSpaceTransform@DXGMONITOR@@AEAAJKPEAX@Z.c)
 * Callees:
 *     memmove @ 0x1C0028D00 (memmove.c)
 *     ?ConvertToDxgi1@@YAJPEAU_D3DKMDT_GAMMA_RAMP@@0@Z @ 0x1C0061B14 (-ConvertToDxgi1@@YAJPEAU_D3DKMDT_GAMMA_RAMP@@0@Z.c)
 *     ?ConvertToMatrix_3x4@@YAJPEAU_D3DKMDT_GAMMA_RAMP@@0@Z @ 0x1C0061CC4 (-ConvertToMatrix_3x4@@YAJPEAU_D3DKMDT_GAMMA_RAMP@@0@Z.c)
 *     ?ConvertToMatrix_V2@@YAJPEAU_D3DKMDT_GAMMA_RAMP@@0@Z @ 0x1C0061DE4 (-ConvertToMatrix_V2@@YAJPEAU_D3DKMDT_GAMMA_RAMP@@0@Z.c)
 *     ColorSpaceTransformInitIdentityTransform @ 0x1C00623F0 (ColorSpaceTransformInitIdentityTransform.c)
 */

__int64 __fastcall ColorSpaceTransformConvert(struct _D3DKMDT_GAMMA_RAMP *a1, struct _D3DKMDT_GAMMA_RAMP *a2)
{
  size_t v2; // r9
  __int64 Type; // r8
  int v4; // r8d
  int v5; // r8d
  int v7; // r8d
  int v8; // r8d
  int v9; // r8d
  int v10; // r8d

  v2 = 0LL;
  if ( !a1 || !a2 )
    return 3221225485LL;
  Type = (unsigned int)a2->Type;
  if ( a1->Type == (_DWORD)Type )
  {
    v4 = Type - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        v7 = v5 - 1;
        if ( v7 )
        {
          v8 = v7 - 1;
          if ( v8 )
          {
            if ( v8 == 1 )
              v2 = 98352LL;
          }
          else
          {
            v2 = 49204LL;
          }
        }
        else
        {
          v2 = 12324LL;
        }
      }
      else
      {
        v2 = 1536LL;
      }
    }
    memmove(a2->Data.pRgb256x3x16, a1->Data.pRgb256x3x16, v2);
    return 0LL;
  }
  if ( a1->Type == D3DDDI_GAMMARAMP_DEFAULT )
    return ColorSpaceTransformInitIdentityTransform(a2, a2, Type, 0LL);
  v9 = Type - 3;
  if ( !v9 )
    return ConvertToDxgi1(a1, a2);
  v10 = v9 - 1;
  if ( !v10 )
    return ConvertToMatrix_3x4(a1, a2);
  if ( v10 != 1 )
    return 0LL;
  return ConvertToMatrix_V2(a1, a2);
}
