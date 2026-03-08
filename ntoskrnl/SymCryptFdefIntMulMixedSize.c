/*
 * XREFs of SymCryptFdefIntMulMixedSize @ 0x1403FD9AC
 * Callers:
 *     SymCryptIntMulMixedSize @ 0x1403F38E4 (SymCryptIntMulMixedSize.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1403023F0 (xHalTimerWatchdogStop.c)
 *     SymCryptWipe @ 0x1403F0988 (SymCryptWipe.c)
 *     SymCryptFdefRawMul @ 0x1403FE01C (SymCryptFdefRawMul.c)
 */

__int64 __fastcall SymCryptFdefIntMulMixedSize(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // esi
  int v5; // r14d
  int v6; // r15d
  int v7; // ebx
  int v8; // edi
  __int64 result; // rax

  v3 = *(_DWORD *)(a3 + 4);
  v5 = *(_DWORD *)(a1 + 4);
  v6 = *(_DWORD *)(a2 + 4);
  v7 = a2;
  v8 = a1;
  xHalTimerWatchdogStop();
  SymCryptFdefRawMul(v8 + 32, v5, v7 + 32, v6, a3 + 32);
  result = (unsigned int)(v6 + v5);
  if ( (unsigned int)result < v3 )
    return SymCryptWipe(a3 + 32 + 4LL * (unsigned int)(16 * result), (v3 - v6 - v5) << 6);
  return result;
}
