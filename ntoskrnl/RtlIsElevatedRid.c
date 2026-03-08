/*
 * XREFs of RtlIsElevatedRid @ 0x140743CF0
 * Callers:
 *     NtQueryInformationToken @ 0x1406D6780 (NtQueryInformationToken.c)
 *     SepRemoveDisabledGroupsAndPrivileges @ 0x14074380C (SepRemoveDisabledGroupsAndPrivileges.c)
 *     SeQueryInformationToken @ 0x1407B9760 (SeQueryInformationToken.c)
 * Callees:
 *     RtlSubAuthorityCountSid @ 0x1402BE730 (RtlSubAuthorityCountSid.c)
 *     RtlSubAuthoritySid @ 0x1402BE740 (RtlSubAuthoritySid.c)
 */

char __fastcall RtlIsElevatedRid(__int64 a1)
{
  PSID v1; // rbx
  int v2; // edi
  PULONG v3; // rax
  int v4; // ecx
  ULONG v5; // edx
  __int64 *i; // rax

  if ( !a1 )
    return 0;
  if ( (*(_DWORD *)(a1 + 8) & 0x30) != 0 )
    return 0;
  v1 = *(PSID *)a1;
  v2 = *RtlSubAuthorityCountSid(*(PSID *)a1);
  if ( !(_BYTE)v2 || *RtlSubAuthoritySid(v1, 0) - 80 <= 0x1F )
    return 0;
  v3 = RtlSubAuthoritySid(v1, v2 - 1);
  v4 = 0;
  v5 = *v3;
  for ( i = qword_140018FF0; v5 != *(_DWORD *)i; i = (__int64 *)((char *)i + 4) )
  {
    if ( (unsigned int)++v4 >= 0x13 )
      return 0;
  }
  return 1;
}
