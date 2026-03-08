/*
 * XREFs of ?CitpContextFlush@@YAJPEAU_CIT_IMPACT_CONTEXT@@I@Z @ 0x1C00B03A4
 * Callers:
 *     CitProcessCallout @ 0x1C006F63C (CitProcessCallout.c)
 *     CitDisplayPowerChange @ 0x1C00B00A4 (CitDisplayPowerChange.c)
 *     ?CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z @ 0x1C00B0358 (-CitpLogoff@@YAXPEAU_CIT_IMPACT_CONTEXT@@@Z.c)
 *     ?CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z @ 0x1C02728BC (-CitEtwEnableCallback@@YAXPEBU_GUID@@I_K@Z.c)
 *     ?CitpResetTracking@@YAJXZ @ 0x1C02734F8 (-CitpResetTracking@@YAJXZ.c)
 * Callees:
 *     ?CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z @ 0x1C00871BC (-CitpInteractionSummariesFlush@@YAXPEAU_CIT_IMPACT_CONTEXT@@_N@Z.c)
 *     ?CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagSHELL_INPUT_USAGE_DATA_INFO@@@Z @ 0x1C00B0564 (-CitpSetForegroundProcess@@YAHPEAU_CIT_IMPACT_CONTEXT@@IPEAUtagPROCESSINFO@@PEAUtagWND@@PEAUtagS.c)
 */

__int64 __fastcall CitpContextFlush(struct _CIT_IMPACT_CONTEXT *a1, unsigned int a2)
{
  struct tagPROCESSINFO *v2; // rdi

  v2 = (struct tagPROCESSINFO *)*((_QWORD *)a1 + 15);
  if ( v2 )
  {
    CitpSetForegroundProcess(a1, a2, 0LL, 0LL, 0LL);
    CitpSetForegroundProcess(a1, a2, v2, 0LL, 0LL);
  }
  CitpInteractionSummariesFlush(a1, 0);
  return 0LL;
}
