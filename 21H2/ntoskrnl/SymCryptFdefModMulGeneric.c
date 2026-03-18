/*
 * XREFs of SymCryptFdefModMulGeneric @ 0x14040C320
 * Callers:
 *     SymCryptFdefModInvGeneric @ 0x14040BDF0 (SymCryptFdefModInvGeneric.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1403A7020 (xHalTimerWatchdogStop.c)
 *     SymCryptFdefRawDivMod @ 0x14040B1B0 (SymCryptFdefRawDivMod.c)
 *     SymCryptFdefRawMul @ 0x14040B4A4 (SymCryptFdefRawMul.c)
 */

void __fastcall SymCryptFdefModMulGeneric(__int64 a1, int a2, int a3, void *a4, char *Src)
{
  int v5; // r15d

  v5 = *(_DWORD *)(a1 + 4);
  xHalTimerWatchdogStop();
  SymCryptFdefRawMul(a2, v5, a3, v5, (__int64)Src);
  SymCryptFdefRawDivMod(Src, 2 * v5, (_DWORD *)(a1 + 64), 0LL, a4, &Src[v5 << 7]);
}
