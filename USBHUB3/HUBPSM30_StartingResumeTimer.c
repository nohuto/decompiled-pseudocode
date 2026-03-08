/*
 * XREFs of HUBPSM30_StartingResumeTimer @ 0x1C0012720
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBPSM30_StartingResumeTimer(__int64 a1)
{
  ExSetTimer(*(_QWORD *)(*(_QWORD *)(a1 + 960) + 1312LL), -5000000LL, 0LL, 0LL);
  return 3013LL;
}
