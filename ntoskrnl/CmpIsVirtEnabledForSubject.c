/*
 * XREFs of CmpIsVirtEnabledForSubject @ 0x140768D48
 * Callers:
 *     CmpIsSystemEntity @ 0x140768CB8 (CmpIsSystemEntity.c)
 * Callees:
 *     CmpEffectiveTokenForSubject @ 0x140768D98 (CmpEffectiveTokenForSubject.c)
 *     SeQueryInformationToken @ 0x1407B9760 (SeQueryInformationToken.c)
 */

char __fastcall CmpIsVirtEnabledForSubject(__int64 a1)
{
  void *v1; // rax
  char v2; // bl
  int v4; // [rsp+38h] [rbp+10h] BYREF
  PVOID TokenInformation; // [rsp+40h] [rbp+18h] BYREF

  v4 = 0;
  LODWORD(TokenInformation) = 0;
  v1 = (void *)CmpEffectiveTokenForSubject(a1, &v4);
  v2 = 1;
  if ( v4 != 1 )
    return 0;
  SeQueryInformationToken(v1, TokenVirtualizationEnabled, &TokenInformation);
  if ( !(_DWORD)TokenInformation )
    return 0;
  return v2;
}
