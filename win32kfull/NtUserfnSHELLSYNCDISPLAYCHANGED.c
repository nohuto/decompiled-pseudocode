/*
 * XREFs of NtUserfnSHELLSYNCDISPLAYCHANGED @ 0x1C01E4200
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 */

__int64 __fastcall NtUserfnSHELLSYNCDISPLAYCHANGED(__int64 a1)
{
  PtiCurrentShared(a1);
  UserSetLastError(5);
  return 0LL;
}
