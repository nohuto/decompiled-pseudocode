/*
 * XREFs of ?GetMinAcceleration@ForceThreshold@@QEBAMXZ @ 0x180274338
 * Callers:
 *     ?Reset@CScalarForceEvaluator@@QEAAXMMPEAUIAccelerator@@AEBVForceThreshold@@@Z @ 0x180273700 (-Reset@CScalarForceEvaluator@@QEAAXMMPEAUIAccelerator@@AEBVForceThreshold@@@Z.c)
 * Callees:
 *     ModuleFailFastForHRESULT @ 0x18026C718 (ModuleFailFastForHRESULT.c)
 */

float __fastcall ForceThreshold::GetMinAcceleration(ForceThreshold *this)
{
  float result; // xmm0_4
  float v2; // xmm1_4
  const void *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*(_DWORD *)this )
    return FLOAT_10_0;
  if ( *(_DWORD *)this == 1 )
    return FLOAT_0_1;
  if ( *(_DWORD *)this != 2 )
    ModuleFailFastForHRESULT(-2147467259, retaddr);
  result = FLOAT_0_0099999998;
  v2 = COERCE_FLOAT(COERCE_UNSIGNED_INT(*((float *)this + 2) + *((float *)this + 1)) & _xmm) * 0.00079999998;
  if ( v2 >= 0.0099999998 )
    return fminf(10.0, v2);
  return result;
}
