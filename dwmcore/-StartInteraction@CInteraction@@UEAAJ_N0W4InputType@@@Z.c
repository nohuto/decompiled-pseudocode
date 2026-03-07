__int64 __fastcall CInteraction::StartInteraction(__int64 a1, char a2, char a3, int a4)
{
  return CInteractionProcessor::StartInteraction(
           a1 + 288,
           a2,
           a3,
           (*(_QWORD *)(a1 + 208) + 72LL) & -(__int64)(*(_QWORD *)(a1 + 208) != 0LL),
           a4);
}
