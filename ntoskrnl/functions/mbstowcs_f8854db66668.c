size_t __cdecl mbstowcs(wchar_t *Dest, const char *Source, size_t MaxCount)
{
  int v3; // edi
  unsigned __int64 v7; // rdx
  size_t v8; // rdx
  ULONG BytesInUnicodeString; // [rsp+40h] [rbp+8h] BYREF

  v3 = MaxCount;
  if ( Dest && !MaxCount )
    return 0LL;
  if ( MaxCount > 0x7FFFFFFF )
    return -1LL;
  if ( Dest )
  {
    BytesInUnicodeString = mbstrlen(Source);
    if ( RtlMultiByteToUnicodeN(Dest, 2 * v3, &BytesInUnicodeString, Source, BytesInUnicodeString + 1) >= 0 )
    {
      v7 = (unsigned __int64)(int)BytesInUnicodeString >> 1;
      BytesInUnicodeString = v7;
      if ( !Dest[(int)v7 - 1] )
        LODWORD(v7) = v7 - 1;
    }
    else
    {
      *Dest = 0;
      LODWORD(v7) = -1;
    }
    return (int)v7;
  }
  else
  {
    v8 = -1LL;
    do
      ++v8;
    while ( Source[v8] );
    return v8;
  }
}
