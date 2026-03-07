__int64 __fastcall PnpNeedToReleaseBootResources(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  unsigned int v3; // ebx
  bool v4; // zf
  unsigned int *v5; // rax
  unsigned int v6; // ebp
  _DWORD *v7; // rax
  unsigned int v8; // r15d
  _DWORD *v9; // rdi
  unsigned int v10; // r12d
  unsigned __int8 v11; // si
  __int64 v12; // rax
  int v13; // r13d
  unsigned int v14; // ecx
  _DWORD *v15; // r14
  __int64 v16; // rax
  unsigned int v18; // [rsp+20h] [rbp-58h]
  unsigned int v19; // [rsp+28h] [rbp-50h]
  _DWORD *v20; // [rsp+88h] [rbp+10h]
  unsigned int v22; // [rsp+98h] [rbp+20h]

  v20 = a2;
  v3 = 0;
  v4 = *a2 == 1;
  *a3 = 0;
  if ( !v4 )
    return v3;
  v5 = *(unsigned int **)(a1 + 544);
  if ( !v5 )
    return v3;
  v6 = *v5;
  if ( !*v5 )
    return v3;
  v7 = v5 + 1;
  v8 = 0;
  while ( 1 )
  {
    v9 = v7 + 4;
    v10 = 0;
    v19 = v7[3];
    if ( v19 )
      break;
LABEL_22:
    ++v8;
    v7 = v9;
    if ( v8 >= v6 )
      return v3;
  }
  while ( 1 )
  {
    v11 = *(_BYTE *)v9;
    v12 = 0LL;
    if ( *(_BYTE *)v9 )
    {
      if ( v11 == 5 )
      {
        v12 = (unsigned int)v9[1];
        goto LABEL_21;
      }
      if ( v11 < 8u )
        break;
    }
LABEL_21:
    ++v10;
    v9 = (_DWORD *)((char *)v9 + v12 + 20);
    if ( v10 >= v19 )
      goto LABEL_22;
  }
  v13 = 0;
  v22 = 0;
  v14 = 0;
  v18 = a2[4];
  if ( v18 )
  {
    v15 = a2 + 5;
    do
    {
      if ( *(_BYTE *)v15 == 5 )
      {
        v16 = (unsigned int)v15[1];
      }
      else
      {
        if ( v11 == *(_BYTE *)v15 )
        {
          v13 = 1;
          if ( (unsigned int)PnpIsRangeWithin(v9, v15) )
          {
            a2 = v20;
            v12 = 0LL;
            goto LABEL_21;
          }
          v14 = v22;
        }
        v16 = 0LL;
      }
      ++v14;
      v15 = (_DWORD *)((char *)v15 + v16 + 20);
      v22 = v14;
    }
    while ( v14 < v18 );
    if ( !v13 )
      return 1;
    *a3 = 1;
  }
  else
  {
    return 1;
  }
  return v3;
}
