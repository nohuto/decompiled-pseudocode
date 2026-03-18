/*
 * XREFs of _W32ExceptionHandler @ 0x1C025A1E4
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0043E80 (xxxCreateWindowEx.c)
 *     NtUserGetWindowCompositionAttribute @ 0x1C004D030 (NtUserGetWindowCompositionAttribute.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 */

__int64 __fastcall W32ExceptionHandler(NTSTATUS a1)
{
  ULONG v1; // eax
  __int64 v2; // rdx

  v1 = RtlNtStatusToDosError(a1);
  UserSetLastError(v1, v2);
  return 1LL;
}
