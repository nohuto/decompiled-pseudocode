/*
 * XREFs of sub_180007E00 @ 0x180007E00
 * Callers:
 *     sub_180006008 @ 0x180006008 (sub_180006008.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 */

void __fastcall sub_180007E00(PACL pAcl)
{
  DWORD v2; // ebx
  LPVOID pAce; // [rsp+20h] [rbp-20h] BYREF
  _DWORD pSid1[4]; // [rsp+28h] [rbp-18h] BYREF

  pSid1[0] = 513;
  pSid1[1] = 251658240;
  v2 = 0;
  pSid1[2] = 3;
  for ( pSid1[3] = 4096; v2 < pAcl->AceCount; ++v2 )
  {
    pAce = 0LL;
    if ( !GetAce(pAcl, v2, &pAce) )
      break;
    if ( EqualSid(pSid1, (char *)pAce + 8) && !*(_BYTE *)pAce )
    {
      *((_BYTE *)pAce + 1) = 2;
      *((_DWORD *)pAce + 1) = 131099;
      return;
    }
  }
}
