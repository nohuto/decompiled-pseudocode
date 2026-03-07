__int64 __fastcall STROBJ_bEnumPositionsOnlyLinked(struct ESTROBJ *a1, unsigned int *a2, struct _GLYPHPOS **a3)
{
  int v3; // r11d
  unsigned int v4; // r10d
  _DWORD *v7; // rax
  struct _GLYPHPOS **v8; // r8
  int v9; // ebx
  struct _GLYPHPOS *j; // rcx
  struct _GLYPHPOS *v12; // rax
  _DWORD *v13; // rcx
  int v14; // ebx
  struct _GLYPHPOS *i; // rax

  v3 = *((_DWORD *)a1 + 13);
  v4 = 0;
  if ( v3 )
  {
    if ( v3 == *(_DWORD *)a1 )
    {
      *a2 = 0;
      return 0LL;
    }
    v8 = (struct _GLYPHPOS **)((char *)a1 + 224);
    v12 = (struct _GLYPHPOS *)*((_QWORD *)a1 + 28);
    v13 = (_DWORD *)(*((_QWORD *)a1 + 27) + 4LL);
    v14 = *((_DWORD *)a1 + 59);
    for ( i = v12 + 1; ; ++i )
    {
      *((_QWORD *)a1 + 27) = v13;
      *v8 = i;
      if ( *v13 == v14 )
        break;
      ++v13;
    }
  }
  else
  {
    v7 = (_DWORD *)*((_QWORD *)a1 + 26);
    v8 = (struct _GLYPHPOS **)((char *)a1 + 224);
    v9 = *((_DWORD *)a1 + 59);
    *((_QWORD *)a1 + 27) = v7;
    for ( j = (struct _GLYPHPOS *)*((_QWORD *)a1 + 8); ; ++j )
    {
      *v8 = j;
      if ( *v7 == v9 )
        break;
      *((_QWORD *)a1 + 27) = ++v7;
    }
  }
  *((_DWORD *)a1 + 13) = v3 + 1;
  *a2 = 1;
  *a3 = *v8;
  LOBYTE(v4) = *((_DWORD *)a1 + 13) < *(_DWORD *)a1;
  return v4;
}
