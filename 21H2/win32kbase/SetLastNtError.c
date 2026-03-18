/*
 * XREFs of SetLastNtError @ 0x1C009A910
 * Callers:
 *     NtUserSetAdditionalForegroundBoostProcesses @ 0x1C00D8880 (NtUserSetAdditionalForegroundBoostProcesses.c)
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C0157A60 (NtUserDisplayConfigGetDeviceInfo.c)
 *     NtUserFunctionalizeDisplayConfig @ 0x1C0158C20 (NtUserFunctionalizeDisplayConfig.c)
 *     NtUserSystemParametersInfo @ 0x1C0162FF0 (NtUserSystemParametersInfo.c)
 * Callees:
 *     UserSetLastError @ 0x1C003CCC0 (UserSetLastError.c)
 */

struct _NT_TIB *__fastcall SetLastNtError(NTSTATUS a1)
{
  ULONG v1; // eax
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9

  v1 = RtlNtStatusToDosError(a1);
  return UserSetLastError(v1, v2, v3, v4);
}
