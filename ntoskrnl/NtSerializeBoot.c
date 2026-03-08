/*
 * XREFs of NtSerializeBoot @ 0x14085DCB0
 * Callers:
 *     <none>
 * Callees:
 *     PnpSerializeBoot @ 0x1403AD6E0 (PnpSerializeBoot.c)
 *     SeSinglePrivilegeCheck @ 0x1407C9A00 (SeSinglePrivilegeCheck.c)
 */

NTSTATUS NtSerializeBoot()
{
  if ( KeGetCurrentThread()->PreviousMode != 1 )
    return -1073741790;
  if ( SeSinglePrivilegeCheck(SeTcbPrivilege, 1) )
    return PnpSerializeBoot();
  return -1073741727;
}
