/*
 * XREFs of SymCryptFdefModElementToIntGeneric @ 0x140403E04
 * Callers:
 *     SymCryptModElementToInt @ 0x1403F919C (SymCryptModElementToInt.c)
 *     SymCryptFdefModInvGeneric @ 0x140403E80 (SymCryptFdefModInvGeneric.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14036DD70 (xHalTimerWatchdogStop.c)
 *     SymCryptWipe @ 0x1403F5EA8 (SymCryptWipe.c)
 *     memmove @ 0x140435100 (memmove.c)
 */

void __fastcall SymCryptFdefModElementToIntGeneric(__int64 a1, const void *a2, __int64 a3)
{
  memmove((void *)(a3 + 32), a2, (unsigned int)(*(_DWORD *)(a1 + 4) << 6));
  SymCryptWipe(
    a3 + 32 + 4LL * (unsigned int)(16 * *(_DWORD *)(a1 + 4)),
    (unsigned int)((*(_DWORD *)(a3 + 4) - *(_DWORD *)(a1 + 4)) << 6));
  xHalTimerWatchdogStop();
}
