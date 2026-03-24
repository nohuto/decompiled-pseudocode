/*
 * XREFs of HvAddToLayoutStats @ 0x140656A84
 * Callers:
 *     HvCheckBin @ 0x140656820 (HvCheckBin.c)
 *     HvCheckHive @ 0x140656ED8 (HvCheckHive.c)
 * Callees:
 *     <none>
 */

void __fastcall HvAddToLayoutStats(__int64 a1, int a2)
{
  *(_DWORD *)(a1 + 8) += a2;
  ++*(_DWORD *)(a1 + 12);
}
