/*
 * XREFs of ?ProcessInput@CInteraction@@UEAAJAEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEA_N@Z @ 0x1801C6610
 * Callers:
 *     <none>
 * Callees:
 *     ?ProcessInput@CInteractionProcessor@@QEAAJPEBVCInteraction@@AEBUtagPOINTER_INFO@@IAEBVCMILMatrix@@PEAUIManipulationResource@@PEA_N@Z @ 0x18022E094 (-ProcessInput@CInteractionProcessor@@QEAAJPEBVCInteraction@@AEBUtagPOINTER_INFO@@IAEBVCMILMatrix.c)
 */

__int64 __fastcall CInteraction::ProcessInput(
        CInteraction *this,
        const struct tagPOINTER_INFO *a2,
        unsigned int a3,
        const struct CMILMatrix *a4,
        bool *a5)
{
  return CInteractionProcessor::ProcessInput(
           (CInteraction *)((char *)this + 344),
           this,
           a2,
           a3,
           a4,
           (struct IManipulationResource *)((*((_QWORD *)this + 33) + 64LL) & -(__int64)(*((_QWORD *)this + 33) != 0LL)),
           a5);
}
