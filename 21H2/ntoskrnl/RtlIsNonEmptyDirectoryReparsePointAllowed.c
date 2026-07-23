/*
 * XREFs of RtlIsNonEmptyDirectoryReparsePointAllowed @ 0x1402477E0
 * Callers:
 *     FsRtlIsNonEmptyDirectoryReparsePointAllowed @ 0x1402477C0 (FsRtlIsNonEmptyDirectoryReparsePointAllowed.c)
 * Callees:
 *     <none>
 */

BOOLEAN __cdecl RtlIsNonEmptyDirectoryReparsePointAllowed(ULONG ReparseTag)
{
  return (ReparseTag & 0x10000000) != 0 || ReparseTag == -2147483624;
}
