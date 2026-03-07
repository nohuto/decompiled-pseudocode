_QWORD *__fastcall MiFindHighestDescriptorByNode(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8
  __int64 v3; // rbx
  _QWORD *v4; // rsi
  unsigned __int64 v5; // rax
  char v6; // dl
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r11
  _QWORD *v10; // r9
  int v11; // r10d
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // r8
  _QWORD *v15; // rdx
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rax
  __int64 i; // rsi

  v2 = a1 + 352;
  v3 = a2;
  if ( a2 >= (unsigned int)(unsigned __int16)KeNumberNodes - 1 )
  {
    v4 = 0LL;
    v5 = *(_QWORD *)v2;
    if ( (*(_BYTE *)(a1 + 360) & 1) != 0 )
    {
      if ( !v5 )
        goto LABEL_51;
      v5 ^= v2;
    }
    if ( v5 )
    {
      v6 = *(_BYTE *)(a1 + 360) & 1;
      do
      {
        v7 = *(_QWORD *)(v5 + 8);
        v4 = (_QWORD *)v5;
        if ( v6 && v7 )
          v5 ^= v7;
        else
          v5 = *(_QWORD *)(v5 + 8);
      }
      while ( v5 );
    }
LABEL_51:
    if ( !v4 )
      return 0LL;
    if ( (unsigned int)v3 < (unsigned __int16)KeNumberNodes
      && *((_DWORD *)MiSearchNumaNodeTable(v4[4]) + 2) != (_DWORD)v3 )
    {
      return 0LL;
    }
    return v4;
  }
  v8 = *(_QWORD *)v2;
  v9 = *((_QWORD *)qword_140C65748 + 2 * v3);
  if ( (*(_BYTE *)(a1 + 360) & 1) != 0 && v8 )
    v8 ^= v2;
  v10 = 0LL;
  v11 = *(_BYTE *)(a1 + 360) & 1;
  while ( 1 )
  {
    if ( !v8 )
      goto LABEL_26;
    v12 = *(_QWORD *)(v8 + 32);
    if ( v9 < v12 )
    {
      v13 = *(_QWORD *)v8;
      v10 = (_QWORD *)v8;
      goto LABEL_21;
    }
    if ( v9 < *(_QWORD *)(v8 + 40) + v12 )
      break;
    v13 = *(_QWORD *)(v8 + 8);
LABEL_21:
    if ( (*(_BYTE *)(v2 + 8) & 1) != 0 && v13 )
      v8 ^= v13;
    else
      v8 = v13;
  }
  v14 = *(_QWORD *)v8;
  v10 = (_QWORD *)v8;
  if ( v11 && v14 )
    v14 ^= v8;
  v15 = 0LL;
  if ( !v14 )
    goto LABEL_26;
  while ( 2 )
  {
    v16 = *(_QWORD *)(v14 + 32);
    if ( v9 < v16 )
    {
LABEL_39:
      v17 = *(_QWORD *)v14;
      goto LABEL_40;
    }
    if ( v9 < *(_QWORD *)(v14 + 40) + v16 )
    {
      v15 = (_QWORD *)v14;
      goto LABEL_39;
    }
    v17 = *(_QWORD *)(v14 + 8);
LABEL_40:
    if ( v11 && v17 )
      v14 ^= v17;
    else
      v14 = v17;
    if ( v14 )
      continue;
    break;
  }
  if ( v15 )
  {
    v10 = v15;
    goto LABEL_27;
  }
LABEL_26:
  if ( v10 )
  {
LABEL_27:
    v4 = (_QWORD *)*v10;
    if ( *v10 )
    {
      for ( ; v4[1]; v4 = (_QWORD *)v4[1] )
        ;
    }
    else
    {
      for ( i = v10[2]; ; i = v4[2] )
      {
        v4 = (_QWORD *)(i & 0xFFFFFFFFFFFFFFFCuLL);
        if ( !v4 || (_QWORD *)v4[1] == v10 )
          break;
        v10 = v4;
      }
    }
    goto LABEL_51;
  }
  return 0LL;
}
