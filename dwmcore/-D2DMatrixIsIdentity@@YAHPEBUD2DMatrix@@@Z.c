/*
 * XREFs of ?D2DMatrixIsIdentity@@YAHPEBUD2DMatrix@@@Z @ 0x18027A07C
 * Callers:
 *     ?ConvertGlobalMotionToLocalMotion@CInteractionProcessor@@AEAA?AUD2DVector3@@AEBUInteractionMotion@@AEBUD2DMatrix@@PEAU4@2@Z @ 0x1801AAAFC (-ConvertGlobalMotionToLocalMotion@CInteractionProcessor@@AEAA-AUD2DVector3@@AEBUInteractionMotio.c)
 *     _anonymous_namespace_::TransformAndNormalize @ 0x1801AD514 (_anonymous_namespace_--TransformAndNormalize.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall D2DMatrixIsIdentity(const struct D2DMatrix *a1)
{
  return *(float *)a1 == 1.0
      && *((float *)a1 + 1) == 0.0
      && *((float *)a1 + 2) == 0.0
      && *((float *)a1 + 3) == 0.0
      && *((float *)a1 + 4) == 0.0
      && *((float *)a1 + 5) == 1.0
      && *((float *)a1 + 6) == 0.0
      && *((float *)a1 + 7) == 0.0
      && *((float *)a1 + 8) == 0.0
      && *((float *)a1 + 9) == 0.0
      && *((float *)a1 + 10) == 1.0
      && *((float *)a1 + 11) == 0.0
      && *((float *)a1 + 12) == 0.0
      && *((float *)a1 + 13) == 0.0
      && *((float *)a1 + 14) == 0.0
      && *((float *)a1 + 15) == 1.0;
}
