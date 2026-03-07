__int64 __fastcall RtlpHpSegPageRangeHandleCommit(__int64 a1, __int64 a2, int *a3, _DWORD *a4, int a5)
{
  int v6; // edi
  unsigned int v7; // r11d
  char v8; // cl
  int v9; // esi
  int v10; // ebp
  unsigned __int64 v11; // r9
  unsigned __int64 v12; // rbx
  unsigned int v13; // r15d
  unsigned __int64 v14; // r14
  unsigned int v15; // r12d
  unsigned int v16; // r8d
  bool v17; // zf
  unsigned int v18; // eax
  unsigned int v20; // edx
  int v21; // eax
  unsigned int v22; // eax
  unsigned int v23; // ecx
  unsigned int v24; // r8d
  int v25; // ecx

  v6 = 0;
  v7 = 1 << *(_BYTE *)(a1 + 9);
  v8 = *(_BYTE *)(a1 + 9);
  v9 = -1;
  v10 = -1;
  v11 = a2 + 32 * ((unsigned __int64)(unsigned int)*a3 >> v8);
  v12 = (unsigned __int64)(unsigned int)*a3 >> v8 << v8;
  v13 = *a3 & (v7 - 1);
  v14 = v11 + 32 * ((unsigned __int64)(v13 + *a4 - 1) >> v8);
  v15 = ((v13 + *a4 - 1) & (v7 - 1)) + 1;
  v16 = 0;
  if ( v13 )
  {
    v22 = *(unsigned __int8 *)(v11 + 25);
    v23 = v7;
    if ( v11 == v14 )
      v23 = ((v13 + *a4 - 1) & (v7 - 1)) + 1;
    if ( a5 > 1 )
    {
      if ( a5 == 2 && v22 > v13 )
      {
        v9 = v12 + v13;
        v24 = v13;
        v10 = v22 + v12;
        goto LABEL_31;
      }
    }
    else if ( v22 < v23 )
    {
      v9 = v22 + v12;
      v24 = v23;
      v10 = v12 + v23;
LABEL_31:
      v16 = v24 - v22;
      if ( v16 && a5 >= 1 )
        *(_BYTE *)(v11 + 25) = v16 + v22;
    }
    v11 += 32LL;
    LODWORD(v12) = v7 + v12;
  }
  v17 = v11 == v14;
  while ( v11 < v14 )
  {
    v20 = *(unsigned __int8 *)(v11 + 25);
    v21 = 0;
    if ( a5 > 1 )
    {
      if ( a5 == 2 && *(_BYTE *)(v11 + 25) )
      {
        v10 = v20 + v12;
        v21 = -v20;
        v25 = v12;
        if ( v9 != -1 )
          v25 = v9;
        v9 = v25;
        goto LABEL_21;
      }
    }
    else if ( v20 < v7 )
    {
      if ( v9 == -1 )
        v9 = v20 + v12;
      v10 = v12 + v7;
      v21 = v7 - v20;
LABEL_21:
      if ( v21 && a5 >= 1 )
        *(_BYTE *)(v11 + 25) = v21 + v20;
    }
    v16 += v21;
    v11 += 32LL;
    LODWORD(v12) = v7 + v12;
    v17 = v11 == v14;
  }
  if ( !v17 )
    goto LABEL_13;
  v18 = *(unsigned __int8 *)(v11 + 25);
  if ( a5 > 1 )
  {
    if ( a5 == 2 && *(_BYTE *)(v11 + 25) )
    {
      v10 = v18 + v12;
      v6 = -v18;
      if ( v9 != -1 )
        LODWORD(v12) = v9;
      v9 = v12;
      goto LABEL_9;
    }
  }
  else if ( v18 < v15 )
  {
    if ( v9 == -1 )
      v9 = v18 + v12;
    v10 = v12 + v15;
    v6 = v15 - v18;
LABEL_9:
    if ( v6 && a5 >= 1 )
      *(_BYTE *)(v11 + 25) = v6 + v18;
  }
  v16 += v6;
LABEL_13:
  if ( v16 )
  {
    *a4 = v10 - v9;
    *a3 = v9;
  }
  return v16;
}
