/*
 * XREFs of ?CitpInvalidateAllWeakReferences@@YAXXZ @ 0x1C0233DE8
 * Callers:
 *     ?CitpResetTracking@@YAJXZ @ 0x1C0234774 (-CitpResetTracking@@YAJXZ.c)
 * Callees:
 *     ?CitpProcessInfoIsValid@@YA_NPEAU_CIT_PROCESS@@@Z @ 0x1C0033BE4 (-CitpProcessInfoIsValid@@YA_NPEAU_CIT_PROCESS@@@Z.c)
 *     ?CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z @ 0x1C0079224 (-CitpInteractionSummaryDelete@@YAXPEAPEAU_CIT_INTERACTION_SUMMARY@@@Z.c)
 */

void CitpInvalidateAllWeakReferences(void)
{
  __int64 i; // rbx
  __int64 v1; // rcx

  for ( i = gppiList; i; i = *(_QWORD *)(i + 368) )
  {
    if ( CitpProcessInfoIsValid(*(struct _CIT_PROCESS **)(i + 936)) )
    {
      *(_DWORD *)(v1 + 40) = 0;
      CitpInteractionSummaryDelete((struct _CIT_INTERACTION_SUMMARY **)(*(_QWORD *)(i + 936) + 32LL));
    }
  }
}
