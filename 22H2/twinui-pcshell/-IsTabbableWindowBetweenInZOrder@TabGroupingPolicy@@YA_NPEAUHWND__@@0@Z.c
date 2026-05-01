/*
 * XREFs of ?IsTabbableWindowBetweenInZOrder@TabGroupingPolicy@@YA_NPEAUHWND__@@0@Z @ 0x1802F27F4
 * Callers:
 *     ?ChooseTargetViewUsingHeuristic@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAAXPEAUIApplicationViewCollection@@@Z @ 0x1802F1C98 (-ChooseTargetViewUsingHeuristic@TabGroupPolicyEvaluator@TabGroupingPolicy@@AEAAXPEAUIApplication.c)
 * Callees:
 *     <none>
 */

char __fastcall TabGroupingPolicy::IsTabbableWindowBetweenInZOrder(TabGroupingPolicy *this, HWND a2, HWND a3)
{
  LPARAM lParam[4]; // [rsp+20h] [rbp-20h] BYREF
  TabGroupingPolicy *v5; // [rsp+50h] [rbp+10h] BYREF
  HWND v6; // [rsp+58h] [rbp+18h] BYREF
  char v7; // [rsp+60h] [rbp+20h] BYREF
  char v8; // [rsp+68h] [rbp+28h] BYREF

  v6 = a2;
  v5 = this;
  v7 = 1;
  lParam[0] = (LPARAM)&v8;
  v8 = 0;
  lParam[1] = (LPARAM)&v7;
  lParam[2] = (LPARAM)&v5;
  lParam[3] = (LPARAM)&v6;
  EnumWindows((WNDENUMPROC)lambda_50a8b7ede59db95d328254c88800d39b_::_lambda_invoker_cdecl_, (LPARAM)lParam);
  return v7;
}
