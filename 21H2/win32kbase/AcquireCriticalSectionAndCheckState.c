/*
 * XREFs of AcquireCriticalSectionAndCheckState @ 0x1C00B46E0
 * Callers:
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C00B4680 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 * Callees:
 *     UserRemoteConnectedSessionUsingXddm @ 0x1C001D190 (UserRemoteConnectedSessionUsingXddm.c)
 *     UserSessionSwitchLeaveCrit @ 0x1C0036190 (UserSessionSwitchLeaveCrit.c)
 *     UserSessionSwitchEnterCrit @ 0x1C0087230 (UserSessionSwitchEnterCrit.c)
 */

__int64 __fastcall AcquireCriticalSectionAndCheckState(__int64 a1)
{
  __int64 result; // rax
  int v2; // ebx

  result = UserSessionSwitchEnterCrit(a1);
  v2 = result;
  if ( (int)result >= 0 )
  {
    if ( (unsigned int)UserRemoteConnectedSessionUsingXddm() )
      v2 = -1071774240;
    if ( v2 < 0 )
    {
      UserSessionSwitchLeaveCrit();
      return (unsigned int)v2;
    }
    else
    {
      return 0LL;
    }
  }
  return result;
}
