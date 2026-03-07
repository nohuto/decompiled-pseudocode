__int64 __fastcall SymCryptTwistedEdwardsSetZero(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v4; // rsi
  __int64 v6; // rbx

  v4 = *(_DWORD **)(a1 + 616);
  v6 = *(unsigned int *)(a1 + 36);
  SymCryptModElementSetValueUint32(0, v4, a2 + 32, a3, a4);
  SymCryptModElementSetValueUint32(1, v4, v6 + a2 + 32, a3, a4);
  SymCryptModElementSetValueUint32(1, v4, a2 + (unsigned int)(2 * v6) + 32LL, a3, a4);
  return SymCryptModElementSetValueUint32(0, v4, (unsigned int)(3 * v6) + a2 + 32, a3, a4);
}
