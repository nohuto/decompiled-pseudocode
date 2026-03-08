/*
 * XREFs of AuthzBasepGetInternalSecurityAttributesCopyoutBufferSize @ 0x140771558
 * Callers:
 *     AuthzBasepQueryInternalSecurityAttributesToken @ 0x1407714CC (AuthzBasepQueryInternalSecurityAttributesToken.c)
 * Callees:
 *     AuthzBasepGetInternalSecurityAttributeValueCopyoutBufferSize @ 0x1402E7594 (AuthzBasepGetInternalSecurityAttributeValueCopyoutBufferSize.c)
 */

__int64 __fastcall AuthzBasepGetInternalSecurityAttributesCopyoutBufferSize(unsigned int *a1, unsigned int *a2)
{
  unsigned __int64 v4; // rcx
  unsigned int v5; // ecx
  unsigned int *v6; // rsi
  __int64 result; // rax
  __int64 v8; // rbx
  unsigned int v9; // edx
  unsigned int v10; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  v4 = 112LL * *a1;
  if ( v4 > 0xFFFFFFFF )
    return 3221225621LL;
  v5 = v4 + 48;
  if ( v5 < 0x30 )
    return 3221225621LL;
  v6 = a1 + 2;
  result = 0LL;
  v8 = *((_QWORD *)a1 + 1);
  while ( (unsigned int *)v8 != v6 )
  {
    v9 = (v5 + 1) & 0xFFFFFFFE;
    if ( v9 < v5 || v9 + *(unsigned __int16 *)(v8 + 32) < v9 )
      return 3221225621LL;
    v10 = v9 + *(unsigned __int16 *)(v8 + 32);
    result = AuthzBasepGetInternalSecurityAttributeValueCopyoutBufferSize(v8, &v10);
    if ( (int)result < 0 )
      return result;
    v8 = *(_QWORD *)v8;
    v5 = v10;
  }
  *a2 = v5;
  return result;
}
