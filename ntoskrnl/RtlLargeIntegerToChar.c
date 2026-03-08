/*
 * XREFs of RtlLargeIntegerToChar @ 0x14071C7C0
 * Callers:
 *     RtlInt64ToUnicodeString @ 0x14071C710 (RtlInt64ToUnicodeString.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 */

__int64 __fastcall RtlLargeIntegerToChar(unsigned __int64 *a1, unsigned __int64 a2, int a3, char *a4)
{
  int v6; // r9d
  int v7; // r10d
  char *v8; // r14
  unsigned __int64 v9; // r8
  unsigned int v10; // eax
  int v11; // esp
  __int64 v12; // rsi
  bool v13; // cc
  unsigned __int64 v15; // r9
  size_t v16; // rbx
  char v17; // [rsp+61h] [rbp-37h] BYREF

  if ( (_DWORD)a2 )
  {
    if ( (_DWORD)a2 == 16 )
    {
      v6 = 4;
LABEL_4:
      v7 = (1 << v6) - 1;
      goto LABEL_5;
    }
    if ( (_DWORD)a2 != 10 )
    {
      if ( (_DWORD)a2 == 2 )
      {
        v6 = 1;
      }
      else
      {
        if ( (_DWORD)a2 != 8 )
          return 3221225485LL;
        v6 = 3;
      }
      goto LABEL_4;
    }
  }
  else
  {
    LODWORD(a2) = 10;
  }
  v6 = 0;
  v7 = 0;
LABEL_5:
  v8 = &v17;
  v9 = *a1;
  if ( v6 )
  {
    do
    {
      v10 = v9;
      v9 >>= v6;
      *--v8 = *((_BYTE *)RtlpIntegerChars + (v7 & v10));
    }
    while ( v9 );
  }
  else
  {
    v15 = (unsigned int)a2;
    do
    {
      a2 = v9 % v15;
      v9 /= v15;
      *--v8 = *((_BYTE *)RtlpIntegerChars + (unsigned int)a2);
    }
    while ( v9 );
  }
  v12 = (unsigned int)(v11 + 97 - (_DWORD)v8);
  if ( a3 >= 0 )
    goto LABEL_8;
  a3 = -a3;
  v13 = (int)v12 <= a3;
  if ( (int)v12 < a3 )
  {
    v16 = (unsigned int)(a3 - v12);
    LOBYTE(a2) = 48;
    memset(a4, a2, v16);
    a3 = v12;
    a4 += v16;
LABEL_8:
    v13 = (int)v12 <= a3;
  }
  if ( !v13 )
    return 2147483653LL;
  memmove(a4, v8, (unsigned int)v12);
  if ( (int)v12 < a3 )
    a4[v12] = 0;
  return 0LL;
}
