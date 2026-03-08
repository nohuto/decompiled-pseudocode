/*
 * XREFs of HUBDSM_WaitingForTimerAfterSetAddress @ 0x1C0022290
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_WaitingForTimerAfterSetAddress(__int64 a1)
{
  ExSetTimer(*(_QWORD *)(*(_QWORD *)(a1 + 960) + 1544LL), -100000LL, 0LL, 0LL);
  return 1000LL;
}
