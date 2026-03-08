/*
 * XREFs of IoCheckDesiredAccess @ 0x140943EE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall IoCheckDesiredAccess(PACCESS_MASK DesiredAccess, ACCESS_MASK GrantedAccess)
{
  ACCESS_MASK v2; // eax
  ACCESS_MASK v3; // eax

  v2 = *DesiredAccess;
  if ( (*DesiredAccess & 0x80000000) != 0 )
    v2 |= *((_DWORD *)IoFileObjectType + 19);
  if ( (v2 & 0x40000000) != 0 )
    v2 |= *((_DWORD *)IoFileObjectType + 20);
  if ( (v2 & 0x20000000) != 0 )
    v2 |= *((_DWORD *)IoFileObjectType + 21);
  if ( (v2 & 0x10000000) != 0 )
    v2 |= *((_DWORD *)IoFileObjectType + 22);
  v3 = v2 & 0xFFFFFFF;
  *DesiredAccess = v3;
  return (v3 & ~GrantedAccess) != 0 ? 0xC0000022 : 0;
}
