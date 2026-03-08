/*
 * XREFs of MiSetActivePfnHeat @ 0x1406522D8
 * Callers:
 *     MmSetPfnListInfo @ 0x140387180 (MmSetPfnListInfo.c)
 *     MiMakeTransitionHeatBatch @ 0x140651CD4 (MiMakeTransitionHeatBatch.c)
 * Callees:
 *     MiSetNonResidentPteHeat @ 0x140287A90 (MiSetNonResidentPteHeat.c)
 */

unsigned __int64 __fastcall MiSetActivePfnHeat(__int64 a1, int a2)
{
  if ( a2 && (*(_BYTE *)(a1 + 34) & 7) != 6 )
    _InterlockedIncrement(&MiTransitionPagesMadeCold);
  return MiSetNonResidentPteHeat((unsigned __int64 *)(a1 + 16), a2);
}
