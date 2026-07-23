/*
 * XREFs of ZwPrivilegeCheck @ 0x1403FCC80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwPrivilegeCheck(HANDLE ClientToken, PPRIVILEGE_SET RequiredPrivileges, PBOOLEAN Result)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ClientToken);
}
