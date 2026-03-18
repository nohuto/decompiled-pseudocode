/*
 * XREFs of ?IsInMotion@CScalarForceEvaluator@@QEBA_NXZ @ 0x180276DD0
 * Callers:
 *     ?CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18023C17C (-CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?IsInMotion@CScalarForce@@UEBA_NXZ @ 0x180276040 (-IsInMotion@CScalarForce@@UEBA_NXZ.c)
 *     ?IsInMotion@CExpressionForce@@UEBA_NXZ @ 0x180276200 (-IsInMotion@CExpressionForce@@UEBA_NXZ.c)
 *     ?IsInMotion@CNaturalAnimationScalarForceAdapater@@UEBA_NXZ @ 0x180277610 (-IsInMotion@CNaturalAnimationScalarForceAdapater@@UEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CScalarForceEvaluator::IsInMotion(CScalarForceEvaluator *this)
{
  return *((float *)this + 14) <= COERCE_FLOAT(*((_DWORD *)this + 3) & _xmm)
      || *((float *)this + 15) <= COERCE_FLOAT(*((_DWORD *)this + 5) & _xmm);
}
