__int64 __fastcall STROBJ_bEnumLinked(struct ESTROBJ *a1, unsigned int *a2, struct _GLYPHPOS **a3)
{
  int v3; // eax
  unsigned int v4; // edi
  _DWORD *v8; // rax
  struct _GLYPHPOS **v9; // rsi
  int v10; // edx
  struct _GLYPHPOS *i; // rcx
  int v12; // eax
  _DWORD *v13; // rdx
  __int64 v14; // r9
  unsigned int GlyphDataCache; // ecx

  v3 = *((_DWORD *)a1 + 12);
  v4 = 0;
  if ( v3 )
  {
    if ( v3 == *(_DWORD *)a1 )
      goto LABEL_16;
    v9 = (struct _GLYPHPOS **)((char *)a1 + 224);
    v12 = *((_DWORD *)a1 + 59);
    v13 = (_DWORD *)(*((_QWORD *)a1 + 27) + 4LL);
    *((_QWORD *)a1 + 27) = v13;
    for ( i = (struct _GLYPHPOS *)(*((_QWORD *)a1 + 28) + 24LL); ; ++i )
    {
      *v9 = i;
      if ( *v13 == v12 )
        break;
      *((_QWORD *)a1 + 27) = ++v13;
    }
  }
  else
  {
    v8 = (_DWORD *)*((_QWORD *)a1 + 26);
    v9 = (struct _GLYPHPOS **)((char *)a1 + 224);
    v10 = *((_DWORD *)a1 + 59);
    *((_QWORD *)a1 + 27) = v8;
    for ( i = (struct _GLYPHPOS *)*((_QWORD *)a1 + 8); ; ++i )
    {
      *v9 = i;
      if ( *v8 == v10 )
        break;
      *((_QWORD *)a1 + 27) = ++v8;
    }
  }
  v14 = *((_QWORD *)a1 + 7);
  if ( v14 )
  {
    if ( (*(_DWORD *)(*(_QWORD *)v14 + 84LL) & 1) != 0 )
    {
      v9 = (struct _GLYPHPOS **)((char *)a1 + 224);
      GlyphDataCache = RFONTOBJ::bInsertGlyphbitsLookaside(
                         *((RFONTOBJ **)a1 + 7),
                         i,
                         *(_DWORD *)(*(_QWORD *)v14 + 88LL)) != 0;
    }
    else
    {
      GlyphDataCache = RFONTOBJ::cGetGlyphDataCache(*((RFONTOBJ **)a1 + 7), 1u, i);
    }
    if ( GlyphDataCache )
    {
      ++*((_DWORD *)a1 + 12);
      *a2 = 1;
      *a3 = *v9;
      LOBYTE(v4) = *((_DWORD *)a1 + 12) < *(_DWORD *)a1;
      return v4;
    }
  }
LABEL_16:
  *a2 = 0;
  return 0LL;
}
