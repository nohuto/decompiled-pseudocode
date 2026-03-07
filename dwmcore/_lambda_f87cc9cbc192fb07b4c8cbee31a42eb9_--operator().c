__int64 __fastcall lambda_f87cc9cbc192fb07b4c8cbee31a42eb9_::operator()(__int64 a1, int a2)
{
  __int64 v3; // rbp
  __int64 v4; // rdi
  float CurrentValue; // xmm0_4
  __int64 v6; // rcx
  bool ShouldChainAllForAxis; // bl
  __int64 v8; // rcx
  __int64 v9; // r10
  unsigned int v10; // eax
  char v11; // r11
  __int64 v12; // r9
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx

  v3 = a2;
  v4 = **(_QWORD **)a1;
  CurrentValue = CInteractionTracker::GetCurrentValue(v4, a2);
  ShouldChainAllForAxis = CInteractionTracker::ShouldChainAllForAxis(v6, v3, **(_QWORD **)(a1 + 16));
  CInteractionTracker::ShouldChainForAxis(v8, v3, v9, 1u);
  v10 = CInteractionTracker::BoundaryFromValue(v4, CurrentValue, v3);
  LOBYTE(v12) = v11;
  result = CChainingHelper::RestoreSupportedInteractionsWithBoundaries(
             *(_QWORD *)(a1 + 8),
             (unsigned int)v3,
             v10,
             v12,
             ShouldChainAllForAxis);
  v14 = *(_QWORD *)(a1 + 8);
  v15 = 3 * v3;
  *(_BYTE *)(v14 + 4 * v15) &= 0xFAu;
  *(_DWORD *)(v14 + 4 * v15 + 8) = 0;
  *(_BYTE *)(v14 + 36) |= 2u;
  return result;
}
