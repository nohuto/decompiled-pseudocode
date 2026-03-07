__int64 __fastcall RtlIntegerToUnicode(unsigned int a1, unsigned int a2, int a3, char *a4)
{
  unsigned int v6; // r8d
  int v8; // ecx
  int v9; // r9d
  _WORD *v10; // r10
  int v11; // ebx
  __int64 v12; // rbx
  bool v13; // cc
  __int64 v15; // rdx
  _WORD *v16; // rdi
  __int64 i; // rcx
  _BYTE v18[14]; // [rsp+62h] [rbp-36h] BYREF

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
  v10 = v18;
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
    *--v10 = RtlpIntegerWChars[v11];
  }
  while ( a1 );
  v12 = (v18 - (_BYTE *)v10) >> 1;
  if ( a3 >= 0 )
    goto LABEL_9;
  a3 = -a3;
  v13 = (int)v12 <= a3;
  if ( (int)v12 < a3 )
  {
    v15 = (unsigned int)(a3 - v12);
    v16 = a4;
    for ( i = (unsigned int)v15; i; --i )
      *v16++ = 48;
    a3 = (v18 - (_BYTE *)v10) >> 1;
    a4 += 2 * v15;
LABEL_9:
    v13 = (int)v12 <= a3;
  }
  if ( !v13 )
    return 2147483653LL;
  memmove(a4, v10, 2LL * (unsigned int)v12);
  if ( (int)v12 < a3 )
    *(_WORD *)&a4[2 * (unsigned int)v12] = 0;
  return 0LL;
}
