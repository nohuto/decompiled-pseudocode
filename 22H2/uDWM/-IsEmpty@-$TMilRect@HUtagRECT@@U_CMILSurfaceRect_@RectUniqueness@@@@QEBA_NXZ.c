/*
 * XREFs of ?IsEmpty@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NXZ @ 0x1800418F4
 * Callers:
 *     ?ComputeDisplayBounds@CDWMDisplaySet@@AEAAXXZ @ 0x1800379A8 (-ComputeDisplayBounds@CDWMDisplaySet@@AEAAXXZ.c)
 *     ?IsEquivalentTo@?$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180080354 (-IsEquivalentTo@-$TMilRect@HUtagRECT@@U_CMILSurfaceRect_@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall TMilRect<int,tagRECT,RectUniqueness::_CMILSurfaceRect_>::IsEmpty(_DWORD *a1)
{
  return a1[2] <= *a1 || a1[3] <= a1[1];
}
