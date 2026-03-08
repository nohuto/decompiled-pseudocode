/*
 * XREFs of AdtpLookupKnownPrivilegeNameQuickly @ 0x14066EC04
 * Callers:
 *     AdtpBuildPrivilegeAuditString @ 0x140A57DA0 (AdtpBuildPrivilegeAuditString.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AdtpLookupKnownPrivilegeNameQuickly(_DWORD *a1, _OWORD *a2)
{
  unsigned int v2; // r8d
  __int64 v3; // rax

  v2 = 0;
  if ( a1[1] )
    return (unsigned int)-1073741728;
  v3 = (unsigned int)(*a1 - 2);
  if ( (unsigned int)v3 > 0x22 )
    return (unsigned int)-1073741728;
  else
    *a2 = *(_OWORD *)((char *)&AdtpKnownPrivilege + 24 * v3);
  return v2;
}
