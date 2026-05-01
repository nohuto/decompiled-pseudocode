/*
 * XREFs of ?RmpEmptyWorkerCleanup@@YAXPEAU_RM_EMPTY_WORKER_CONTEXT@@@Z @ 0x180027C64
 * Callers:
 *     ?RmpEnforcementInfoInitializeCommon@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000C5A0 (-RmpEnforcementInfoInitializeCommon@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180018A00 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180026480 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpEmptyWorkerCleanup(struct _RM_EMPTY_WORKER_CONTEXT *a1)
{
  __int64 v2; // rcx
  void *v3; // rcx
  void *v4; // rcx

  v2 = *(_QWORD *)a1;
  if ( v2 )
  {
    TpReleaseWork(v2);
    *(_QWORD *)a1 = 0LL;
  }
  v3 = (void *)*((_QWORD *)a1 + 1);
  if ( v3 )
    NtClose(v3);
  v4 = (void *)*((_QWORD *)a1 + 2);
  if ( v4 )
    NtClose(v4);
}
