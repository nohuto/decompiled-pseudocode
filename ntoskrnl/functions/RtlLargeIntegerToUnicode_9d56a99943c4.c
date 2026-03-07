__int64 __fastcall RtlLargeIntegerToUnicode(unsigned __int64 *a1, __int64 a2, int a3, char *a4)
{
  char *v4; // r14
  int v5; // edi
  _WORD *v6; // r10
  unsigned __int64 v7; // rdx
  char v8; // al
  __int64 v9; // rbx
  bool v10; // cc
  __int64 v11; // rdx
  _WORD *v12; // rdi
  __int64 i; // rcx
  _BYTE v15[14]; // [rsp+A2h] [rbp-36h] BYREF

  v4 = a4;
  v5 = a3;
  v6 = v15;
  v7 = *a1;
  do
  {
    v8 = v7;
    v7 >>= 4;
    *--v6 = RtlpIntegerWChars[v8 & 0xF];
  }
  while ( v7 );
  v9 = (v15 - (_BYTE *)v6) >> 1;
  if ( a3 < 0 )
  {
    v5 = -a3;
    v10 = (int)v9 <= -a3;
    if ( (int)v9 >= -a3 )
      goto LABEL_10;
    v11 = (unsigned int)(v5 - v9);
    v12 = a4;
    for ( i = (unsigned int)v11; i; --i )
      *v12++ = 48;
    v5 = (v15 - (_BYTE *)v6) >> 1;
    v4 = &a4[2 * v11];
  }
  v10 = (int)v9 <= v5;
LABEL_10:
  if ( !v10 )
    return 2147483653LL;
  memmove(v4, v6, 2LL * (unsigned int)v9);
  if ( (int)v9 < v5 )
    *(_WORD *)&v4[2 * (unsigned int)v9] = 0;
  return 0LL;
}
