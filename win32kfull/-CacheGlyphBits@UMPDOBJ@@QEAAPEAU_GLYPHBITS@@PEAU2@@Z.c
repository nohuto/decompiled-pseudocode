struct _GLYPHBITS *__fastcall UMPDOBJ::CacheGlyphBits(UMPDOBJ *this, struct _GLYPHBITS *a2)
{
  unsigned int v4; // edi
  void *v5; // rbx
  void *v6; // rax

  v4 = a2->sizlBitmap.cy * ((unsigned int)(a2->sizlBitmap.cx + 7) >> 3) + 16;
  if ( v4 > *((_DWORD *)this + 92) )
  {
    v6 = UMPDOBJ::_AllocUserMem(this, v4, 0);
    v5 = v6;
    if ( v6 )
    {
      *((_QWORD *)this + 43) = v6;
      *((_DWORD *)this + 92) = v4;
LABEL_6:
      memmove(v5, a2, v4);
    }
  }
  else
  {
    v5 = (void *)*((_QWORD *)this + 43);
    if ( v5 )
      goto LABEL_6;
  }
  return (struct _GLYPHBITS *)v5;
}
