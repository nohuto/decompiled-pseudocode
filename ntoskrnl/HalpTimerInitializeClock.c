/*
 * XREFs of HalpTimerInitializeClock @ 0x1403AC5D0
 * Callers:
 *     HalpTimerInitSystem @ 0x1403776D0 (HalpTimerInitSystem.c)
 *     HalpTimerInitializeClock @ 0x1403AC5D0 (HalpTimerInitializeClock.c)
 * Callees:
 *     HalpSetTimer @ 0x1402CBEE0 (HalpSetTimer.c)
 *     HalpTimerConfigureInterrupt @ 0x140379C34 (HalpTimerConfigureInterrupt.c)
 *     HalpInterruptSetIdtEntry @ 0x140379F10 (HalpInterruptSetIdtEntry.c)
 *     HalpTimerInitializeClock @ 0x1403AC5D0 (HalpTimerInitializeClock.c)
 *     HalpTimerWaitForPhase0Interrupt @ 0x1403AC710 (HalpTimerWaitForPhase0Interrupt.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     HalpTimerUnmapInterrupt @ 0x1405074D0 (HalpTimerUnmapInterrupt.c)
 */

__int64 __fastcall HalpTimerInitializeClock(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR v4; // rbx
  __int64 v5; // r9
  __int64 result; // rax
  __int64 v7; // r9
  __int128 v8; // [rsp+40h] [rbp-18h] BYREF
  unsigned __int64 v9; // [rsp+60h] [rbp+8h] BYREF

  v4 = HalpClockTimer;
  HalpInterruptSetIdtEntry(0xD2u, (int)HalpTimerClockIpiRoutine, 13, a4, -3LL);
  *((_QWORD *)&v8 + 1) = (unsigned __int16)((unsigned int)KiProcessorIndexToNumberMappingTable[0] >> 6);
  *(_QWORD *)&v8 = 1LL << (KiProcessorIndexToNumberMappingTable[0] & 0x3F);
  LODWORD(result) = HalpTimerConfigureInterrupt(v4, 0xD1u, 13, v5, -3LL, 0, &v8, (__int64)HalpTimerClockInterruptStub);
  if ( (int)result < 0 )
    goto LABEL_11;
  if ( HalpAlwaysOnTimer )
  {
    LODWORD(result) = HalpTimerConfigureInterrupt(
                        HalpAlwaysOnTimer,
                        0xD3u,
                        13,
                        v7,
                        -3LL,
                        4u,
                        &v8,
                        (__int64)HalpTimerAlwaysOnClockInterrupt);
    if ( (int)result < 0 )
      goto LABEL_11;
  }
  if ( (*(_DWORD *)(v4 + 224) & 0x50) == 0 )
  {
    LODWORD(result) = -1073741637;
    goto LABEL_11;
  }
  LODWORD(result) = HalpSetTimer(v4, 2, 0x2625AuLL, 1, &v9);
  if ( (int)result < 0 )
    goto LABEL_11;
  if ( (unsigned __int8)HalpTimerWaitForPhase0Interrupt(v4) )
    return 0LL;
  if ( (*(_DWORD *)(v4 + 184) & 0x10) != 0 && (*(_DWORD *)(v4 + 224) &= ~0x400u, (*(_DWORD *)(v4 + 224) & 0xF00) != 0) )
  {
    HalpTimerUnmapInterrupt(v4, 209LL, 0LL, 0LL);
    result = HalpTimerInitializeClock();
  }
  else
  {
    result = 3221225473LL;
  }
  *(_DWORD *)(v4 + 256) = 0;
  HalpTimerLastProblem = 25;
  *(_DWORD *)(v4 + 252) = 25;
  *(_QWORD *)(v4 + 264) = "minkernel\\hals\\lib\\timers\\common\\clockint.c";
  *(_DWORD *)(v4 + 272) = 275;
  if ( (int)result < 0 )
LABEL_11:
    KeBugCheckEx(0x5Cu, 0x110uLL, v4, HalpTimerLastProblem, (int)result);
  return result;
}
