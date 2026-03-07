__int64 __fastcall RtlIntegerToChar(unsigned int a1, unsigned int a2, int a3, char *a4)
{
  unsigned int v6; // r8d
  int v8; // ecx
  int v9; // r9d
  char *v10; // r14
  unsigned int v11; // r11d
  __int64 *v12; // rdx
  int v13; // esp
  __int64 v14; // rsi
  bool v15; // cc
  size_t v17; // rbx
  char v18; // [rsp+41h] [rbp-27h] BYREF

  v6 = a2;
  switch ( a2 )
  {
    case 0u:
      v6 = 10;
      goto LABEL_3;
    case 0xAu:
LABEL_3:
      v8 = 0;
      v9 = 0;
      goto LABEL_4;
    case 0x10u:
      v8 = 4;
      break;
    case 2u:
      v8 = 1;
      break;
    case 8u:
      v8 = 3;
      break;
    default:
      return 3221225485LL;
  }
  v9 = (1 << v8) - 1;
LABEL_4:
  v10 = &v18;
  do
  {
    if ( v8 )
    {
      v11 = a1 & v9;
      a1 >>= v8;
    }
    else
    {
      v11 = a1 % v6;
      a1 /= v6;
    }
    --v10;
    v12 = RtlpIntegerChars;
    *v10 = *((_BYTE *)RtlpIntegerChars + v11);
  }
  while ( a1 );
  v14 = (unsigned int)(v13 + 65 - (_DWORD)v10);
  if ( a3 >= 0 )
    goto LABEL_9;
  a3 = -a3;
  v15 = (int)v14 <= a3;
  if ( (int)v14 < a3 )
  {
    v17 = (unsigned int)(a3 - v14);
    LOBYTE(v12) = 48;
    memset(a4, (int)v12, v17);
    a3 = v14;
    a4 += v17;
LABEL_9:
    v15 = (int)v14 <= a3;
  }
  if ( !v15 )
    return 2147483653LL;
  memmove(a4, v10, (unsigned int)v14);
  if ( (int)v14 < a3 )
    a4[v14] = 0;
  return 0LL;
}
