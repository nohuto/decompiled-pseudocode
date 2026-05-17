/*
 * XREFs of RtlLargeIntegerToChar @ 0x180001010
 * Callers:
 *     RtlInt64ToUnicodeString @ 0x1800ED9B0 (RtlInt64ToUnicodeString.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C910 (__security_check_cookie.c)
 *     memmove @ 0x1800A4340 (memmove.c)
 *     memset @ 0x1800A4600 (memset.c)
 */

__int64 __fastcall RtlLargeIntegerToChar(unsigned __int64 *a1, unsigned __int64 a2, int a3, char *a4)
{
  int v6; // r9d
  int v7; // r10d
  char *v8; // r14
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rtt
  int v12; // esp
  __int64 v13; // rsi
  bool v14; // cc
  int v16; // r8d
  size_t v17; // rbx
  char v18; // [rsp+61h] [rbp-37h] BYREF

  switch ( (_DWORD)a2 )
  {
    case 0:
      LODWORD(a2) = 10;
      goto LABEL_3;
    case 0xA:
LABEL_3:
      v6 = 0;
      v7 = 0;
      goto LABEL_4;
    case 2:
      v6 = 1;
      break;
    case 8:
      v6 = 3;
      break;
    case 0x10:
      v6 = 4;
      break;
    default:
      return 3221225485LL;
  }
  v7 = (1 << v6) - 1;
LABEL_4:
  v8 = &v18;
  v9 = *a1;
  if ( v6 )
  {
    do
    {
      v16 = v9;
      v9 >>= v6;
      *--v8 = RtlpIntegerChars[v7 & v16];
    }
    while ( v9 );
  }
  else
  {
    v10 = (unsigned int)a2;
    do
    {
      v11 = v9;
      v9 /= v10;
      a2 = v11 % v10;
      *--v8 = RtlpIntegerChars[(unsigned int)(v11 % v10)];
    }
    while ( v9 );
  }
  v13 = (unsigned int)(v12 + 97 - (_DWORD)v8);
  if ( a3 >= 0 )
    goto LABEL_8;
  a3 = -a3;
  v14 = (int)v13 <= a3;
  if ( (int)v13 < a3 )
  {
    v17 = (unsigned int)(a3 - v13);
    LOBYTE(a2) = 48;
    memset(a4, a2, v17);
    a3 = v13;
    a4 += v17;
LABEL_8:
    v14 = (int)v13 <= a3;
  }
  if ( !v14 )
    return 2147483653LL;
  memmove(a4, v8, (unsigned int)v13);
  if ( (int)v13 < a3 )
    a4[v13] = 0;
  return 0LL;
}
