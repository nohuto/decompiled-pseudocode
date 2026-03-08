/*
 * XREFs of ?SmUpdateMemoryConditions@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x140356474
 * Callers:
 *     MiStoreUpdateMemoryConditions @ 0x1403561BC (MiStoreUpdateMemoryConditions.c)
 * Callees:
 *     KeQueryPriorityThread @ 0x140240EA0 (KeQueryPriorityThread.c)
 *     ExReleaseRundownProtection_0 @ 0x14028D330 (ExReleaseRundownProtection_0.c)
 *     SmKmStoreReferenceEx @ 0x140356558 (SmKmStoreReferenceEx.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140356594 (SmKmStoreRefFromStoreIndex.c)
 *     KeSetActualBasePriorityThread @ 0x140357730 (KeSetActualBasePriorityThread.c)
 *     ?SmCompressContextUpdateMemoryCondition@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTEXT@1@W4_SMP_MEMORY_CONDITION@@K@Z @ 0x140358728 (-SmCompressContextUpdateMemoryCondition@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_SM_COMPRESS_CONTE.c)
 *     ?StDmLazyWorkItemQueue@?$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x1405C41BC (-StDmLazyWorkItemQueue@-$ST_STORE@USM_TRAITS@@@@SAKPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmUpdateMemoryConditions(__int64 a1, int a2)
{
  unsigned int i; // esi
  __int64 v5; // rax
  __int64 v6; // rbx
  int v7; // ecx
  __int64 v8; // rax
  KPRIORITY v9; // edi
  KPRIORITY PriorityThread; // eax
  struct _EX_RUNDOWN_REF *v11; // rax

  if ( (*(_DWORD *)(a1 + 1856) & 0x20) != 0 )
    SMKM_STORE_MGR<SM_TRAITS>::SmCompressContextUpdateMemoryCondition((PEX_SPIN_LOCK)(a1 + 1264));
  for ( i = 0; i < 0x400; ++i )
  {
    v5 = SmKmStoreReferenceEx(a1, i);
    v6 = v5;
    if ( v5 )
    {
      *(_BYTE *)(v5 + 6022) = a2;
      v7 = *(unsigned __int8 *)(v5 + 6022);
      v8 = *(unsigned __int8 *)(v5 + 6022);
      if ( v7 == 4 )
        v9 = *(_DWORD *)(v6 + 6736);
      else
        v9 = *((_DWORD *)`SMKM_STORE<SM_TRAITS>::SmStGetPriorityByMemoryCondition'::`2'::PriorityByMemoryCondition + v8);
      PriorityThread = KeQueryPriorityThread(*(PKTHREAD *)(v6 + 6200));
      if ( a2 < 4 )
      {
        if ( PriorityThread != v9 )
          KeSetActualBasePriorityThread(*(_QWORD *)(v6 + 6200));
        if ( a2 <= 0 )
          ST_STORE<SM_TRAITS>::StDmLazyWorkItemQueue(v6 + 80, v6 + 5976);
      }
      else if ( PriorityThread > v9 )
      {
        KeSetActualBasePriorityThread(*(_QWORD *)(v6 + 6200));
      }
      v11 = (struct _EX_RUNDOWN_REF *)SmKmStoreRefFromStoreIndex(a1, *(_DWORD *)(v6 + 6016) & 0x3FF);
      ExReleaseRundownProtection_0(v11 + 1);
    }
  }
}
