/*
 * XREFs of SymCryptFdefModMulGeneric @ 0x1403FEE60
 * Callers:
 *     SymCryptFdefModInvGeneric @ 0x1403FE960 (SymCryptFdefModInvGeneric.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1403023F0 (xHalTimerWatchdogStop.c)
 *     SymCryptFdefRawDivMod @ 0x1403FDD28 (SymCryptFdefRawDivMod.c)
 *     SymCryptFdefRawMul @ 0x1403FE01C (SymCryptFdefRawMul.c)
 */

void __fastcall SymCryptFdefModMulGeneric(__int64 a1, int a2, int a3, void *a4, char *Src)
{
  int v5; // r14d

  v5 = *(_DWORD *)(a1 + 4);
  xHalTimerWatchdogStop();
  SymCryptFdefRawMul(a2, v5, a3, v5, (__int64)Src);
  SymCryptFdefRawDivMod(Src, 2 * v5, (_DWORD *)(a1 + 64), 0LL, a4, &Src[v5 << 7]);
}
