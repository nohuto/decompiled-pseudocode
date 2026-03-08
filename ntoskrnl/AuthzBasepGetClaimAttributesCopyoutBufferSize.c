/*
 * XREFs of AuthzBasepGetClaimAttributesCopyoutBufferSize @ 0x140A57774
 * Callers:
 *     AuthzBasepQueryClaimAttributesToken @ 0x14077BBD4 (AuthzBasepQueryClaimAttributesToken.c)
 * Callees:
 *     RtlULongLongMult @ 0x14024789C (RtlULongLongMult.c)
 *     AuthzBasepGetClaimAttributeValueCopyoutBufferSize @ 0x140A57590 (AuthzBasepGetClaimAttributeValueCopyoutBufferSize.c)
 */

NTSTATUS __fastcall AuthzBasepGetClaimAttributesCopyoutBufferSize(unsigned int *a1, unsigned __int64 *a2)
{
  NTSTATUS result; // eax
  unsigned __int64 v5; // r8
  __int64 *v6; // rdi
  __int64 v7; // rbx
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // [rsp+30h] [rbp+8h] BYREF

  v10 = 0LL;
  result = RtlULongLongMult(0x20uLL, *a1, &v10);
  if ( result >= 0 )
  {
    v5 = v10 + 16;
    if ( v10 < 0xFFFFFFFFFFFFFFF0uLL )
    {
      v6 = (__int64 *)(a1 + 2);
      v7 = *v6;
      while ( (__int64 *)v7 != v6 )
      {
        v8 = (v5 + 1) & 0xFFFFFFFFFFFFFFFEuLL;
        if ( v8 < v5 )
          return -1073741675;
        v9 = *(unsigned __int16 *)(v7 + 32) + v8;
        if ( v9 < v8 || v9 + 2 < v9 )
          return -1073741675;
        v10 = v9 + 2;
        result = AuthzBasepGetClaimAttributeValueCopyoutBufferSize(v7, &v10);
        if ( result < 0 )
          return result;
        v7 = *(_QWORD *)v7;
        v5 = v10;
      }
      *a2 = v5;
    }
    else
    {
      return -1073741675;
    }
  }
  return result;
}
