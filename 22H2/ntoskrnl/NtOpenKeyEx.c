/*
 * XREFs of NtOpenKeyEx @ 0x1406CE0D0
 * Callers:
 *     <none>
 * Callees:
 *     CmOpenKey @ 0x1406CE0F0 (CmOpenKey.c)
 */

NTSTATUS __cdecl NtOpenKeyEx(
        PHANDLE KeyHandle,
        ACCESS_MASK DesiredAccess,
        POBJECT_ATTRIBUTES ObjectAttributes,
        ULONG OpenOptions)
{
  return CmOpenKey((_DWORD)KeyHandle, DesiredAccess, (_DWORD)ObjectAttributes, OpenOptions, 0LL);
}
