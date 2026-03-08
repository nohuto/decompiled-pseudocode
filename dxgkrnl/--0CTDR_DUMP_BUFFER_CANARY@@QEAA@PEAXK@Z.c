/*
 * XREFs of ??0CTDR_DUMP_BUFFER_CANARY@@QEAA@PEAXK@Z @ 0x1C03086CC
 * Callers:
 *     ?TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C03092A0 (-TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     ?TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0309D90 (-TdrCollectDbgInfoStage2@@YAXPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 * Callees:
 *     <none>
 */

CTDR_DUMP_BUFFER_CANARY *__fastcall CTDR_DUMP_BUFFER_CANARY::CTDR_DUMP_BUFFER_CANARY(
        CTDR_DUMP_BUFFER_CANARY *this,
        char *a2,
        int a3)
{
  char *v3; // rdx

  *(_QWORD *)this = 0LL;
  if ( a2 )
  {
    v3 = &a2[a3];
    *(_QWORD *)this = v3;
    *(_DWORD *)v3 = 5394245;
  }
  return this;
}
