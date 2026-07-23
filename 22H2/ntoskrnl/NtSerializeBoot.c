/*
 * XREFs of NtSerializeBoot @ 0x1407D28B0
 * Callers:
 *     <none>
 * Callees:
 *     PnpSerializeBoot @ 0x1403CE390 (PnpSerializeBoot.c)
 *     SeSinglePrivilegeCheck @ 0x140627A60 (SeSinglePrivilegeCheck.c)
 */

NTSTATUS NtSerializeBoot(void)
{
  if ( KeGetCurrentThread()->PreviousMode != 1 )
    return -1073741790;
  if ( SeSinglePrivilegeCheck(SeTcbPrivilege, 1) )
    return PnpSerializeBoot();
  return -1073741727;
}
