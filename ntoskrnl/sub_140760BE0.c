__int64 __fastcall sub_140760BE0(char a1, __int64 a2, __int64 a3, __int64 a4, int a5, __int64 a6, unsigned int a7)
{
  return *(_DWORD *)(a6 + 4LL * (((a1 & 1) - 1) & 1)) - (*(_DWORD *)(a6 + 4LL * (a1 & 1)) ^ a7);
}
