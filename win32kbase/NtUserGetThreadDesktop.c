/*
 * XREFs of NtUserGetThreadDesktop @ 0x1C00A7EB0
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionGetThreadDesktopEntryPoint @ 0x1C00A7EC8 (ApiSetEditionGetThreadDesktopEntryPoint.c)
 */

__int64 NtUserGetThreadDesktop()
{
  return ApiSetEditionGetThreadDesktopEntryPoint();
}
