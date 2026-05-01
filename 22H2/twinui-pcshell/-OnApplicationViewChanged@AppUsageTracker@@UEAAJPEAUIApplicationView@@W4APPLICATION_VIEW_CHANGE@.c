/*
 * XREFs of ?OnApplicationViewChanged@AppUsageTracker@@UEAAJPEAUIApplicationView@@W4APPLICATION_VIEW_CHANGE@@PEAUIUnknown@@@Z @ 0x1804C70F0
 * Callers:
 *     <none>
 * Callees:
 *     ?UpdateViewState@AppUsageTracker@@AEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x1804C73C4 (-UpdateViewState@AppUsageTracker@@AEAAXPEAUIApplicationView@@W4ViewState@AppLimits@FamilySafety@.c)
 */

__int64 __fastcall AppUsageTracker::OnApplicationViewChanged(__int64 a1, __int64 a2, int a3)
{
  const char *v3; // r9
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !a3 )
    goto LABEL_7;
  if ( a3 <= 0 )
    return 0LL;
  if ( a3 > 2 )
  {
    if ( a3 != 10 )
    {
      if ( a3 != 11 )
        return 0LL;
      goto LABEL_9;
    }
LABEL_7:
    AppUsageTracker::UpdateViewState(a1 - 8, a2, 0LL);
    return 0LL;
  }
LABEL_9:
  try
  {
    AppUsageTracker::UpdateViewState(a1 - 8, a2, 1LL);
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xEA,
                           (__int64)"pcshell\\twinui\\familyappusagemanager\\lib\\appusagetracker.cpp",
                           v3);
  }
  return 0LL;
}
