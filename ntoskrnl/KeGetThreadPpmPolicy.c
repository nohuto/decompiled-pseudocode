__int64 __fastcall KeGetThreadPpmPolicy(__int64 a1)
{
  return (*(_DWORD *)(a1 + 956) >> 8) & 7;
}
