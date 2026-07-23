/*
 * XREFs of SmKmStoreDeleteWhenEmpty @ 0x140246174
 * Callers:
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x1402865B4 (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     SmpKeyedStoreCreate @ 0x1406BF194 (SmpKeyedStoreCreate.c)
 *     SmProcessDeleteNotification @ 0x140929BF4 (SmProcessDeleteNotification.c)
 * Callees:
 *     ?StDmGetSpaceStats@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z @ 0x140238150 (-StDmGetSpaceStats@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAK1@Z.c)
 *     SmKmStoreRefFromStoreIndex @ 0x14028A928 (SmKmStoreRefFromStoreIndex.c)
 *     ExQueueWorkItem @ 0x1402E2FA0 (ExQueueWorkItem.c)
 *     KeWaitForSingleObject @ 0x1403504C0 (KeWaitForSingleObject.c)
 */

__int64 __fastcall SmKmStoreDeleteWhenEmpty(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  unsigned int v6; // ebx
  int v7; // r9d
  __int64 v9; // r10
  int v10; // r11d
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+30h] [rbp-50h] BYREF
  __int64 Object; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v13[3]; // [rsp+58h] [rbp-28h] BYREF
  int v14; // [rsp+70h] [rbp-10h]
  int v15; // [rsp+74h] [rbp-Ch]
  int v16; // [rsp+A8h] [rbp+28h] BYREF
  int v17; // [rsp+B0h] [rbp+30h] BYREF

  v5 = SmKmStoreRefFromStoreIndex(a1, *(_DWORD *)(a2 + 6016) & 0x3FF, a3, (unsigned int)a3);
  v6 = 0;
  if ( v7 )
  {
    _InterlockedOr8((volatile signed __int8 *)(v5 + 34), 1u);
  }
  else if ( (*(_BYTE *)(v5 + 34) & 1) == 0 )
  {
    return v6;
  }
  v16 = 0;
  v17 = 0;
  ST_STORE<SM_TRAITS>::StDmGetSpaceStats(a2 + 80, &v16, &v17);
  if ( (unsigned int)(v17 + 1023) < 0x400 )
  {
    _m_prefetchw((const void *)(v9 + 34));
    if ( (_InterlockedOr8((volatile signed __int8 *)(v9 + 34), 2u) & 2) == 0 )
    {
      WorkItem.List.Blink = 0LL;
      v13[1] = v13;
      Object = 393216LL;
      v13[0] = v13;
      v15 = 0;
      WorkItem.WorkerRoutine = (void (__fastcall *)(void *))SmKmStoreDeleteWhenEmptyWorker;
      WorkItem.Parameter = &WorkItem;
      v13[2] = a1;
      v14 = v10;
      WorkItem.List.Flink = 0LL;
      ExQueueWorkItem(&WorkItem, DelayedWorkQueue);
      KeWaitForSingleObject(&Object, WrKernel, 0, 0, 0LL);
      return 1;
    }
  }
  return v6;
}
