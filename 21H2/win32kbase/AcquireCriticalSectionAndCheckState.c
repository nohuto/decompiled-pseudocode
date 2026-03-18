/*
 * XREFs of AcquireCriticalSectionAndCheckState @ 0x1C006A120
 * Callers:
 *     AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList @ 0x1C006A150 (AcquireCriticalSectionCheckStateAndUpdateGraphicsDeviceList.c)
 * Callees:
 *     UserSessionSwitchLeaveCrit @ 0x1C0029D70 (UserSessionSwitchLeaveCrit.c)
 *     UserRemoteConnectedSessionUsingXddm @ 0x1C006F4B0 (UserRemoteConnectedSessionUsingXddm.c)
 *     UserSessionSwitchEnterCrit @ 0x1C00B8A10 (UserSessionSwitchEnterCrit.c)
 */

__int64 AcquireCriticalSectionAndCheckState()
{
  __int64 result; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9

  result = UserSessionSwitchEnterCrit();
  if ( (int)result >= 0 )
  {
    result = UserRemoteConnectedSessionUsingXddm();
    if ( (_DWORD)result )
    {
      UserSessionSwitchLeaveCrit(v2, v1, v3, v4);
      return 3223193056LL;
    }
  }
  return result;
}
