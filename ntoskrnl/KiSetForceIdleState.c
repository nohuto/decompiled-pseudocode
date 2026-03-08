/*
 * XREFs of KiSetForceIdleState @ 0x14057AE14
 * Callers:
 *     KiUpdateTime @ 0x14022BD80 (KiUpdateTime.c)
 *     KiCheckAndRearmForceIdle @ 0x1403026FC (KiCheckAndRearmForceIdle.c)
 *     KeClearForceIdle @ 0x14057A720 (KeClearForceIdle.c)
 *     KeSetForceIdle @ 0x14057A814 (KeSetForceIdle.c)
 *     KiForceIdleStartDpcRoutine @ 0x14057A9E0 (KiForceIdleStartDpcRoutine.c)
 *     KiForceIdleStopDpcRoutine @ 0x14057AAA0 (KiForceIdleStopDpcRoutine.c)
 *     KiResetForceIdle @ 0x14057ACCC (KiResetForceIdle.c)
 * Callees:
 *     PoTraceForceIdleStateChange @ 0x14058ED24 (PoTraceForceIdleStateChange.c)
 */

__int64 __fastcall KiSetForceIdleState(unsigned int a1)
{
  unsigned int v1; // ebx

  v1 = KiForceIdleState;
  KiForceIdleState = a1;
  PoTraceForceIdleStateChange(v1, a1);
  return v1;
}
