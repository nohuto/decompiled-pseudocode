/*
 * XREFs of ?D3DXVec3TransformCoord@@YAPEAUD2DVector3@@PEAU1@PEBU1@PEBUD2DMatrix@@@Z @ 0x1800C047C
 * Callers:
 *     ?_UpdateAnimated3DResources@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800A8B68 (-_UpdateAnimated3DResources@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     WithinEpsilon @ 0x180005408 (WithinEpsilon.c)
 */

struct D2DVector3 *__fastcall D3DXVec3TransformCoord(
        struct D2DVector3 *a1,
        const struct D2DVector3 *a2,
        const struct D2DMatrix *a3)
{
  float v3; // xmm6_4
  float v4; // xmm5_4
  float v5; // xmm2_4
  float v6; // xmm7_4
  float v7; // xmm6_4
  float *v8; // rcx
  float v9; // xmm5_4

  v3 = *((float *)a2 + 1);
  v4 = (float)((float)((float)(*(float *)a2 * *((float *)a3 + 1)) + (float)(v3 * *((float *)a3 + 5)))
             + (float)(*((float *)a2 + 2) * *((float *)a3 + 9)))
     + *((float *)a3 + 13);
  v5 = (float)((float)((float)(*(float *)a2 * *((float *)a3 + 2)) + (float)(v3 * *((float *)a3 + 6)))
             + (float)(*((float *)a2 + 2) * *((float *)a3 + 10)))
     + *((float *)a3 + 14);
  v6 = (float)((float)((float)(*(float *)a2 * *((float *)a3 + 3)) + (float)(v3 * *((float *)a3 + 7)))
             + (float)(*((float *)a2 + 2) * *((float *)a3 + 11)))
     + *((float *)a3 + 15);
  v7 = (float)((float)((float)(v3 * *((float *)a3 + 4)) + (float)(*(float *)a2 * *(float *)a3))
             + (float)(*((float *)a2 + 2) * *((float *)a3 + 8)))
     + *((float *)a3 + 12);
  *(float *)a1 = v7;
  *((float *)a1 + 1) = v4;
  *((float *)a1 + 2) = v5;
  if ( !WithinEpsilon(v6, 1.0) )
  {
    *v8 = (float)(1.0 / v6) * v7;
    v8[1] = (float)(1.0 / v6) * v9;
    v8[2] = (float)(1.0 / v6) * v5;
  }
  return (struct D2DVector3 *)v8;
}
