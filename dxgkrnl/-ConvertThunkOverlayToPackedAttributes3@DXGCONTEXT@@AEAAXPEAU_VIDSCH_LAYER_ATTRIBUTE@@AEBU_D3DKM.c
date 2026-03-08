/*
 * XREFs of ?ConvertThunkOverlayToPackedAttributes3@DXGCONTEXT@@AEAAXPEAU_VIDSCH_LAYER_ATTRIBUTE@@AEBU_D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3@@@Z @ 0x1C019DC30
 * Callers:
 *     ?SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEPEBVDXGALLOCATIONREFERENCE@@PEAEPEAU_DXGKARG_PRESENT@@PEAUVIDSCH_SUBMIT_DATA_BASE@@PEAPEAV1@@Z @ 0x1C019CB50 (-SubmitPresentMultiPlaneOverlays3@DXGCONTEXT@@AEAAJPEBU_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3@@EEEP.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0014FB0 (DxgkLogInternalTriageEvent.c)
 */

void __fastcall DXGCONTEXT::ConvertThunkOverlayToPackedAttributes3(
        DXGCONTEXT *this,
        struct _VIDSCH_LAYER_ATTRIBUTE *a2,
        const struct _D3DKMT_MULTIPLANE_OVERLAY_ATTRIBUTES3 *a3)
{
  int v4; // esi
  unsigned int v6; // edx
  int v7; // ecx
  int v8; // edx
  __int32 v9; // eax
  unsigned int v10; // eax
  D3DDDI_COLOR_SPACE_TYPE ColorSpace; // ecx
  unsigned int v12; // eax

  *(_WORD *)a2 = a3->SrcRect.left;
  v4 = 0;
  *((_WORD *)a2 + 1) = a3->SrcRect.right;
  *((_WORD *)a2 + 2) = a3->SrcRect.top;
  *((_WORD *)a2 + 3) = a3->SrcRect.bottom;
  *((_WORD *)a2 + 4) = a3->DstRect.left;
  *((_WORD *)a2 + 5) = a3->DstRect.right;
  *((_WORD *)a2 + 6) = a3->DstRect.top;
  *((_WORD *)a2 + 7) = a3->DstRect.bottom;
  *((_WORD *)a2 + 8) = a3->ClipRect.left;
  *((_WORD *)a2 + 9) = a3->ClipRect.right;
  *((_WORD *)a2 + 10) = a3->ClipRect.top;
  *((_WORD *)a2 + 11) = a3->ClipRect.bottom;
  v6 = ((a3->Flags & 1) != 0) | *((_DWORD *)a2 + 7) & 0xFFFFFFFE;
  v7 = 0;
  *((_DWORD *)a2 + 7) = v6;
  if ( (a3->Flags & 2) != 0 )
    v7 = 2;
  *((_DWORD *)a2 + 7) = v7 | v6 & 0xFFFFFFFD;
  if ( !a3->Rotation )
  {
    WdLogSingleEntry1(1LL, 2281LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"1 <= static_cast< UINT >(PlaneAttributes.Rotation)",
      2281LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( a3->Rotation > (unsigned int)D3DDDI_ROTATION_270 )
  {
    WdLogSingleEntry1(1LL, 2282LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"4 >= static_cast< UINT >(PlaneAttributes.Rotation)",
      2282LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v8 = 0;
  v9 = *((_DWORD *)a2 + 7) ^ (*((_DWORD *)a2 + 7) ^ (8 * a3->Rotation - 8)) & 0x18;
  *((_DWORD *)a2 + 7) = v9;
  if ( (a3->Blend & 1) != 0 )
    v8 = 4;
  v10 = v8 & 0xFFFFFF9F | v9 & 0xFFFFFF9B;
  *((_DWORD *)a2 + 7) = v10;
  ColorSpace = a3->ColorSpace;
  if ( ColorSpace == D3DDDI_COLOR_SPACE_YCBCR_STUDIO_G22_LEFT_P601
    || ColorSpace == D3DDDI_COLOR_SPACE_YCBCR_STUDIO_G22_LEFT_P709 )
  {
    v10 |= 0x80u;
    *((_DWORD *)a2 + 7) = v10;
  }
  if ( a3->ColorSpace == D3DDDI_COLOR_SPACE_YCBCR_STUDIO_G22_LEFT_P709
    || a3->ColorSpace == D3DDDI_COLOR_SPACE_YCBCR_FULL_G22_LEFT_P709 )
  {
    v10 |= 0x100u;
  }
  v12 = v10 & 0xFFFFFDFF;
  *((_DWORD *)a2 + 7) = v12;
  if ( a3->StretchQuality == DXGKMT_MULTIPLANE_OVERLAY_STRETCH_QUALITY_HIGH )
    v4 = 0x400000;
  *((_DWORD *)a2 + 7) = v4 | v12 & 0xFFBFFFFF;
  *((_DWORD *)a2 + 6) = a3->ColorSpace;
  *((_DWORD *)a2 + 8) = a3->SDRWhiteLevel;
}
