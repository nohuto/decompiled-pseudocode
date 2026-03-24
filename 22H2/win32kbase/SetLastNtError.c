/*
 * XREFs of SetLastNtError @ 0x1C00CDE58
 * Callers:
 *     NtUserDisplayConfigGetDeviceInfo @ 0x1C001E9F0 (NtUserDisplayConfigGetDeviceInfo.c)
 *     NtUserLoadKeyboardLayoutEx @ 0x1C01326C0 (NtUserLoadKeyboardLayoutEx.c)
 *     NtUserSystemParametersInfo @ 0x1C0135470 (NtUserSystemParametersInfo.c)
 * Callees:
 *     UserSetLastError @ 0x1C0039D2C (UserSetLastError.c)
 */

struct _NT_TIB *__fastcall SetLastNtError(NTSTATUS a1)
{
  ULONG v1; // eax
  __int64 v2; // rdx

  v1 = RtlNtStatusToDosError(a1);
  return UserSetLastError(v1, v2);
}
