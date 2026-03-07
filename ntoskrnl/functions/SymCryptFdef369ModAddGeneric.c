__int64 __fastcall SymCryptFdef369ModAddGeneric(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // r14d
  int v10; // eax

  v5 = *(_DWORD *)(a1 + 4);
  xHalTimerWatchdogStop();
  LODWORD(a3) = SymCryptFdef369RawAddAsm(a2, a3, a4, v5);
  v10 = SymCryptFdef369RawSubAsm(a4, a1 + 128, a5, v5);
  return SymCryptFdef369MaskedCopyAsm(a5, a4, v5, ((unsigned int)a3 ^ v10) - 1);
}
