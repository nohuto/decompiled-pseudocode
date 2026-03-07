__int64 __fastcall HalpPciWriteMmConfigUlong(__int64 a1, _DWORD *a2, unsigned int a3)
{
  *(_DWORD *)(a1 + a3) = *a2;
  return 4LL;
}
