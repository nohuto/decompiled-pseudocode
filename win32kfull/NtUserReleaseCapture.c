/*
 * XREFs of NtUserReleaseCapture @ 0x1C01DAAB0
 * Callers:
 *     <none>
 * Callees:
 *     xxxReleaseCapture @ 0x1C00108E8 (xxxReleaseCapture.c)
 */

__int64 NtUserReleaseCapture()
{
  __int64 v0; // rbx
  __int64 v1; // rcx

  EnterCrit(0LL, 0LL);
  v0 = (int)xxxReleaseCapture();
  UserSessionSwitchLeaveCrit(v1);
  return v0;
}
