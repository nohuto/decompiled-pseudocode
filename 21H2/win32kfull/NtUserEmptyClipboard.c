/*
 * XREFs of NtUserEmptyClipboard @ 0x1C0151510
 * Callers:
 *     <none>
 * Callees:
 *     xxxEmptyClipboard @ 0x1C00C9B80 (xxxEmptyClipboard.c)
 */

__int64 NtUserEmptyClipboard()
{
  __int64 v0; // rbx
  __int64 v1; // rcx

  EnterCrit(0LL, 0LL);
  v0 = (int)xxxEmptyClipboard(0LL);
  UserSessionSwitchLeaveCrit(v1);
  return v0;
}
