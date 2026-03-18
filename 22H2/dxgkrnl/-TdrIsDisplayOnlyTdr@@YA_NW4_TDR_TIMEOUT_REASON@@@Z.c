/*
 * XREFs of ?TdrIsDisplayOnlyTdr@@YA_NW4_TDR_TIMEOUT_REASON@@@Z @ 0x1C030F2B4
 * Callers:
 *     ?TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C030E0D0 (-TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     ?TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C030F310 (-TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall TdrIsDisplayOnlyTdr(int a1)
{
  return ((a1 - 4) & 0xFFFFFFFC) == 0 && a1 != 6 || a1 == 8;
}
