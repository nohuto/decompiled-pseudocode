__int64 SURFACE::bIncludeSprites(void)
{
  __int64 result; // rax

  result = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  if ( result )
    return (*(_DWORD *)(result + 328) >> 1) & 1;
  return result;
}
