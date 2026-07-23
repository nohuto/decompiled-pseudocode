/*
 * XREFs of NtSaveKey @ 0x1408697D0
 * Callers:
 *     <none>
 * Callees:
 *     NtSaveKeyEx @ 0x140729810 (NtSaveKeyEx.c)
 */

NTSTATUS __cdecl NtSaveKey(HANDLE KeyHandle, HANDLE FileHandle)
{
  return NtSaveKeyEx(KeyHandle, FileHandle, 1u);
}
