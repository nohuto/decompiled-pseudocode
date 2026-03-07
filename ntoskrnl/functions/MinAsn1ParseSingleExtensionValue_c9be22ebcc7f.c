__int64 __fastcall MinAsn1ParseSingleExtensionValue(__int64 a1, unsigned int *a2, char *a3, _OWORD *a4)
{
  __int64 v4; // rsi
  unsigned int v5; // ebx
  __int64 v6; // rdx
  char *v7; // r12
  __int64 v8; // r15
  char v9; // r13
  int v10; // r14d
  int v11; // edi
  int Values; // ecx
  const void *v13; // rcx
  const void **v14; // r12
  unsigned int v15; // eax
  unsigned int v16; // r15d
  __int64 v18; // rax
  int v19; // [rsp+30h] [rbp-69h] BYREF
  const void *v20; // [rsp+38h] [rbp-61h] BYREF
  __int64 v21; // [rsp+40h] [rbp-59h]
  char *v22; // [rsp+48h] [rbp-51h]
  _OWORD *v23; // [rsp+50h] [rbp-49h]
  _BYTE v24[16]; // [rsp+60h] [rbp-39h] BYREF
  int v25; // [rsp+70h] [rbp-29h]
  char v26; // [rsp+88h] [rbp-11h] BYREF
  __int128 v27; // [rsp+A0h] [rbp+7h]

  v4 = *((_QWORD *)a2 + 1);
  v5 = 0;
  v6 = *a2;
  v7 = a3;
  v23 = a4;
  v8 = a1;
  v22 = a3;
  v9 = 0;
  v21 = a1;
  v20 = 0LL;
  v19 = 0;
  if ( !(_DWORD)v6 )
    goto LABEL_16;
  if ( (int)MinAsn1ExtractContent(v4, v6, &v19, &v20) <= 0 )
  {
    v5 = -1;
    goto LABEL_16;
  }
  v10 = v19;
  v11 = (int)v20;
  if ( !v19 )
    goto LABEL_15;
  do
  {
    v19 = 4;
    Values = MinAsn1ExtractValues(v11, v10, (unsigned int)&v19, (unsigned int)&qword_14000B330, 5, (__int64)v24);
    if ( Values <= 0 )
    {
      v7 = v22;
      if ( !Values )
        Values = -1;
      v5 = Values + v4 - v11;
      goto LABEL_16;
    }
    if ( v9 )
      goto LABEL_13;
    v13 = *(const void **)(v8 + 8);
    v14 = (const void **)&v26;
    v15 = *(_DWORD *)v8;
    v16 = 0;
    v20 = v13;
    v19 = v15;
    while ( v15 != *((_DWORD *)v14 - 2) )
    {
LABEL_11:
      ++v16;
      v14 += 10;
      if ( v16 )
      {
        v8 = v21;
        goto LABEL_13;
      }
    }
    if ( memcmp(v13, *v14, v15) )
    {
      v15 = v19;
      v13 = v20;
      goto LABEL_11;
    }
    v18 = v16;
    v8 = v21;
    if ( &v24[80 * v18] )
    {
      v9 = 1;
      *v23 = v27;
    }
LABEL_13:
    v11 += v25;
    v10 -= v25;
  }
  while ( v10 );
  v7 = v22;
LABEL_15:
  v5 = v11 - v4;
LABEL_16:
  *v7 = v9;
  return v5;
}
