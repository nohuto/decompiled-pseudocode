/*
 * XREFs of NtOpenKey @ 0x1406778D0
 * Callers:
 *     ExpWatchProductTypeInitialization @ 0x140A41034 (ExpWatchProductTypeInitialization.c)
 *     IopProtectSystemPartition @ 0x140A72948 (IopProtectSystemPartition.c)
 * Callees:
 *     CmOpenKey @ 0x1406CE0F0 (CmOpenKey.c)
 */

NTSTATUS __cdecl NtOpenKey(PHANDLE KeyHandle, ACCESS_MASK DesiredAccess, POBJECT_ATTRIBUTES ObjectAttributes)
{
  return CmOpenKey((_DWORD)KeyHandle, DesiredAccess, (_DWORD)ObjectAttributes, 0, 0LL);
}
