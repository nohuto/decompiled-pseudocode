__int64 BgpGetBitsPerPixel()
{
  __int64 result; // rax

  if ( (_DWORD)xmmword_140C0E350 == 4 )
    return 24LL;
  result = 1LL;
  if ( (_DWORD)xmmword_140C0E350 == 5 )
    return 32LL;
  return result;
}
