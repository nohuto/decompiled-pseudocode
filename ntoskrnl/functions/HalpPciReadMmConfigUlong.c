__int64 __fastcall HalpPciReadMmConfigUlong(__int64 a1, _DWORD *a2, unsigned int a3)
{
  *a2 = *(_DWORD *)(a1 + a3);
  return 4LL;
}
