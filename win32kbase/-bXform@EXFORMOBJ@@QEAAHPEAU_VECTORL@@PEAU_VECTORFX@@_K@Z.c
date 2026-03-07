__int64 __fastcall EXFORMOBJ::bXform(EXFORMOBJ *this, struct _VECTORL *a2, struct _VECTORFX *a3, __int64 a4)
{
  __int64 v4; // rcx
  struct _VECTORL *v5; // r10
  __int64 v6; // r8
  int v7; // r9d
  unsigned int v9; // ebx

  v4 = *(_QWORD *)this;
  if ( (*(_DWORD *)(v4 + 32) & 2) != 0 )
  {
    v5 = (struct _VECTORL *)((char *)a2 + 8 * a4);
    if ( a2 >= v5 )
    {
      return 1LL;
    }
    else
    {
      v6 = a3 - a2;
      while ( (unsigned int)(*(_DWORD *)a2 + 134217726) <= 0xFFFFFFC )
      {
        v7 = *((_DWORD *)a2 + 1);
        if ( (unsigned int)(v7 + 134217726) > 0xFFFFFFC )
          break;
        *(_DWORD *)((char *)a2 + v6) = 16 * *(_DWORD *)a2;
        *(_DWORD *)((char *)a2 + v6 + 4) = 16 * v7;
        a2 = (struct _VECTORL *)((char *)a2 + 8);
        if ( a2 >= v5 )
          return 1LL;
      }
      EngSetLastError(0x216u);
      return 0LL;
    }
  }
  else
  {
    v9 = bCvtVts(v4, a2, a3);
    if ( !v9 )
      EngSetLastError(0x216u);
    return v9;
  }
}
