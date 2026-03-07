errno_t __cdecl itoa_s(int Val, char *DstBuf, size_t Size, int Radix)
{
  BOOL v4; // eax

  v4 = 0;
  if ( Radix == 10 )
    v4 = Val < 0;
  return xtoa_s(Val, (_DWORD)DstBuf, Size, Radix, v4);
}
