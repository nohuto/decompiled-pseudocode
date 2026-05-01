/*
 * XREFs of ?RmpActivityHostDelete@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800058A0
 * Callers:
 *     ?RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180018A00 (-RmHamHostStateWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 * Callees:
 *     ?RmpActivityHostCleanupCommonState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180005964 (-RmpActivityHostCleanupCommonState@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPartitionAddRemoveHost@@YAJPEAU_RM_PARTITION@@JK@Z @ 0x1800059B4 (-RmpPartitionAddRemoveHost@@YAJPEAU_RM_PARTITION@@JK@Z.c)
 *     ?RmpActivityHostRemoveFromTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800059E8 (-RmpActivityHostRemoveFromTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpPsmAppFamilyTableTryRemoveActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000694C (-RmpPsmAppFamilyTableTryRemoveActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180047B60 (_guard_dispatch_icall_nop.c)
 *     ?RmpActivityHostRemoveFromRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x18006C018 (-RmpActivityHostRemoveFromRemediationGroup@@YAXPEAU_RM_ACTIVITY_HOST@@E@Z.c)
 */

void __fastcall RmpActivityHostDelete(struct _RM_PARTITION **a1)
{
  struct _RM_PARTITION *v2; // rcx

  if ( a1[178] )
    RmpActivityHostRemoveFromRemediationGroup(a1, 1u);
  if ( a1[107] )
  {
    (*(void (**)(void))(*((_QWORD *)a1[6] + 5) + 176LL))();
    a1[107] = 0LL;
  }
  v2 = a1[132];
  if ( v2 )
  {
    (*(void (__fastcall **)(struct _RM_PARTITION *, _QWORD))(*((_QWORD *)a1[6] + 5) + 192LL))(v2, 0LL);
    (*(void (__fastcall **)(struct _RM_PARTITION *))(*((_QWORD *)a1[6] + 5) + 176LL))(a1[132]);
    a1[132] = 0LL;
  }
  RmpActivityHostRemoveFromTables((struct _RM_ACTIVITY_HOST *)a1);
  RmpPsmAppFamilyTableTryRemoveActivityHost((struct _RM_ACTIVITY_HOST *)a1);
  RmpActivityHostCleanupCommonState((struct _RM_ACTIVITY_HOST *)a1);
  RmpPartitionAddRemoveHost(a1[7], -1, 0);
  RmpObjectRelease(a1);
}
