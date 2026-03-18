/*
 * XREFs of SymCryptFdefModElementSetValueUint32Generic @ 0x14040BCF0
 * Callers:
 *     SymCryptModElementSetValueUint32 @ 0x14040106C (SymCryptModElementSetValueUint32.c)
 *     SymCryptFdefModInvGeneric @ 0x14040BDF0 (SymCryptFdefModInvGeneric.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1403A7020 (xHalTimerWatchdogStop.c)
 *     SymCryptWipe @ 0x1403FDDE8 (SymCryptWipe.c)
 *     SymCryptFatal @ 0x14056AF38 (SymCryptFatal.c)
 */

__int64 __fastcall SymCryptFdefModElementSetValueUint32Generic(unsigned int a1, _DWORD *a2, unsigned int *a3)
{
  int v3; // ebx

  v3 = a2[1];
  xHalTimerWatchdogStop();
  if ( a2[19] <= 0x20u && a1 >= a2[32] )
    SymCryptFatal(1937012333LL);
  *a3 = a1;
  return SymCryptWipe((__int64)(a3 + 1), (unsigned int)(v3 << 6) - 4LL);
}
