/*
 * XREFs of AuthzBasepReplaceSecurityAttribute @ 0x140250214
 * Callers:
 *     AuthzBasepSetSecurityAttributesToken @ 0x1402506CC (AuthzBasepSetSecurityAttributesToken.c)
 * Callees:
 *     AuthzBasepDeleteSecurityAttribute @ 0x14024FC5C (AuthzBasepDeleteSecurityAttribute.c)
 *     AuthzBasepAddSecurityAttribute @ 0x140250284 (AuthzBasepAddSecurityAttribute.c)
 */

__int64 __fastcall AuthzBasepReplaceSecurityAttribute(__int64 a1, __int128 *a2)
{
  __int128 v3; // xmm1
  __int64 v5; // xmm0_8
  __int64 result; // rax
  __int128 v7; // [rsp+20h] [rbp-38h] BYREF
  __int128 v8; // [rsp+30h] [rbp-28h]
  __int64 v9; // [rsp+40h] [rbp-18h]

  v3 = a2[1];
  v7 = *a2;
  v5 = *((_QWORD *)a2 + 4);
  v8 = v3;
  DWORD2(v8) = 0;
  v9 = v5;
  result = AuthzBasepDeleteSecurityAttribute(a1, (__int64)&v7);
  if ( (_DWORD)result == -1073741275 )
    result = 0LL;
  if ( (int)result >= 0 )
  {
    if ( *((_DWORD *)a2 + 6) )
      return AuthzBasepAddSecurityAttribute(a1, a2);
  }
  return result;
}
