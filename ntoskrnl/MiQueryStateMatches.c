/*
 * XREFs of MiQueryStateMatches @ 0x1402E23F4
 * Callers:
 *     MiQueryAddressState @ 0x14031B4F0 (MiQueryAddressState.c)
 * Callees:
 *     <none>
 */

bool __fastcall MiQueryStateMatches(__int64 a1, int a2, int a3, int a4, __int16 a5)
{
  int v5; // r9d
  bool result; // al

  result = a2 == *(_DWORD *)(a1 + 32)
        && (!a3 ? (v5 = 0) : (v5 = MmProtectToValue[a3] | a4), v5 == *(_DWORD *)(a1 + 36))
        && a5 == *(_WORD *)(a1 + 20);
  return result;
}
