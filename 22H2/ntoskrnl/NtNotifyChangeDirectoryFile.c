/*
 * XREFs of NtNotifyChangeDirectoryFile @ 0x1407CC0C0
 * Callers:
 *     <none>
 * Callees:
 *     NtNotifyChangeDirectoryFileEx @ 0x1407CC120 (NtNotifyChangeDirectoryFileEx.c)
 */

__int64 __fastcall NtNotifyChangeDirectoryFile(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  return NtNotifyChangeDirectoryFileEx(a1, a2, a3, a4, a5, a6);
}
