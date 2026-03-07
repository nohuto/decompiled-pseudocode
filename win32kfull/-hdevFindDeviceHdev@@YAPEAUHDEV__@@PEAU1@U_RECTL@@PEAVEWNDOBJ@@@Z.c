__int64 __fastcall hdevFindDeviceHdev(_QWORD *a1, struct _RECTL *a2, struct EWNDOBJ *a3)
{
  _QWORD *v3; // rdi
  __int64 v4; // rbx
  __int64 v6; // rsi
  __int64 v7; // r8
  _QWORD *v8; // rax
  _QWORD *v9; // rdi
  int v10; // ebp

  v3 = (_QWORD *)a1[221];
  v4 = 0LL;
  v6 = 0LL;
  if ( a3 && EWNDOBJ::bValid(a3) )
  {
    v8 = (_QWORD *)*v3;
    v6 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 168) + 32LL) + 48LL);
    while ( v8 )
    {
      if ( v6 == v8[6] )
        return v6;
      v8 = (_QWORD *)*v8;
    }
  }
  v9 = (_QWORD *)*v3;
  v10 = 0;
  if ( !v9 )
    return 0LL;
  do
  {
    if ( *((_DWORD *)v9 + 7) <= a2->left
      && *((_DWORD *)v9 + 9) >= a2->right
      && *((_DWORD *)v9 + 8) <= a2->top
      && *((_DWORD *)v9 + 10) >= a2->bottom )
    {
      return v9[6];
    }
    if ( (unsigned int)bIntersect((char *)v9 + 28, a2) )
    {
      v6 = v9[6];
      if ( (*(_DWORD *)(v6 + 2096) & 0x100) != 0 )
        return v6;
      ++v10;
    }
    v9 = (_QWORD *)*v9;
  }
  while ( v9 );
  if ( v10 == 1 )
    return v6;
  return v4;
}
