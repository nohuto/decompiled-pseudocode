/*
 * XREFs of MiSetActivePfnHeat @ 0x140654928
 * Callers:
 *     MmSetPfnListInfo @ 0x140389DC0 (MmSetPfnListInfo.c)
 *     MiMakeTransitionHeatBatch @ 0x140654328 (MiMakeTransitionHeatBatch.c)
 * Callees:
 *     MiSetNonResidentPteHeat @ 0x1402D90B0 (MiSetNonResidentPteHeat.c)
 */

unsigned __int64 __fastcall MiSetActivePfnHeat(__int64 a1, int a2)
{
  if ( a2 && (*(_BYTE *)(a1 + 34) & 7) != 6 )
    _InterlockedIncrement(&MiTransitionPagesMadeCold);
  return MiSetNonResidentPteHeat((unsigned __int64 *)(a1 + 16), a2);
}
