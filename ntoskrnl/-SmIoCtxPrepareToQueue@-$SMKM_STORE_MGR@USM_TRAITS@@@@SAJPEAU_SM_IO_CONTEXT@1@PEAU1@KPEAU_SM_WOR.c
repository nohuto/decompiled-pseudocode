/*
 * XREFs of ?SmIoCtxPrepareToQueue@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@PEAU_SM_QUEUE_CONTEXT@1@@Z @ 0x1405BDA4C
 * Callers:
 *     ?SmIoCtxQueueWork@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITEM@1@@Z @ 0x1405BDBDC (-SmIoCtxQueueWork@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SM_IO_CONTEXT@1@PEAU1@KPEAU_SM_WORK_ITE.c)
 * Callees:
 *     SmFpAllocate @ 0x14045D93E (SmFpAllocate.c)
 *     SmFpFree @ 0x14045DA58 (SmFpFree.c)
 *     ?SmWorkItemFreeResource@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@@Z @ 0x1405C08CC (-SmWorkItemFreeResource@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_C.c)
 */

__int64 __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmIoCtxPrepareToQueue(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int64 a4,
        __int64 a5)
{
  int v5; // eax
  unsigned __int64 *v6; // r8
  __int64 v7; // rdi
  __int64 v8; // rsi
  unsigned __int64 v9; // rbx
  int v12; // ecx
  BOOL v13; // eax
  unsigned int v14; // r14d
  __int128 v15; // xmm0
  _OWORD *v16; // rdx
  __int128 v18; // [rsp+30h] [rbp-10h] BYREF

  v5 = *(_DWORD *)a4;
  v6 = (unsigned __int64 *)&v18;
  v7 = 0LL;
  *((_QWORD *)&v18 + 1) = &v18;
  *(_QWORD *)&v18 = 0LL;
  v8 = 0LL;
  v9 = a4;
  if ( (v5 & 7) != 2 )
    goto LABEL_9;
  v12 = *(_DWORD *)(a2 + 1856);
  v8 = *(_QWORD *)(a4 + 16);
  if ( (v12 & 2) == 0 )
    goto LABEL_9;
  v13 = 0;
  if ( (v12 & 1) != 0 )
    v13 = *(_DWORD *)(v8 + 40) <= 0x1000u;
  v7 = SmFpAllocate((volatile LONG *)(a2 + 1544), 5, a1, v8, v13);
  if ( v7 )
  {
    v6 = (unsigned __int64 *)*((_QWORD *)&v18 + 1);
LABEL_9:
    *(_QWORD *)v9 = *(_DWORD *)v9 & 7 | ((*v6 & 0xFFFFFFFFFFFFFFF8uLL) + 8);
    *v6 = v9 | *(_DWORD *)v6 & 7;
    *((_QWORD *)&v18 + 1) = v9;
    if ( (__int128 *)v9 != &v18 )
    {
      v15 = v18;
      *(_QWORD *)&v18 = 0LL;
      v9 = (unsigned __int64)&v18;
      *((_QWORD *)&v18 + 1) = &v18;
      *(_OWORD *)a5 = v15;
    }
    if ( v7 )
      *(_QWORD *)(a5 + 16) = v8;
    *(_QWORD *)(a5 + 24) = a1;
    v14 = 0;
    goto LABEL_14;
  }
  v14 = -1073741670;
  while ( 1 )
  {
    v9 = *((_QWORD *)&v18 + 1);
LABEL_14:
    if ( (__int128 *)v9 == &v18 )
      break;
    v16 = (_OWORD *)v18;
    *(_QWORD *)&v18 = *(_QWORD *)v18 & 0xFFFFFFFFFFFFFFF8uLL;
    if ( v16 == (_OWORD *)v9 )
    {
      *(_QWORD *)&v18 = 0LL;
      *((_QWORD *)&v18 + 1) = &v18;
    }
    else
    {
      *(_QWORD *)v9 = *(_QWORD *)v9 & 7LL | (8LL * (*(_QWORD *)v9 >> 3) - 8);
    }
    SMKM_STORE_MGR<SM_TRAITS>::SmWorkItemFreeResource(a2, v16, a1);
  }
  return v14;
}
