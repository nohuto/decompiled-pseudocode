__int64 __fastcall HalpPciReadMmConfigUshort(__int64 a1, _WORD *a2, unsigned int a3)
{
  *a2 = *(_WORD *)(a1 + a3);
  return 2LL;
}
