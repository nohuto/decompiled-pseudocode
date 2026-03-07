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
