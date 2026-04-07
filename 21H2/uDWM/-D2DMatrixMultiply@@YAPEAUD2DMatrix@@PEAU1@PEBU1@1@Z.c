/*
 * XREFs of ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x18001FDF0
 * Callers:
 *     ?GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z @ 0x180005AF4 (-GetCurrentTransform@CVisual@@AEAA_NPEAUD2DMatrix@@@Z.c)
 *     ?D2DMatrixTransformation2D@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector2@@M11M1@Z @ 0x180005C50 (-D2DMatrixTransformation2D@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector2@@M11M1@Z.c)
 *     ?GetLocalToParentVisualTransform@CVisual@@QEAAXPEAV1@PEAUD2DMatrix@@@Z @ 0x180009CAC (-GetLocalToParentVisualTransform@CVisual@@QEAAXPEAV1@PEAUD2DMatrix@@@Z.c)
 *     ?UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ @ 0x18001D6E0 (-UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ.c)
 *     ?UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180020AE0 (-UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ.c)
 *     ?_UpdateAnimated3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A8B68 (-_UpdateAnimated3DResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     __security_check_cookie @ 0x180053A20 (__security_check_cookie.c)
 */

struct D2DMatrix *__fastcall D2DMatrixMultiply(
        struct D2DMatrix *a1,
        const struct D2DMatrix *a2,
        const struct D2DMatrix *a3)
{
  struct D2DMatrix *v3; // rax
  char v5; // [rsp+0h] [rbp-58h] BYREF

  if ( a1 == a2 || (v3 = a1, a1 == a3) )
    v3 = (struct D2DMatrix *)&v5;
  *(float *)v3 = (float)((float)((float)(*(float *)a2 * *(float *)a3) + (float)(*((float *)a3 + 4) * *((float *)a2 + 1)))
                       + (float)(*((float *)a3 + 8) * *((float *)a2 + 2)))
               + (float)(*((float *)a3 + 12) * *((float *)a2 + 3));
  *((float *)v3 + 1) = (float)((float)((float)(*((float *)a2 + 1) * *((float *)a3 + 5))
                                     + (float)(*(float *)a2 * *((float *)a3 + 1)))
                             + (float)(*((float *)a3 + 9) * *((float *)a2 + 2)))
                     + (float)(*((float *)a3 + 13) * *((float *)a2 + 3));
  *((float *)v3 + 2) = (float)((float)((float)(*(float *)a2 * *((float *)a3 + 2))
                                     + (float)(*((float *)a2 + 1) * *((float *)a3 + 6)))
                             + (float)(*((float *)a3 + 10) * *((float *)a2 + 2)))
                     + (float)(*((float *)a3 + 14) * *((float *)a2 + 3));
  *((float *)v3 + 3) = (float)((float)((float)(*((float *)a3 + 7) * *((float *)a2 + 1))
                                     + (float)(*((float *)a3 + 3) * *(float *)a2))
                             + (float)(*((float *)a3 + 11) * *((float *)a2 + 2)))
                     + (float)(*((float *)a3 + 15) * *((float *)a2 + 3));
  *((float *)v3 + 4) = (float)((float)((float)(*((float *)a2 + 5) * *((float *)a3 + 4))
                                     + (float)(*((float *)a2 + 4) * *(float *)a3))
                             + (float)(*((float *)a3 + 8) * *((float *)a2 + 6)))
                     + (float)(*((float *)a3 + 12) * *((float *)a2 + 7));
  *((float *)v3 + 5) = (float)((float)((float)(*((float *)a2 + 5) * *((float *)a3 + 5))
                                     + (float)(*((float *)a2 + 4) * *((float *)a3 + 1)))
                             + (float)(*((float *)a3 + 9) * *((float *)a2 + 6)))
                     + (float)(*((float *)a3 + 13) * *((float *)a2 + 7));
  *((float *)v3 + 6) = (float)((float)((float)(*((float *)a2 + 5) * *((float *)a3 + 6))
                                     + (float)(*((float *)a2 + 4) * *((float *)a3 + 2)))
                             + (float)(*((float *)a3 + 10) * *((float *)a2 + 6)))
                     + (float)(*((float *)a3 + 14) * *((float *)a2 + 7));
  *((float *)v3 + 7) = (float)((float)((float)(*((float *)a2 + 5) * *((float *)a3 + 7))
                                     + (float)(*((float *)a2 + 4) * *((float *)a3 + 3)))
                             + (float)(*((float *)a3 + 11) * *((float *)a2 + 6)))
                     + (float)(*((float *)a2 + 7) * *((float *)a3 + 15));
  *((float *)v3 + 8) = (float)((float)((float)(*((float *)a2 + 9) * *((float *)a3 + 4))
                                     + (float)(*((float *)a2 + 8) * *(float *)a3))
                             + (float)(*((float *)a3 + 8) * *((float *)a2 + 10)))
                     + (float)(*((float *)a3 + 12) * *((float *)a2 + 11));
  *((float *)v3 + 9) = (float)((float)((float)(*((float *)a2 + 9) * *((float *)a3 + 5))
                                     + (float)(*((float *)a2 + 8) * *((float *)a3 + 1)))
                             + (float)(*((float *)a3 + 9) * *((float *)a2 + 10)))
                     + (float)(*((float *)a3 + 13) * *((float *)a2 + 11));
  *((float *)v3 + 10) = (float)((float)((float)(*((float *)a2 + 9) * *((float *)a3 + 6))
                                      + (float)(*((float *)a2 + 8) * *((float *)a3 + 2)))
                              + (float)(*((float *)a3 + 10) * *((float *)a2 + 10)))
                      + (float)(*((float *)a3 + 14) * *((float *)a2 + 11));
  *((float *)v3 + 11) = (float)((float)((float)(*((float *)a2 + 9) * *((float *)a3 + 7))
                                      + (float)(*((float *)a2 + 8) * *((float *)a3 + 3)))
                              + (float)(*((float *)a3 + 11) * *((float *)a2 + 10)))
                      + (float)(*((float *)a2 + 11) * *((float *)a3 + 15));
  *((float *)v3 + 12) = (float)((float)((float)(*((float *)a2 + 13) * *((float *)a3 + 4))
                                      + (float)(*((float *)a2 + 12) * *(float *)a3))
                              + (float)(*((float *)a3 + 8) * *((float *)a2 + 14)))
                      + (float)(*((float *)a3 + 12) * *((float *)a2 + 15));
  *((float *)v3 + 13) = (float)((float)((float)(*((float *)a2 + 13) * *((float *)a3 + 5))
                                      + (float)(*((float *)a2 + 12) * *((float *)a3 + 1)))
                              + (float)(*((float *)a3 + 9) * *((float *)a2 + 14)))
                      + (float)(*((float *)a3 + 13) * *((float *)a2 + 15));
  *((float *)v3 + 14) = (float)((float)((float)(*((float *)a2 + 13) * *((float *)a3 + 6))
                                      + (float)(*((float *)a2 + 12) * *((float *)a3 + 2)))
                              + (float)(*((float *)a3 + 10) * *((float *)a2 + 14)))
                      + (float)(*((float *)a3 + 14) * *((float *)a2 + 15));
  *((float *)v3 + 15) = (float)((float)((float)(*((float *)a2 + 13) * *((float *)a3 + 7))
                                      + (float)(*((float *)a2 + 12) * *((float *)a3 + 3)))
                              + (float)(*((float *)a3 + 11) * *((float *)a2 + 14)))
                      + (float)(*((float *)a2 + 15) * *((float *)a3 + 15));
  if ( v3 != a1 )
  {
    *(_OWORD *)a1 = *(_OWORD *)v3;
    *((_OWORD *)a1 + 1) = *((_OWORD *)v3 + 1);
    *((_OWORD *)a1 + 2) = *((_OWORD *)v3 + 2);
    *((_OWORD *)a1 + 3) = *((_OWORD *)v3 + 3);
  }
  return a1;
}
