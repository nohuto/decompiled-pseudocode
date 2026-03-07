__int64 __fastcall HalpPciWriteMmConfigUshort(__int64 a1, _WORD *a2, unsigned int a3)
{
  *(_WORD *)(a1 + a3) = *a2;
  return 2LL;
}
