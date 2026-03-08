/*
 * XREFs of SecureDump_ConvertBinaryToHexString @ 0x14055B510
 * Callers:
 *     SecureDump_LoadCertAndProvisionKey @ 0x14055BD40 (SecureDump_LoadCertAndProvisionKey.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 */

__int64 __fastcall SecureDump_ConvertBinaryToHexString(char *a1, unsigned int a2, __int64 a3, _DWORD *a4)
{
  unsigned __int64 v4; // rax
  __int64 v5; // rsi
  unsigned int i; // r9d
  __int64 v12; // r8
  char v13; // dl
  _DWORD v14[8]; // [rsp+0h] [rbp-30h]

  v4 = (unsigned int)*a4;
  v5 = 2 * a2;
  v14[0] = 3211312;
  v14[1] = 3342386;
  v14[2] = 3473460;
  v14[3] = 3604534;
  v14[4] = 3735608;
  v14[5] = 4325441;
  v14[6] = 4456515;
  v14[7] = 4587589;
  if ( v4 < 2 * (unsigned __int64)(unsigned int)(v5 + 1) )
    return 3221225507LL;
  for ( i = 0; i < a2; *(_WORD *)(a3 + 2LL * (unsigned int)(v12 + 1)) = *((_WORD *)v14 + (v13 & 0xF)) )
  {
    v12 = 2 * i++;
    *(_WORD *)(a3 + 2 * v12) = *((_WORD *)v14 + ((unsigned __int64)(unsigned __int8)*a1 >> 4));
    v13 = *a1++;
  }
  *(_WORD *)(a3 + 2 * v5) = 0;
  *a4 = 4 * a2 + 2;
  return 0LL;
}
