/*
 * XREFs of IopIrqScoreRequirement @ 0x1407F91C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IopIrqScoreRequirement(__int64 a1)
{
  return (unsigned int)(*(_DWORD *)(a1 + 12) - *(_DWORD *)(a1 + 8) + 1);
}
