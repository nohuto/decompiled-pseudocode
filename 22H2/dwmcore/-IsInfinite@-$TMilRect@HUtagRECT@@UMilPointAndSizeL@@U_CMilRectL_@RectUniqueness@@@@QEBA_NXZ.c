/*
 * XREFs of ?IsInfinite@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NXZ @ 0x1800168D4
 * Callers:
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x1800A78B0 (-IsEquivalentTo@-$TMilRect@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@QEBA_NAE.c)
 * Callees:
 *     <none>
 */

bool __fastcall TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::IsInfinite(_DWORD *a1)
{
  return *a1 <= TMilRect<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>::sc_rcInfinite
      && a1[2] >= dword_1803E4F88
      || a1[1] <= dword_1803E4F84 && a1[3] >= dword_1803E4F8C;
}
