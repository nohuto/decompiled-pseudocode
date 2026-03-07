void __fastcall MiBitmapsCachedEntryLengthChanged(__int64 a1, unsigned __int64 *a2, int a3)
{
  char v3; // bl
  unsigned __int64 *v4; // rdi
  unsigned __int64 v6; // r9
  unsigned __int64 i; // r9
  _QWORD *v8; // rdx
  unsigned int v9; // eax
  unsigned int v10; // ecx
  unsigned __int64 v11; // rcx
  unsigned __int64 j; // r9
  __int64 v13; // rsi
  __int64 v14; // r8
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rax

  v3 = 0;
  v4 = a2;
  if ( a3 )
  {
    v6 = a2[1];
    if ( v6 )
    {
      v8 = *(_QWORD **)v6;
      if ( *(_QWORD *)v6 )
      {
        do
        {
          v6 = (unsigned __int64)v8;
          v8 = (_QWORD *)*v8;
        }
        while ( v8 );
      }
    }
    else
    {
      for ( i = a2[2]; ; i = *(_QWORD *)(v6 + 16) )
      {
        v6 = i & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v6 || *(unsigned __int64 **)v6 == a2 )
          break;
        a2 = (unsigned __int64 *)v6;
      }
    }
  }
  else
  {
    v6 = *a2;
    v11 = (unsigned __int64)a2;
    if ( *a2 )
    {
      for ( ; *(_QWORD *)(v6 + 8); v6 = *(_QWORD *)(v6 + 8) )
        ;
    }
    else
    {
      for ( j = a2[2]; ; j = *(_QWORD *)(v6 + 16) )
      {
        v6 = j & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v6 || *(_QWORD *)(v6 + 8) == v11 )
          break;
        v11 = v6;
      }
    }
    if ( !v6 )
      return;
  }
  v9 = *(_DWORD *)(v6 + 52);
  v10 = *((_DWORD *)v4 + 13);
  if ( a3 )
  {
    if ( v9 > v10 )
      return;
  }
  else if ( v9 < v10 )
  {
    return;
  }
  v13 = a1 + 144;
  RtlRbRemoveNode(v13, v4);
  v15 = *(_QWORD *)v13;
  if ( (*(_BYTE *)(v13 + 8) & 1) != 0 )
  {
    if ( v15 )
      v15 ^= v13;
  }
  if ( v15 )
  {
    v14 = *((unsigned int *)v4 + 13);
    while ( 1 )
    {
      if ( v4[6] < *(_QWORD *)(v15 + 48) )
      {
        v16 = *(_QWORD *)v15;
        if ( (*(_BYTE *)(v13 + 8) & 1) != 0 )
        {
          if ( !v16 )
            break;
          v16 ^= v15;
        }
        if ( !v16 )
          break;
      }
      else
      {
        v16 = *(_QWORD *)(v15 + 8);
        if ( (*(_BYTE *)(v13 + 8) & 1) != 0 )
        {
          if ( !v16 )
            goto LABEL_37;
          v16 ^= v15;
        }
        if ( !v16 )
        {
LABEL_37:
          v3 = 1;
          break;
        }
      }
      v15 = v16;
    }
  }
  LOBYTE(v14) = v3;
  RtlRbInsertNodeEx(v13, v15, v14, v4);
}
