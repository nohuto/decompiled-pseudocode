/*
 * XREFs of CmpGetBiosDate @ 0x140B9526C
 * Callers:
 *     CmpSetSystemBiosInformation @ 0x140B9565C (CmpSetSystemBiosInformation.c)
 *     CmpSetVideoBiosInformation @ 0x140B959FC (CmpSetVideoBiosInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     strtoul @ 0x1403D32B8 (strtoul.c)
 *     memcmp @ 0x1403D47D0 (memcmp.c)
 */

char __fastcall CmpGetBiosDate(__int64 a1, unsigned int a2, __int64 a3, char a4)
{
  _BYTE *v4; // rdi
  __int64 v6; // rsi
  unsigned __int64 v7; // r15
  char v8; // dl
  char v9; // r8
  char v10; // cl
  unsigned int v11; // r12d
  unsigned int v12; // ebx
  unsigned int v13; // ecx
  char v14; // r8
  char v15; // dl
  char result; // al
  char Str[16]; // [rsp+28h] [rbp-28h] BYREF
  _TBYTE Buf1; // [rsp+38h] [rbp-18h] BYREF
  char v20; // [rsp+42h] [rbp-Eh]

  Buf1 = 0.0;
  v4 = (_BYTE *)(a1 + 2);
  v20 = 0;
  v6 = a3;
  v7 = a2 + a1 - 5;
  if ( a1 + 2 < v7 )
  {
    do
    {
      if ( *v4 == 47
        && v4[3] == 47
        && (unsigned __int8)(*(v4 - 1) - 48) <= 9u
        && (unsigned __int8)(v4[1] - 48) <= 9u
        && (unsigned __int8)(v4[2] - 48) <= 9u )
      {
        v8 = v4[4];
        if ( (unsigned __int8)(v8 - 48) <= 9u )
        {
          v9 = v4[5];
          if ( (unsigned __int8)(v9 - 48) <= 9u )
          {
            *(_DWORD *)&Str[5] = *(_DWORD *)(v4 - 2);
            v10 = Str[5];
            Str[9] = v4[2];
            Str[2] = v8;
            Str[3] = v9;
            Str[10] = 0;
            if ( (unsigned __int8)(Str[5] - 48) > 9u )
              v10 = 48;
            Str[7] = 0;
            Str[5] = v10;
            Str[4] = 0;
            v11 = strtoul(&Str[2], 0LL, 16);
            v12 = strtoul(&Str[5], 0LL, 16);
            v13 = strtoul(&Str[8], 0LL, 16);
            if ( v12 - 1 <= 0x11 && v13 - 1 <= 0x30 )
            {
              if ( a4
                && (v14 = v4[6], (unsigned __int8)(v14 - 48) <= 9u)
                && (v15 = v4[7], (unsigned __int8)(v15 - 48) <= 9u)
                && (*((_WORD *)v4 + 2) == 14641 || *((_WORD *)v4 + 2) == 12338) )
              {
                *(_WORD *)Str = *((_WORD *)v4 + 2);
                Str[2] = v14;
                Str[3] = v15;
              }
              else
              {
                *(_WORD *)Str = 12338;
                if ( v11 >= 0x80 )
                  *(_WORD *)Str = 14641;
              }
              Str[7] = 47;
              Str[4] = 47;
              if ( memcmp(&Buf1, Str, 0xAuLL) < 0 )
                Buf1 = *(_TBYTE *)Str;
              v4 += 2;
            }
          }
        }
      }
      ++v4;
    }
    while ( (unsigned __int64)v4 < v7 );
    v6 = a3;
  }
  if ( LOBYTE(Buf1) )
  {
    result = 1;
    *(_DWORD *)v6 = *(_DWORD *)((char *)&Buf1 + 5);
    *(_BYTE *)(v6 + 4) = HIBYTE(Buf1);
    *(_WORD *)(v6 + 6) = WORD1(Buf1);
    *(_BYTE *)(v6 + 5) = 47;
    *(_BYTE *)(v6 + 8) = 0;
  }
  else
  {
    *(_BYTE *)v6 = 0;
    return 0;
  }
  return result;
}
