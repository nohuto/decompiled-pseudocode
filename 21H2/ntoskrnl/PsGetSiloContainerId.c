/*
 * XREFs of PsGetSiloContainerId @ 0x140905C80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetSiloContainerId(__int64 a1)
{
  return (a1 + 1240) & -(__int64)(a1 != 0);
}
