/*
 * XREFs of SymCryptFdefModSetRandomGeneric @ 0x14040C7CC
 * Callers:
 *     SymCryptModSetRandom @ 0x140401244 (SymCryptModSetRandom.c)
 *     SymCryptFdefModInvGeneric @ 0x14040BDF0 (SymCryptFdefModInvGeneric.c)
 * Callees:
 *     xHalTimerWatchdogStop @ 0x1403A7020 (xHalTimerWatchdogStop.c)
 *     SymCryptWipe @ 0x1403FDDE8 (SymCryptWipe.c)
 *     SymCryptFdefRawAddUint32 @ 0x14040B17C (SymCryptFdefRawAddUint32.c)
 *     SymCryptFdefRawIsLessThan @ 0x14040B404 (SymCryptFdefRawIsLessThan.c)
 *     SymCryptFdefRawSubUint32 @ 0x14040B65C (SymCryptFdefRawSubUint32.c)
 *     SymCryptFatal @ 0x14056AF38 (SymCryptFatal.c)
 *     SymCryptCallbackRandom @ 0x140656BC4 (SymCryptCallbackRandom.c)
 */

void __fastcall __noreturn SymCryptFdefModSetRandomGeneric(int *a1, __int64 a2, char a3, _DWORD *a4, __int64 a5)
{
  int v5; // r14d
  _DWORD *v6; // r12
  int v11; // edi
  BOOL v12; // ebx
  unsigned int v13; // ebx

  v5 = a1[1];
  v6 = a1 + 32;
  xHalTimerWatchdogStop();
  if ( (a3 & 3) == 1 )
    SymCryptFatal(1970172784LL);
  if ( (a3 & 1) != 0 )
    v11 = 0;
  else
    v11 = 2 - ((a3 & 2) != 0);
  v12 = (a3 & 4) == 0;
  if ( (unsigned int)a1[19] < 3 && (unsigned int)(v12 + v11) >= *v6 )
    SymCryptFatal(1919837272LL);
  SymCryptFdefRawSubUint32((__int64)v6, v12 + v11, a4, v5);
  v13 = (unsigned int)(a1[19] + 7) >> 3;
  SymCryptWipe(a2 + v13, (v5 << 6) - v13);
  SymCryptCallbackRandom(a2, v13);
}
