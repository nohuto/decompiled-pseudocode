/*
 * XREFs of ?InsertDependenciesForAxis@CInteractionTracker@@QEAAXAEBUExpressionWalkContext@@W4ScrollAxis@@@Z @ 0x18022F92C
 * Callers:
 *     ?InsertDependenciesInOrder@CInteractionTrackerScaleAnimation@@MEAAXAEBUExpressionWalkContext@@@Z @ 0x1802636C0 (-InsertDependenciesInOrder@CInteractionTrackerScaleAnimation@@MEAAXAEBUExpressionWalkContext@@@Z.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x180117830 (_guard_xfg_dispatch_icall_nop.c)
 *     ?HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ @ 0x18012E95E (-HasActiveManipulation@InteractionSourceManager@@QEBA_NXZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180195018 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?InsertDependenciesForProperty@CInteractionTracker@@QEAAXAEBUExpressionWalkContext@@W4Enum@InteractionTrackerProperty@@@Z @ 0x18022FA20 (-InsertDependenciesForProperty@CInteractionTracker@@QEAAXAEBUExpressionWalkContext@@W4Enum@Inter.c)
 *     ?InsertDependenciesForAxis@InteractionSourceManager@@QEAAXAEBUExpressionWalkContext@@W4ScrollAxis@@@Z @ 0x180271288 (-InsertDependenciesForAxis@InteractionSourceManager@@QEAAXAEBUExpressionWalkContext@@W4ScrollAxi.c)
 */

char __fastcall CInteractionTracker::InsertDependenciesForAxis(__int64 a1, __int64 a2, int a3, const char *a4)
{
  __int64 v4; // rbx
  __int64 v7; // rcx
  unsigned int v8; // edi
  __int64 v9; // rcx
  char result; // al
  __int64 v11; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v4 = a3;
  v7 = *(_QWORD *)(a1 + 8LL * a3 + 384);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 200LL))(v7);
  v8 = 1;
  if ( (unsigned int)v4 <= 1 )
  {
    v9 = *(_QWORD *)(a1 + 8 * v4 + 368);
    if ( v9 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 200LL))(v9, a2);
  }
  if ( (unsigned int)v4 >= 2 )
  {
    if ( (_DWORD)v4 != 2 )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        5577LL,
        (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\interactiontracker.cpp",
        a4);
    v8 = 2;
  }
  CInteractionTracker::InsertDependenciesForProperty(a1, a2, v8);
  result = InteractionSourceManager::HasActiveManipulation((InteractionSourceManager *)(a1 + 200));
  if ( result )
    return InteractionSourceManager::InsertDependenciesForAxis(v11, a2, (unsigned int)v4);
  return result;
}
