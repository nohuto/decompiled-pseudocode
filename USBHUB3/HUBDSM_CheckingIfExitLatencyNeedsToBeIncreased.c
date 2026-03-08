/*
 * XREFs of HUBDSM_CheckingIfExitLatencyNeedsToBeIncreased @ 0x1C0024FE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_CheckingIfExitLatencyNeedsToBeIncreased(__int64 a1)
{
  return *(_WORD *)(*(_QWORD *)(a1 + 960) + 2208LL) < *(_WORD *)(*(_QWORD *)(a1 + 960) + 2210LL) ? 4089 : 4061;
}
