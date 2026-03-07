__int64 __fastcall SymCryptFdef369ModSubGeneric(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // r14d

  v5 = *(_DWORD *)(a1 + 4);
  xHalTimerWatchdogStop();
  LODWORD(a3) = SymCryptFdef369RawSubAsm(a2, a3, a4, v5);
  SymCryptFdef369RawAddAsm(a4, a1 + 128, a5, v5);
  return SymCryptFdef369MaskedCopyAsm(a5, a4, v5, (unsigned int)-(int)a3);
}
