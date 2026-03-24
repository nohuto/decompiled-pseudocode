/*
 * XREFs of SmKmStoreDeleteWhenEmpty @ 0x140320DB8
 * Callers:
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x1402630AC (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     SmpKeyedStoreCreate @ 0x1406FB6E4 (SmpKeyedStoreCreate.c)
 *     SmProcessDeleteNotification @ 0x140929AE4 (SmProcessDeleteNotification.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14023E0C0 (ExQueueWorkItem.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140267428 (SmKmStoreRefFromStoreIndex.c)
 *     KeWaitForSingleObject @ 0x1402C5E00 (KeWaitForSingleObject.c)
 *     ?StDmGetSpaceStats@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z @ 0x140311650 (-StDmGetSpaceStats@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z.c)
 */

__int64 __fastcall SmKmStoreDeleteWhenEmpty(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  unsigned int v5; // ebx
  int v6; // r9d
  __int64 v8; // r10
  int v9; // r11d
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+30h] [rbp-50h] BYREF
  __int64 Object; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v12[3]; // [rsp+58h] [rbp-28h] BYREF
  int v13; // [rsp+70h] [rbp-10h]
  int v14; // [rsp+74h] [rbp-Ch]
  int v15; // [rsp+A8h] [rbp+28h] BYREF
  int v16; // [rsp+B0h] [rbp+30h] BYREF

  v4 = SmKmStoreRefFromStoreIndex(a1, *(_DWORD *)(a2 + 6016) & 0x3FF);
  v5 = 0;
  if ( v6 )
  {
    _InterlockedOr8((volatile signed __int8 *)(v4 + 34), 1u);
  }
  else if ( (*(_BYTE *)(v4 + 34) & 1) == 0 )
  {
    return v5;
  }
  v15 = 0;
  v16 = 0;
  ST_STORE<SM_TRAITS>::StDmGetSpaceStats(a2 + 80, &v15, &v16);
  if ( (unsigned int)(v16 + 1023) < 0x400 )
  {
    _m_prefetchw((const void *)(v8 + 34));
    if ( (_InterlockedOr8((volatile signed __int8 *)(v8 + 34), 2u) & 2) == 0 )
    {
      WorkItem.List.Blink = 0LL;
      v12[1] = v12;
      Object = 393216LL;
      v12[0] = v12;
      v14 = 0;
      WorkItem.WorkerRoutine = (void (__fastcall *)(void *))SmKmStoreDeleteWhenEmptyWorker;
      WorkItem.Parameter = &WorkItem;
      v12[2] = a1;
      v13 = v9;
      WorkItem.List.Flink = 0LL;
      ExQueueWorkItem(&WorkItem, DelayedWorkQueue);
      KeWaitForSingleObject(&Object, WrKernel, 0, 0, 0LL);
      return 1;
    }
  }
  return v5;
}
