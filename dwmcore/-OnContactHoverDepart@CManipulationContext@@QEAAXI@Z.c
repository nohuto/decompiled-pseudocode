/*
 * XREFs of ?OnContactHoverDepart@CManipulationContext@@QEAAXI@Z @ 0x1801A17F8
 * Callers:
 *     ?ProcessFrameInputPostTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x18019BEFC (-ProcessFrameInputPostTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?ProcessFrameInputPreTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x18019C094 (-ProcessFrameInputPreTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?RemoveKey@?$CMap@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@V?$CMapEqualHelper@IV?$ComPtr@VCInteraction@@@WRL@Microsoft@@@@@@QEAAHAEBI@Z @ 0x1801A2164 (-RemoveKey@-$CMap@IV-$ComPtr@VCInteraction@@@WRL@Microsoft@@V-$CMapEqualHelper@IV-$ComPtr@VCInte.c)
 */

void __fastcall CManipulationContext::OnContactHoverDepart(CManipulationContext *this, unsigned int a2)
{
  unsigned int v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  CMap<unsigned int,Microsoft::WRL::ComPtr<CInteraction>,CMapEqualHelper<unsigned int,Microsoft::WRL::ComPtr<CInteraction>>>::RemoveKey(
    (char *)this + 56,
    &v4);
  (*(void (__fastcall **)(CManipulationContext *, _QWORD, _QWORD))(*(_QWORD *)this + 72LL))(this, a2, 0LL);
}
