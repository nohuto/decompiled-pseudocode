/*
 * XREFs of LockProcessByClientId @ 0x1C009DDA8
 * Callers:
 *     ?GetSensorHostingProcessHandle@CBaseInput@@IEBAPEAXXZ @ 0x1C009D6FC (-GetSensorHostingProcessHandle@CBaseInput@@IEBAPEAXXZ.c)
 *     NtUserSetProcessLaunchForegroundPolicy @ 0x1C009D790 (NtUserSetProcessLaunchForegroundPolicy.c)
 *     ProcessInfoFromPID @ 0x1C009DD54 (ProcessInfoFromPID.c)
 *     ?VirtualizeFullKeyboardStates@Keyboard@IVRootDeliver@@YAXK@Z @ 0x1C01F6448 (-VirtualizeFullKeyboardStates@Keyboard@IVRootDeliver@@YAXK@Z.c)
 * Callees:
 *     LockProcessByClientIdEx @ 0x1C009DDE8 (LockProcessByClientIdEx.c)
 */

__int64 __fastcall LockProcessByClientId(__int64 a1, PVOID *a2)
{
  __int64 result; // rax
  int v4; // [rsp+38h] [rbp+10h] BYREF

  *a2 = 0LL;
  v4 = -1;
  result = LockProcessByClientIdEx(a1, a2, &v4);
  if ( (int)result >= 0 && v4 != gSessionId )
  {
    ObfDereferenceObject(*a2);
    *a2 = 0LL;
    return 3221225473LL;
  }
  return result;
}
