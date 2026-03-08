/*
 * XREFs of HUBPSM20_StartingDebounceTimerOnResumeFromD3Cold @ 0x1C0012E00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBPSM20_StartingDebounceTimerOnResumeFromD3Cold(__int64 a1)
{
  ExSetTimer(*(_QWORD *)(*(_QWORD *)(a1 + 960) + 1312LL), -1000000LL, 0LL, 0LL);
  return 3013LL;
}
