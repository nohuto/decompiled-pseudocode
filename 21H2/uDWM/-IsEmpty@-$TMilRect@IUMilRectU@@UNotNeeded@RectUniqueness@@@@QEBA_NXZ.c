/*
 * XREFs of ?IsEmpty@?$TMilRect@IUMilRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x1800C10AC
 * Callers:
 *     ?AddDirtyRect@CBitmap@@UEAAJPEBUtagRECT@@@Z @ 0x1800C0780 (-AddDirtyRect@CBitmap@@UEAAJPEBUtagRECT@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall TMilRect<unsigned int,MilRectU,RectUniqueness::NotNeeded>::IsEmpty(_DWORD *a1)
{
  return a1[2] <= *a1 || a1[3] <= a1[1];
}
