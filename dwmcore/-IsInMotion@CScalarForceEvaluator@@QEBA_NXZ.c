/*
 * XREFs of ?IsInMotion@CScalarForceEvaluator@@QEBA_NXZ @ 0x1802736C0
 * Callers:
 *     ?CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180238A9C (-CalculateValue@CNaturalAnimation@@AEAAXPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?IsInMotion@CScalarForce@@UEBA_NXZ @ 0x180272930 (-IsInMotion@CScalarForce@@UEBA_NXZ.c)
 *     ?IsInMotion@CExpressionForce@@UEBA_NXZ @ 0x180272AF0 (-IsInMotion@CExpressionForce@@UEBA_NXZ.c)
 *     ?IsInMotion@CNaturalAnimationScalarForceAdapater@@UEBA_NXZ @ 0x180273EF0 (-IsInMotion@CNaturalAnimationScalarForceAdapater@@UEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CScalarForceEvaluator::IsInMotion(CScalarForceEvaluator *this)
{
  return *((float *)this + 14) <= COERCE_FLOAT(*((_DWORD *)this + 3) & _xmm)
      || *((float *)this + 15) <= COERCE_FLOAT(*((_DWORD *)this + 5) & _xmm);
}
