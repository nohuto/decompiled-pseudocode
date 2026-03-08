/*
 * XREFs of NtUserCreateDesktopEx @ 0x1C00C1DB0
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionCreateDesktopEntryPoint @ 0x1C00C1DD8 (ApiSetEditionCreateDesktopEntryPoint.c)
 */

__int64 __fastcall NtUserCreateDesktopEx(int a1, int a2, int a3, int a4, int a5, int a6)
{
  return ApiSetEditionCreateDesktopEntryPoint(a1, a2, a3, a4, a5, a6);
}
