/*
 * XREFs of NtUserCloseDesktop @ 0x1C00BE440
 * Callers:
 *     <none>
 * Callees:
 *     ApiSetEditionCloseDesktopEntryPoint @ 0x1C00BE458 (ApiSetEditionCloseDesktopEntryPoint.c)
 */

__int64 NtUserCloseDesktop()
{
  return (int)ApiSetEditionCloseDesktopEntryPoint();
}
