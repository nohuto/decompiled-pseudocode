/*
 * XREFs of SymCryptFdefModElementToIntGeneric @ 0x1403FE8E4
 * Callers:
 *     SymCryptModElementToInt @ 0x1403F3C7C (SymCryptModElementToInt.c)
 *     SymCryptFdefModInvGeneric @ 0x1403FE960 (SymCryptFdefModInvGeneric.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1403023F0 (xHalTimerWatchdogStop.c)
 *     SymCryptWipe @ 0x1403F0988 (SymCryptWipe.c)
 *     memmove @ 0x14042CCC0 (memmove.c)
 */

void __fastcall SymCryptFdefModElementToIntGeneric(__int64 a1, const void *a2, __int64 a3)
{
  memmove((void *)(a3 + 32), a2, (unsigned int)(*(_DWORD *)(a1 + 4) << 6));
  SymCryptWipe(
    a3 + 32 + 4LL * (unsigned int)(16 * *(_DWORD *)(a1 + 4)),
    (unsigned int)((*(_DWORD *)(a3 + 4) - *(_DWORD *)(a1 + 4)) << 6));
  xHalTimerWatchdogStop();
}
