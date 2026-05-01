/*
 * XREFs of ?_CalcButtonRenderMode@CMultitaskingViewButtonElement@@IEAA?AW4ButtonRenderMode@1@XZ @ 0x18041EE08
 * Callers:
 *     ??0CDetectRenderModeChange@CMultitaskingViewButtonElement@@QEAA@PEAV1@@Z @ 0x18041EC1C (--0CDetectRenderModeChange@CMultitaskingViewButtonElement@@QEAA@PEAV1@@Z.c)
 *     ??1CDetectRenderModeChange@CMultitaskingViewButtonElement@@QEAA@XZ @ 0x18041EC5C (--1CDetectRenderModeChange@CMultitaskingViewButtonElement@@QEAA@XZ.c)
 *     ?_SetShrink@CShrinkButtonElement@@IEAAXXZ @ 0x18041F11C (-_SetShrink@CShrinkButtonElement@@IEAAXXZ.c)
 *     ??$_GetStateBasedValue@UGlyphButtonStateMetrics@@@CMultitaskingViewButtonElement@@IEAAAEAUGlyphButtonStateMetrics@@AEAU1@00@Z @ 0x180422044 (--$_GetStateBasedValue@UGlyphButtonStateMetrics@@@CMultitaskingViewButtonElement@@IEAAAEAUGlyphB.c)
 *     ?GetInnerBorderInfo@SwitchItemThumbnailElement@@IEAA?AUDCompThumbnailFrameInfo@@XZ @ 0x180425A40 (-GetInnerBorderInfo@SwitchItemThumbnailElement@@IEAA-AUDCompThumbnailFrameInfo@@XZ.c)
 *     ?GetOuterBorderInfo@SwitchItemThumbnailElement@@IEAA?AUDCompThumbnailFrameInfo@@XZ @ 0x180425A94 (-GetOuterBorderInfo@SwitchItemThumbnailElement@@IEAA-AUDCompThumbnailFrameInfo@@XZ.c)
 *     ?UpdateThumbnailBorder@SwitchItemThumbnailElement@@IEAAXXZ @ 0x1804261F0 (-UpdateThumbnailBorder@SwitchItemThumbnailElement@@IEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall CMultitaskingViewButtonElement::_CalcButtonRenderMode(__int64 a1)
{
  LPARAM v2; // rcx

  v2 = GetMessageExtraInfo() & 0xFF515780LL;
  if ( *(_DWORD *)(a1 + 96) == 2 )
    return 3;
  if ( *(_DWORD *)(a1 + 96) != 1 )
    return 0;
  if ( *(_DWORD *)(a1 + 100) != 1 || *(_QWORD *)(a1 + 128) )
    return v2 != 4283520896LL;
  return 2;
}
