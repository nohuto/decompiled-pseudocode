unsigned __int64 __fastcall RFONTOBJ::cGetGlyphDataCache(RFONTOBJ *this, unsigned int a2, struct _GLYPHPOS *a3)
{
  struct _GLYPHPOS *v6; // rbx
  struct _GLYPHPOS *v7; // rsi
  struct _GLYPHDATA *pgdf; // rdx

  if ( !*(_DWORD *)(*(_QWORD *)this + 88LL) )
    return a2;
  v6 = a3;
  v7 = &a3[a2];
  if ( a3 < v7 )
  {
    do
    {
      pgdf = (struct _GLYPHDATA *)v6->pgdf;
      if ( !pgdf->gdf.pgb && !(unsigned int)RFONTOBJ::bInsertGlyphbits(this, pgdf) )
        break;
      ++v6;
    }
    while ( v6 < v7 );
  }
  return 0xAAAAAAAAAAAAAAABuLL * (((char *)v6 - (char *)a3) >> 3);
}
