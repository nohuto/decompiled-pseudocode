/*
 * XREFs of HUBIDLE_CancelIdle @ 0x1C003EFC0
 * Callers:
 *     <none>
 * Callees:
 *     HUBIDLE_AddEvent @ 0x1C003EAB4 (HUBIDLE_AddEvent.c)
 */

__int64 __fastcall HUBIDLE_CancelIdle(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx

  v2 = *(_QWORD *)(a1 + 64);
  IoReleaseCancelSpinLock(*(_BYTE *)(a2 + 69));
  return HUBIDLE_AddEvent(v2 + 72, 6002, 0LL);
}
