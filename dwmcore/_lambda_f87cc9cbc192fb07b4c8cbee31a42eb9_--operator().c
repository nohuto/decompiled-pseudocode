/*
 * XREFs of _lambda_f87cc9cbc192fb07b4c8cbee31a42eb9_::operator() @ 0x180272DA0
 * Callers:
 *     ?ReconfigureAllManipulations@InteractionSourceManager@@QEAAXXZ @ 0x180271C7C (-ReconfigureAllManipulations@InteractionSourceManager@@QEAAXXZ.c)
 * Callees:
 *     ?BoundaryFromValue@CInteractionTracker@@QEBA?AW4Boundary@@MW4ScrollAxis@@@Z @ 0x18022DD74 (-BoundaryFromValue@CInteractionTracker@@QEBA-AW4Boundary@@MW4ScrollAxis@@@Z.c)
 *     ?GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18022F17C (-GetCurrentValue@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 *     ?ShouldChainAllForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@@Z @ 0x18023207C (-ShouldChainAllForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@@Z.c)
 *     ?ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z @ 0x18023213C (-ShouldChainForAxis@CInteractionTracker@@QEBA_NW4ScrollAxis@@PEBVCManipulation@@_N@Z.c)
 *     ?RestoreSupportedInteractionsWithBoundaries@CChainingHelper@@QEAAXW4ScrollAxis@@W4Boundary@@_N2@Z @ 0x180272F98 (-RestoreSupportedInteractionsWithBoundaries@CChainingHelper@@QEAAXW4ScrollAxis@@W4Boundary@@_N2@.c)
 */

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
