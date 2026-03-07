__int64 __fastcall RtlAppendAsciizToString(unsigned __int16 *a1, _BYTE *a2)
{
  size_t v3; // rbx
  __int64 v4; // r8

  if ( !a2 )
    return 0LL;
  v3 = -1LL;
  do
    ++v3;
  while ( a2[v3] );
  if ( v3 <= 0xFFFF )
  {
    v4 = *a1;
    if ( v4 + v3 <= a1[1] )
    {
      memmove((void *)(v4 + *((_QWORD *)a1 + 1)), a2, v3);
      *a1 += v3;
      return 0LL;
    }
  }
  return 3221225507LL;
}
