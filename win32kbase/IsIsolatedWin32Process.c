__int64 __fastcall IsIsolatedWin32Process(__int64 a1)
{
  return (*(_DWORD *)(a1 + 812) >> 29) & 1;
}
