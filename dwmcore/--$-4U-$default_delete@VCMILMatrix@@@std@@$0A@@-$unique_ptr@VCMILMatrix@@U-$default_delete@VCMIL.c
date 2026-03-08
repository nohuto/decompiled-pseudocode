/*
 * XREFs of ??$?4U?$default_delete@VCMILMatrix@@@std@@$0A@@?$unique_ptr@VCMILMatrix@@U?$default_delete@VCMILMatrix@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180022308
 * Callers:
 *     ?TransformToDifferentScope@CCpuClippingData@@QEBA_NPEAV1@AEBVCMILMatrix@@1@Z @ 0x180022224 (-TransformToDifferentScope@CCpuClippingData@@QEBA_NPEAV1@AEBVCMILMatrix@@1@Z.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18010E978 (--3@YAXPEAX_K@Z.c)
 */

void **__fastcall std::unique_ptr<CMILMatrix>::operator=<std::default_delete<CMILMatrix>,0>(void **a1, void **a2)
{
  void *v3; // rax
  void *v4; // rcx

  if ( a1 != a2 )
  {
    v3 = *a2;
    *a2 = 0LL;
    v4 = *a1;
    *a1 = v3;
    if ( v4 )
      operator delete(v4, 0x44uLL);
  }
  return a1;
}
