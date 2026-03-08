/*
 * XREFs of HUBDSM_CheckingIfExitLatencyNeedsToBeDecreased @ 0x1C0024FB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBDSM_CheckingIfExitLatencyNeedsToBeDecreased(__int64 a1)
{
  return *(_WORD *)(*(_QWORD *)(a1 + 960) + 2210LL) < *(_WORD *)(*(_QWORD *)(a1 + 960) + 2208LL) ? 4089 : 4061;
}
