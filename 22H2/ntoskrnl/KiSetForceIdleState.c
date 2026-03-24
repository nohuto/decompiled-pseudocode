/*
 * XREFs of KiSetForceIdleState @ 0x1405236E0
 * Callers:
 *     KiUpdateTime @ 0x1402276F0 (KiUpdateTime.c)
 *     KiCheckAndRearmForceIdle @ 0x140328AEC (KiCheckAndRearmForceIdle.c)
 *     KeClearForceIdle @ 0x140522DB8 (KeClearForceIdle.c)
 *     KeSetForceIdle @ 0x140522EE8 (KeSetForceIdle.c)
 *     KiForceIdleStartDpcRoutine @ 0x1405231F0 (KiForceIdleStartDpcRoutine.c)
 *     KiForceIdleStopDpcRoutine @ 0x140523300 (KiForceIdleStopDpcRoutine.c)
 *     KiResetForceIdle @ 0x140523560 (KiResetForceIdle.c)
 * Callees:
 *     PoTraceForceIdleStateChange @ 0x14056FD20 (PoTraceForceIdleStateChange.c)
 */

__int64 __fastcall KiSetForceIdleState(unsigned int a1)
{
  unsigned int v1; // ebx

  v1 = KiForceIdleState;
  KiForceIdleState = a1;
  PoTraceForceIdleStateChange(v1, a1);
  return v1;
}
