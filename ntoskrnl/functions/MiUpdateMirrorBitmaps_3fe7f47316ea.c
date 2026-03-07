__int64 MiUpdateMirrorBitmaps()
{
  int v0; // ebx

  v0 = 0;
  while ( (unsigned int)MiActOnMirrorBitmap((__int64)&xmmword_140C67B10[v0], 0) )
  {
    if ( (unsigned int)++v0 >= 2 )
      return 1LL;
  }
  return 0LL;
}
