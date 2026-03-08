/*
 * XREFs of KiDetectFpuLeakage @ 0x140A842D0
 * Callers:
 *     KiInitializeKernel @ 0x140A89160 (KiInitializeKernel.c)
 * Callees:
 *     <none>
 */

double KiDetectFpuLeakage()
{
  double result; // xmm0_8
  _QWORD v1[65]; // [rsp+0h] [rbp-208h] BYREF

  _fxsave64(v1);
  __asm
  {
    fnclex
    ffree   st(7)
  }
  v1[1] = 0xFFFFFFFFLL;
  _fxrstor64(v1);
  __asm { fnsave  byte ptr [rsp+208h+var_208] }
  return result;
}
