/*
 * XREFs of AuthzBasepDeleteAllSecurityAttributes @ 0x14066C554
 * Callers:
 *     AuthzBasepSetSecurityAttributesToken @ 0x14029705C (AuthzBasepSetSecurityAttributesToken.c)
 * Callees:
 *     AuthzBasepAddSecurityAttributeToLists @ 0x140297DC8 (AuthzBasepAddSecurityAttributeToLists.c)
 *     AuthzBasepDeleteAllSecurityAttributeValues @ 0x14066C504 (AuthzBasepDeleteAllSecurityAttributeValues.c)
 */

__int64 __fastcall AuthzBasepDeleteAllSecurityAttributes(__int64 a1)
{
  __int64 v1; // rdi
  __int64 i; // rbx
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 result; // rax

  v1 = a1 + 8;
  for ( i = *(_QWORD *)(a1 + 8); i != v1; i = *(_QWORD *)i )
  {
    *(_DWORD *)(i + 56) |= 4u;
    AuthzBasepAddSecurityAttributeToLists(a1, i, 0, 1);
    result = AuthzBasepDeleteAllSecurityAttributeValues(i, v4, v5, v6);
  }
  return result;
}
