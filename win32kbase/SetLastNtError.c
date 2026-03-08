/*
 * XREFs of SetLastNtError @ 0x1C0247ACC
 * Callers:
 *     NtUserSetAdditionalForegroundBoostProcesses @ 0x1C0175DB0 (NtUserSetAdditionalForegroundBoostProcesses.c)
 *     NtUserSystemParametersInfo @ 0x1C01788A0 (NtUserSystemParametersInfo.c)
 * Callees:
 *     UserSetLastError @ 0x1C003E180 (UserSetLastError.c)
 */

struct _NT_TIB *__fastcall SetLastNtError(NTSTATUS a1)
{
  ULONG v1; // eax

  v1 = RtlNtStatusToDosError(a1);
  return UserSetLastError(v1);
}
