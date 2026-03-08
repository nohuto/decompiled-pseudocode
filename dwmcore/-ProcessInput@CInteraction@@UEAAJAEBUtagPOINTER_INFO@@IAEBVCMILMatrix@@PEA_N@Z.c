/*
 * XREFs of ?ProcessInput@CInteraction@@UEAAJAEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEA_N@Z @ 0x1802092E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessInput@CInteractionProcessor@@QEAAJPEBVCInteraction@@AEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEAUIManipulationResource@@PEA_N@Z @ 0x1801AC330 (-ProcessInput@CInteractionProcessor@@QEAAJPEBVCInteraction@@AEBUtagPOINTER_INFO@@IAEBVCMILMatrix.c)
 */

__int64 __fastcall CInteraction::ProcessInput(
        CInteraction *this,
        const struct tagPOINTER_INFO *a2,
        int a3,
        const struct CMILMatrix *a4,
        bool *a5)
{
  return CInteractionProcessor::ProcessInput(
           (CInteraction *)((char *)this + 288),
           (CInteraction *)((char *)this - 64),
           a2,
           a3,
           a4,
           (struct IManipulationResource *)((*((_QWORD *)this + 26) + 72LL) & -(__int64)(*((_QWORD *)this + 26) != 0LL)),
           a5);
}
