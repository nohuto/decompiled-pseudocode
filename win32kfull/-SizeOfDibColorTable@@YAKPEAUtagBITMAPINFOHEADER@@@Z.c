__int64 __fastcall SizeOfDibColorTable(struct tagBITMAPINFOHEADER *a1)
{
  DWORD biCompression; // r8d
  unsigned int v3; // eax
  __int64 v4; // rdx
  WORD biBitCount; // cx

  biCompression = a1->biCompression;
  if ( biCompression != 3 )
  {
    v3 = 0;
    if ( biCompression )
    {
      if ( biCompression == 2 )
        return 64;
      if ( biCompression == 1 )
        return 1024;
    }
    else
    {
      LODWORD(v4) = a1->biClrUsed;
      if ( (_DWORD)v4 )
        return (unsigned int)(4 * v4);
      biBitCount = a1->biBitCount;
      if ( biBitCount <= 8u )
      {
        v4 = 1LL << biBitCount;
        return (unsigned int)(4 * v4);
      }
    }
    return v3;
  }
  return ((a1->biBitCount - 16) & 0xFFEF) == 0 ? 0xCu : 0;
}
