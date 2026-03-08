/*
 * XREFs of ??4?$ComPtr@UIInteractionResource@@@WRL@Microsoft@@QEAAAEAV012@PEAUIInteractionResource@@@Z @ 0x18019A4A4
 * Callers:
 *     ?CheckForBufferedDescendant@CManipulationManager@@IEBA_NPEAVCManipulationFrame@@K@Z @ 0x18019A904 (-CheckForBufferedDescendant@CManipulationManager@@IEBA_NPEAVCManipulationFrame@@K@Z.c)
 *     ?ProcessInteractions@CGestureTargetingManager@@SAXPEAUIManipulationContext@@W4InputType@@@Z @ 0x1801A5288 (-ProcessInteractions@CGestureTargetingManager@@SAXPEAUIManipulationContext@@W4InputType@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800F1F6C (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ @ 0x1800F2FE0 (-InternalRelease@-$ComPtr@VCRenderingEffect@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 (__fastcall ****__fastcall Microsoft::WRL::ComPtr<IInteractionResource>::operator=(
        __int64 (__fastcall ****a1)(_QWORD),
        __int64 (__fastcall ***a2)(_QWORD)))(_QWORD)
{
  __int64 (__fastcall ***v5)(_QWORD); // [rsp+30h] [rbp+8h] BYREF

  if ( *a1 != a2 )
  {
    v5 = a2;
    Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(&v5);
    v5 = *a1;
    *a1 = a2;
    Microsoft::WRL::ComPtr<CRenderingEffect>::InternalRelease((__int64 *)&v5);
  }
  return a1;
}
