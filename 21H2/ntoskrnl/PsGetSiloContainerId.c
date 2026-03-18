/*
 * XREFs of PsGetSiloContainerId @ 0x1409AB790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetSiloContainerId(__int64 a1)
{
  return (a1 + 1432) & -(__int64)(a1 != 0);
}
