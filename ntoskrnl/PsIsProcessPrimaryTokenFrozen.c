/*
 * XREFs of PsIsProcessPrimaryTokenFrozen @ 0x1408A11B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall PsIsProcessPrimaryTokenFrozen(__int64 a1)
{
  return (*(_DWORD *)(a1 + 1120) & 0x8000) != 0;
}
