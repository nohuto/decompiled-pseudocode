/*
 * XREFs of ?NotifyVisualPropertyChange@CManipulationManager@@QEAAJPEAVCVisual@@PEBVCMILMatrix@@@Z @ 0x18019EA60
 * Callers:
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18006B570 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?UpdateWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x18008A61C (-UpdateWorldTransform@CVisual@@AEBA_NPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ?NotifyMidManipulationPropertyChange@CVisual@@AEAAXPEBVCMILMatrix@@@Z @ 0x1800FA5E4 (-NotifyMidManipulationPropertyChange@CVisual@@AEAAXPEBVCMILMatrix@@@Z.c)
 * Callees:
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18009A6B4 (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@@@Z @ 0x1801A04DC (-QueueMidManipulationUpdate@CManipulationManager@@IEAAJW4MidManipulationUpdateType@@PEAVCVisual@.c)
 *     McTemplateU0p_EventWriteTransfer @ 0x1801A2944 (McTemplateU0p_EventWriteTransfer.c)
 */

__int64 __fastcall CManipulationManager::NotifyVisualPropertyChange(
        CManipulationManager *this,
        struct CVisual *a2,
        const struct CMILMatrix *a3)
{
  __int64 v3; // rbx
  unsigned int v7; // edi
  __int64 v8; // rcx
  struct CInteraction *InteractionInternal; // rax

  v3 = *((_QWORD *)this + 2);
  v7 = 0;
  if ( GetCurrentThreadId() == *(_DWORD *)(v3 + 680) )
  {
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x4000) != 0 )
      McTemplateU0p_EventWriteTransfer(v8, &MIDMANIPULATION_UPDATE_VISUAL_PROP, a2);
    InteractionInternal = CVisual::GetInteractionInternal(a2);
    if ( InteractionInternal )
    {
      *(_OWORD *)((char *)InteractionInternal + 120) = *(_OWORD *)a3;
      *(_OWORD *)((char *)InteractionInternal + 136) = *((_OWORD *)a3 + 1);
      *(_OWORD *)((char *)InteractionInternal + 152) = *((_OWORD *)a3 + 2);
      *(_OWORD *)((char *)InteractionInternal + 168) = *((_OWORD *)a3 + 3);
      *((_DWORD *)InteractionInternal + 46) = *((_DWORD *)a3 + 16);
    }
  }
  else
  {
    return (unsigned int)CManipulationManager::QueueMidManipulationUpdate(this, 4LL, a2);
  }
  return v7;
}
