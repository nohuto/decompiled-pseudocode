/*
 * XREFs of HUBPSM30_CheckingIfParentHubIsArmedForWake @ 0x1C0013D20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBPSM30_CheckingIfParentHubIsArmedForWake(__int64 a1)
{
  return (*(_DWORD *)(**(_QWORD **)(a1 + 960) + 40LL) & 0x200) != 0 ? 3089 : 3005;
}
