__int64 __fastcall InsertModecapList(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // r10
  __int64 v4; // rsi
  __int64 v5; // r11
  __int64 v7; // rbx
  int v8; // eax
  const void *v9; // rdx
  int v10; // r10d
  __int64 v11; // rcx
  unsigned int v13; // eax
  unsigned int v14; // eax

  v3 = 0LL;
  v4 = a3;
  v5 = a2;
  if ( !a3 )
  {
LABEL_4:
    v11 = 3 * v4;
    *(_OWORD *)(v5 + 8 * v11) = *(_OWORD *)a1;
    *(_QWORD *)(v5 + 8 * v11 + 16) = *(_QWORD *)(a1 + 16);
    return (unsigned int)(v4 + 1);
  }
  while ( 1 )
  {
    v7 = v5 + 24 * v3;
    v8 = compModeCap(a1, v7);
    if ( v8 <= 0 )
      break;
    v3 = (unsigned int)(v10 + 1);
    if ( (unsigned int)v3 >= (unsigned int)v4 )
      goto LABEL_4;
  }
  if ( !v8 )
  {
    v13 = *(_DWORD *)(a1 + 8);
    if ( *(_DWORD *)(v7 + 8) < v13 )
    {
      *(_DWORD *)(v7 + 8) = v13;
      *(_DWORD *)(v7 + 12) = *(_DWORD *)(a1 + 12);
    }
    v14 = *(_DWORD *)(a1 + 20);
    if ( *(_DWORD *)(v7 + 20) < v14 )
    {
      *(_DWORD *)(v7 + 20) = v14;
      *(_DWORD *)(v7 + 16) = *(_DWORD *)(a1 + 16);
    }
    return (unsigned int)v4;
  }
  if ( (unsigned int)v4 < 0x24 )
  {
    memmove((void *)(v5 + 24LL * (unsigned int)(v10 + 1)), v9, 24LL * (unsigned int)(v4 - v10));
    *(_OWORD *)v7 = *(_OWORD *)a1;
    *(_QWORD *)(v7 + 16) = *(_QWORD *)(a1 + 16);
    return (unsigned int)(v4 + 1);
  }
  return (unsigned int)v4;
}
