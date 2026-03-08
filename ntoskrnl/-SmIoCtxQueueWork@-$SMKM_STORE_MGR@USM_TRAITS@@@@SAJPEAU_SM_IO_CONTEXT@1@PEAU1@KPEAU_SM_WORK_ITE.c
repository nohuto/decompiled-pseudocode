/*
 * XREFs of ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x1405BDBDC
 * Callers:
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x14045C966 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@K@Z @ 0x1405BCB34 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_WORK_ITEM@1.c)
 *     ?SmpPageEvict@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z @ 0x1405C0914 (-SmpPageEvict@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@KPEAX@Z.c)
 * Callees:
 *     KeQueryPriorityThread @ 0x140240EA0 (KeQueryPriorityThread.c)
 *     PsGetIoPriorityThread @ 0x1402832C0 (PsGetIoPriorityThread.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140356594 (SmKmStoreRefFromStoreIndex.c)
 *     _guard_dispatch_icall @ 0x1404211D0 (_guard_dispatch_icall.c)
 *     SmFpFree @ 0x14045DA58 (SmFpFree.c)
 *     ?SmAsyncReadQueueInsert@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_ASYNC_READ_QUEUE@1@PEAU_SM_ASYNC_DIRECT_READ_CTX@1@K@Z @ 0x1405BC0A4 (-SmAsyncReadQueueInsert@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_ASYNC_READ_QUEUE@1@PEAU_.c)
 *     ?SmIoCtxPrepareToQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_SM_QUEUE_CONTEXT@1@@Z @ 0x1405BDA4C (-SmIoCtxPrepareToQueue@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WOR.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x1405C0460 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     ?SmWorkItemFreeResource@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@@Z @ 0x1405C08CC (-SmWorkItemFreeResource@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_C.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxQueueWork(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4)
{
  int v4; // r15d
  __int16 v6; // r14
  int v9; // r15d
  int v10; // ebx
  void (__fastcall *v11)(__int64, __int64 *, __int64); // rax
  __int64 v12; // r9
  struct _KTHREAD *v13; // r9
  __int64 v14; // r10
  unsigned __int64 *v15; // rcx
  KPRIORITY PriorityThread; // eax
  unsigned __int64 *v17; // r9
  _QWORD *v18; // rax
  __int64 v19; // r9
  struct _MDL *v20; // r9
  unsigned __int64 *v21; // r9
  __int64 v23; // [rsp+30h] [rbp-30h] BYREF
  int v24; // [rsp+38h] [rbp-28h]
  __int16 v25; // [rsp+3Ch] [rbp-24h]
  __int16 v26; // [rsp+3Eh] [rbp-22h]
  unsigned __int64 *v27; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 *v28; // [rsp+48h] [rbp-18h]
  __int128 v29; // [rsp+50h] [rbp-10h]

  v4 = *(_DWORD *)a4;
  v28 = (unsigned __int64 *)&v27;
  v6 = a3;
  v27 = 0LL;
  v29 = 0LL;
  v9 = v4 & 7;
  v10 = SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxPrepareToQueue((__int64)a1, a2, a3, a4, (__int64)&v27);
  if ( v10 < 0 )
  {
    v20 = (struct _MDL *)v29;
  }
  else
  {
    if ( v9 != 2 )
      goto LABEL_13;
    v11 = *(void (__fastcall **)(__int64, __int64 *, __int64))(a2 + 1864);
    if ( v11 )
    {
      v23 = *a1;
      v24 = *(_DWORD *)(a4 + 24);
      v26 = 0;
      v25 = v6;
      v11(a2, &v23, 5LL);
    }
    if ( (*(_BYTE *)(*(_QWORD *)SmKmStoreRefFromStoreIndex(a2, v6 & 0x3FF) + 6021LL) & 4) != 0
      && (*(_DWORD *)(a4 + 8) & 0x4000000) != 0
      && (int)PsGetIoPriorityThread(v12) >= 2 )
    {
      if ( v28 != (unsigned __int64 *)&v27 )
      {
        v15 = v27;
        v27 = (unsigned __int64 *)(*v27 & 0xFFFFFFFFFFFFFFF8uLL);
        if ( v15 == v28 )
        {
          v27 = 0LL;
          v28 = (unsigned __int64 *)&v27;
        }
        else
        {
          *v28 = *v28 & 7 | (8 * (*v28 >> 3) - 8);
        }
      }
      *(_OWORD *)(a4 + 40) = 0LL;
      *(_OWORD *)(a4 + 56) = 0LL;
      *(_OWORD *)(a4 + 72) = 0LL;
      *(_QWORD *)(a4 + 72) = v14;
      *(_QWORD *)(a4 + 80) = a2 + 464;
      PriorityThread = KeQueryPriorityThread(v13);
      SMKM_STORE_MGR<SM_TRAITS>::SmAsyncReadQueueInsert(a2, a2 + 464, a4 + 40, PriorityThread);
    }
    else
    {
LABEL_13:
      if ( v28 != (unsigned __int64 *)&v27 )
      {
        v17 = v27;
        v27 = (unsigned __int64 *)(*v27 & 0xFFFFFFFFFFFFFFF8uLL);
        if ( v17 == v28 )
        {
          v27 = 0LL;
          v28 = (unsigned __int64 *)&v27;
        }
        else
        {
          *v28 = *v28 & 7 | (8 * (*v28 >> 3) - 8);
        }
      }
      v18 = (_QWORD *)SmKmStoreRefFromStoreIndex(a2, v6 & 0x3FF);
      SMKM_STORE<SM_TRAITS>::SmStWorkItemQueue(*v18, v19, 0LL);
    }
    v20 = 0LL;
    *(_QWORD *)&v29 = 0LL;
    v10 = 0;
  }
  if ( v20 )
    SmFpFree(a2 + 1544, 5, -1LL, v20);
  while ( v28 != (unsigned __int64 *)&v27 )
  {
    v21 = v27;
    v27 = (unsigned __int64 *)(*v27 & 0xFFFFFFFFFFFFFFF8uLL);
    if ( v21 == v28 )
    {
      v27 = 0LL;
      v28 = (unsigned __int64 *)&v27;
    }
    else
    {
      *v28 = *v28 & 7 | (8 * (*v28 >> 3) - 8);
    }
    SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFreeResource(a2, v21, -1LL);
  }
  return (unsigned int)v10;
}
