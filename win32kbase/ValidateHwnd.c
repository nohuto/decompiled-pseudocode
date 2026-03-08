/*
 * XREFs of ValidateHwnd @ 0x1C003E2F0
 * Callers:
 *     NtUserSetAdditionalForegroundBoostProcesses @ 0x1C0175DB0 (NtUserSetAdditionalForegroundBoostProcesses.c)
 * Callees:
 *     ValidateHwndEx @ 0x1C003E310 (ValidateHwndEx.c)
 */

__int64 __fastcall ValidateHwnd(__int64 a1)
{
  return ValidateHwndEx(a1, 1LL);
}
