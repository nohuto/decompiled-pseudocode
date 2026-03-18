/*
 * XREFs of ??B?$ComPtrRef@V?$ComPtr@UIScalarForce@@@WRL@Microsoft@@@Details@WRL@Microsoft@@QEAAPEAPEAUIScalarForce@@XZ @ 0x180230B88
 * Callers:
 *     ?SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@@_KPEAPEAUIScalarForce@@@Z @ 0x1802343A4 (-SelectInertiaModifierForAxis@CInteractionTracker@@QEAAJW4ScrollAxis@@PEAVCExpressionValueStack@.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F3C10 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::ComPtrRef<Microsoft::WRL::ComPtr<IScalarForce>>::operator IScalarForce * *(
        __int64 **a1)
{
  __int64 *v1; // rbx

  v1 = *a1;
  Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease(*a1);
  return v1;
}
