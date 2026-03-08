/*
 * XREFs of ?GetClosestInteractionAncestor@CManipulationContext@@SAPEAVCInteraction@@PEBVCVisual@@PEA_N@Z @ 0x1801A0F10
 * Callers:
 *     ?QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x18019CF0C (-QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 *     ?InvalidateMCs@CManipulationContext@@SAXPEAUMCCollections@@PEAVCVisual@@PEAVCInteraction@@W4MidManipulationUpdateType@@PEAI@Z @ 0x1801A1324 (-InvalidateMCs@CManipulationContext@@SAXPEAUMCCollections@@PEAVCVisual@@PEAVCInteraction@@W4MidM.c)
 *     ?RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z @ 0x1801A2A58 (-RevalidateMCTree@CManipulationContext@@AEAAXPEAUMCCollections@@@Z.c)
 *     ?TotalContactsCapturedUnderVisual@CManipulationContext@@SAIPEBUMCCollections@@PEAVCVisual@@PEAPEAVCInteraction@@@Z @ 0x1801A3770 (-TotalContactsCapturedUnderVisual@CManipulationContext@@SAIPEBUMCCollections@@PEAVCVisual@@PEAPE.c)
 * Callees:
 *     ??4?$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z @ 0x180031944 (--4-$ComPtr@VCInteraction@@@WRL@Microsoft@@QEAAAEAV012@PEAVCInteraction@@@Z.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18009A504 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?GetVisualEffectiveParentImpl@CManipulationContext@@CAPEBVCVisual@@PEBV2@PEA_N@Z @ 0x1801A1100 (-GetVisualEffectiveParentImpl@CManipulationContext@@CAPEBVCVisual@@PEBV2@PEA_N@Z.c)
 */

struct CInteraction *__fastcall CManipulationContext::GetClosestInteractionAncestor(const struct CVisual *a1, bool *a2)
{
  struct CInteraction *InteractionInternal; // rax
  CVisual *VisualEffectiveParentImpl; // rax
  const struct CVisual *v4; // rbx
  __int64 v5; // rbx
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0LL;
  while ( 1 )
  {
    VisualEffectiveParentImpl = CManipulationContext::GetVisualEffectiveParentImpl(a1, a2);
    v4 = VisualEffectiveParentImpl;
    if ( !VisualEffectiveParentImpl )
      break;
    InteractionInternal = CVisual::GetInteractionInternal(VisualEffectiveParentImpl);
    if ( *Microsoft::WRL::ComPtr<CInteraction>::operator=(&v7, (__int64)InteractionInternal) )
      break;
    a1 = v4;
  }
  v5 = v7;
  if ( v7 )
  {
    v7 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return (struct CInteraction *)v5;
}
