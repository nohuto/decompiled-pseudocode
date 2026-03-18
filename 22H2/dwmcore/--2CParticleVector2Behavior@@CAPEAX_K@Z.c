/*
 * XREFs of ??2CParticleVector2Behavior@@CAPEAX_K@Z @ 0x18019DA3C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18009C6E4 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ?OnNewContact@CManipulationManager@@IEAAJPEAVCInteraction@@IW4InputType@@_N22@Z @ 0x18019EF88 (-OnNewContact@CManipulationManager@@IEAAJPEAVCInteraction@@IW4InputType@@_N22@Z.c)
 *     ?ProcessFrameInputPreTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z @ 0x18019F664 (-ProcessFrameInputPreTargeting@CManipulationManager@@IEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z @ 0x1801A59E8 (-RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z.c)
 *     ??0CSceneWorld@@QEAA@PEAVCComposition@@PEAVCSceneVisual@@@Z @ 0x1802636CC (--0CSceneWorld@@QEAA@PEAVCComposition@@PEAVCSceneVisual@@@Z.c)
 * Callees:
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180038D40 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ModuleFailFastForHRESULT @ 0x18026FE48 (ModuleFailFastForHRESULT.c)
 */

LPVOID __fastcall CParticleVector2Behavior::operator new()
{
  LPVOID result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  result = DefaultHeap::AllocClear(0x90uLL);
  if ( !result )
    ModuleFailFastForHRESULT(2147942414LL, retaddr);
  return result;
}
