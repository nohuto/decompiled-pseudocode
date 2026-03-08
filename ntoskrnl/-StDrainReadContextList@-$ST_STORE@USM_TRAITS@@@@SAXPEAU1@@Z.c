/*
 * XREFs of ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402E7464
 * Callers:
 *     ?StCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1402E6DD8 (-StCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1403567C4 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x1405BEF00 (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 * Callees:
 *     RtlpInterlockedFlushSList @ 0x1404204E0 (RtlpInterlockedFlushSList.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall ST_STORE<SM_TRAITS>::StDrainReadContextList(union _SLIST_HEADER *a1)
{
  PSLIST_ENTRY v1; // rbx
  PSLIST_ENTRY v2; // rcx

  v1 = RtlpInterlockedFlushSList(a1 + 253);
  while ( v1 )
  {
    v2 = v1;
    v1 = v1->Next;
    ExFreePoolWithTag(v2, 0);
  }
}
