/*
 * XREFs of HUBPSM20_StartingDelayTimerAfterWorkaroundIsEngaged @ 0x1C0012630
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBPSM20_StartingDelayTimerAfterWorkaroundIsEngaged(__int64 a1)
{
  __int64 v1; // rcx

  v1 = *(_QWORD *)(a1 + 960);
  *(_BYTE *)(v1 + 1458) = 1;
  ExSetTimer(*(_QWORD *)(v1 + 1312), -120000LL, 0LL, 0LL);
  return 3013LL;
}
