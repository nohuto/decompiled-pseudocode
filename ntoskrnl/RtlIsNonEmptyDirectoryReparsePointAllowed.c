/*
 * XREFs of RtlIsNonEmptyDirectoryReparsePointAllowed @ 0x1402F6F20
 * Callers:
 *     FsRtlIsNonEmptyDirectoryReparsePointAllowed @ 0x1402F6F00 (FsRtlIsNonEmptyDirectoryReparsePointAllowed.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlIsNonEmptyDirectoryReparsePointAllowed(int a1)
{
  return (a1 & 0x10000000) != 0 || a1 == -2147483624;
}
