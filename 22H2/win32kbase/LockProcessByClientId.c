/*
 * XREFs of LockProcessByClientId @ 0x1C008A1D0
 * Callers:
 *     ?GetSensorHostingProcessHandle@CBaseInput@@IEBAPEAXXZ @ 0x1C008A13C (-GetSensorHostingProcessHandle@CBaseInput@@IEBAPEAXXZ.c)
 *     GetContainerIdFromProcessId @ 0x1C00CDAD8 (GetContainerIdFromProcessId.c)
 *     NtMITPostWindowEventMessage @ 0x1C012B750 (NtMITPostWindowEventMessage.c)
 *     UserFindBaseWindowHandle @ 0x1C0139564 (UserFindBaseWindowHandle.c)
 * Callees:
 *     LockProcessByClientIdEx @ 0x1C008A47C (LockProcessByClientIdEx.c)
 */

__int64 __fastcall LockProcessByClientId(__int64 a1, PVOID *a2)
{
  __int64 result; // rax
  int v4; // [rsp+40h] [rbp+18h] BYREF

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
