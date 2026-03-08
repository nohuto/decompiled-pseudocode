/*
 * XREFs of ?_ValidateDdiGraphicsRenderingFormat@DMMVIDPNSOURCEMODE@@CAJAEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@@Z @ 0x1C0068FE4
 * Callers:
 *     ?Initialize@DMMVIDPNSOURCEMODE@@QEAAJAEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@W4_D3DKMDT_VIDPN_SOURCE_MODE_TYPE@@@Z @ 0x1C0068AE0 (-Initialize@DMMVIDPNSOURCEMODE@@QEAAJAEBU_D3DKMDT_GRAPHICS_RENDERING_FORMAT@@W4_D3DKMDT_VIDPN_SO.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DMMVIDPNSOURCEMODE::_ValidateDdiGraphicsRenderingFormat(
        const struct _D3DKMDT_GRAPHICS_RENDERING_FORMAT *a1)
{
  __int64 cx; // rax
  __int64 v2; // rax
  unsigned int v3; // ebx
  D3DKMDT_COLOR_BASIS ColorBasis; // eax
  D3DKMDT_PIXEL_VALUE_ACCESS_MODE PixelValueAccessMode; // eax

  cx = a1->PrimSurfSize.cx;
  if ( (unsigned int)cx < 0x64 || a1->PrimSurfSize.cy < 0x64 )
  {
    WdLogSingleEntry3(2LL, cx, a1->PrimSurfSize.cy, a1);
    return 3223192378LL;
  }
  else
  {
    v2 = a1->VisibleRegionSize.cx;
    if ( (unsigned int)v2 < 0x64 || a1->VisibleRegionSize.cy < 0x64 )
    {
      WdLogSingleEntry3(2LL, v2, a1->VisibleRegionSize.cy, a1);
      return 3223192379LL;
    }
    else
    {
      if ( !a1->Stride )
      {
        v3 = -1071774916;
LABEL_9:
        WdLogSingleEntry2(2LL, 0LL, a1);
        return v3;
      }
      if ( a1->PixelFormat == D3DDDIFMT_UNKNOWN )
      {
        v3 = -1071774915;
        goto LABEL_9;
      }
      ColorBasis = a1->ColorBasis;
      if ( ColorBasis && ColorBasis <= D3DKMDT_CB_YPBPR )
      {
        PixelValueAccessMode = a1->PixelValueAccessMode;
        if ( PixelValueAccessMode && PixelValueAccessMode <= D3DKMDT_PVAM_SETTABLEPALETTE )
        {
          return 0LL;
        }
        else
        {
          WdLogSingleEntry2(2LL, a1->PixelValueAccessMode, a1);
          return 3223192383LL;
        }
      }
      else
      {
        WdLogSingleEntry2(2LL, a1->ColorBasis, a1);
        return 3223192382LL;
      }
    }
  }
}
