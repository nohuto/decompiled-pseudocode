__int64 PfTReplaceCurrentBuffer()
{
  __int64 v0; // rax
  __int64 v1; // rcx
  __int64 v2; // r10
  unsigned int v3; // ebx
  _QWORD *v4; // r9
  _QWORD *v5; // rax
  __int64 v6; // rcx
  unsigned __int16 v8; // r8
  __int64 v9; // rcx

  v0 = PfTGetFreeBuffer();
  v3 = 0;
  v4 = (_QWORD *)v0;
  if ( v0 )
  {
    if ( (*(_DWORD *)v1 & 0xF) == 1 )
    {
      v8 = *(_WORD *)(v0 + 32) + *(_WORD *)(*(_QWORD *)(v1 + 24) + 36LL);
      v9 = 0xFFFF - (unsigned int)v8;
      *(_WORD *)(v0 + 36) = v8;
      if ( (unsigned int)v9 < *(_DWORD *)(v0 + 32) )
        *(_QWORD *)(((v0 + 47) & 0xFFFFFFFFFFFFFFF8uLL) + 40 * v9) = -1LL;
    }
    v5 = (_QWORD *)(v2 + 24);
    v6 = *(_QWORD *)(v2 + 24);
    if ( *(_QWORD *)(v6 + 8) != v2 + 24 )
      __fastfail(3u);
    *v4 = v6;
    v4[1] = v5;
    *(_QWORD *)(v6 + 8) = v4;
    *v5 = v4;
    if ( *(_WORD *)(v2 + 10) <= *(_WORD *)(v2 + 8) )
      KeSetEvent(&stru_140C64E30, 0, 0);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v3;
}
