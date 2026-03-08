/*
 * XREFs of ?ProcessInput@CInteractionRoot@@UEAAJAEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEA_N@Z @ 0x180129750
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessInput@CInteractionProcessor@@QEAAJPEBVCInteraction@@AEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEAUIManipulationResource@@PEA_N@Z @ 0x1801AC330 (-ProcessInput@CInteractionProcessor@@QEAAJPEBVCInteraction@@AEBUtagPOINTER_INFO@@IAEBVCMILMatrix.c)
 */

__int64 __fastcall CInteractionRoot::ProcessInput(
        CInteractionRoot *this,
        const struct tagPOINTER_INFO *a2,
        unsigned int a3,
        const struct CMILMatrix *a4,
        bool *a5)
{
  return CInteractionProcessor::ProcessInput((CInteractionRoot *)((char *)this + 24), 0LL, a2, a3, a4, 0LL, a5);
}
