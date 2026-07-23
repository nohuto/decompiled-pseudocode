/*
 * XREFs of PpmPerfRegisterHvCap @ 0x1408F6A80
 * Callers:
 *     <none>
 * Callees:
 *     HvlGetLpIndexFromApicId @ 0x1404F20E0 (HvlGetLpIndexFromApicId.c)
 *     HvlConfigurePerfStateCap @ 0x1404F7AD0 (HvlConfigurePerfStateCap.c)
 */

__int64 __fastcall PpmPerfRegisterHvCap(__int64 a1)
{
  int LpIndexFromApicId; // ecx
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]

  if ( (HvlEnlightenments & 8) == 0 )
    return 3221225659LL;
  LpIndexFromApicId = HvlGetLpIndexFromApicId(*(unsigned int *)(a1 + 4));
  if ( LpIndexFromApicId == -1 )
    return 3221225485LL;
  v4 = *(_QWORD *)(a1 + 8);
  v5 = *(_DWORD *)(a1 + 16);
  return HvlConfigurePerfStateCap(LpIndexFromApicId, &v4);
}
