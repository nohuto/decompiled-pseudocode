/*
 * XREFs of ?GetInnerBorderInfo@SwitchItemThumbnailElement@@IEAA?AUDCompThumbnailFrameInfo@@XZ @ 0x180425A40
 * Callers:
 *     ?CreateDragVisual@SwitchItemThumbnailElement@@UEAAJPEAUISwitchThumbnailFactory@@PEAUIDCompThumbnail@@AEBUCRect@Geometry@@PEAPEAUIUnknown@@@Z @ 0x180425630 (-CreateDragVisual@SwitchItemThumbnailElement@@UEAAJPEAUISwitchThumbnailFactory@@PEAUIDCompThumbn.c)
 *     ?UpdateThumbnailBorder@SwitchItemThumbnailElement@@IEAAXXZ @ 0x1804261F0 (-UpdateThumbnailBorder@SwitchItemThumbnailElement@@IEAAXXZ.c)
 * Callees:
 *     ?IsHighContrast@@YAHXZ @ 0x18000C270 (-IsHighContrast@@YAHXZ.c)
 *     ?GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z @ 0x1804107B0 (-GetColor@CImmersiveColor@@SAKW4IMMERSIVE_COLOR_TYPE@@@Z.c)
 *     ?_CalcButtonRenderMode@CMultitaskingViewButtonElement@@IEAA?AW4ButtonRenderMode@1@XZ @ 0x18041EE08 (-_CalcButtonRenderMode@CMultitaskingViewButtonElement@@IEAA-AW4ButtonRenderMode@1@XZ.c)
 */

__int64 __fastcall SwitchItemThumbnailElement::GetInnerBorderInfo(__int64 a1, __int64 a2)
{
  int v3; // eax
  unsigned int v4; // ecx

  *(_QWORD *)a2 = *(unsigned int *)(a1 + 408);
  *(_DWORD *)(a2 + 8) = 1065353216;
  LOBYTE(v3) = CMultitaskingViewButtonElement::_CalcButtonRenderMode(a1);
  if ( v3 )
  {
    v4 = 179;
LABEL_5:
    *(_DWORD *)(a2 + 4) = CImmersiveColor::GetColor(v4);
    return a2;
  }
  if ( (unsigned int)IsHighContrast() )
  {
    v4 = 181;
    goto LABEL_5;
  }
  return a2;
}
