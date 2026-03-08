/*
 * XREFs of ?SmDrainSList@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAT_SLIST_HEADER@@K@Z @ 0x1405BC8E4
 * Callers:
 *     MiStoreUpdateMemoryConditions @ 0x1403561BC (MiStoreUpdateMemoryConditions.c)
 *     MiStoreCheckCompleteWriteBatch @ 0x1403AD3F4 (MiStoreCheckCompleteWriteBatch.c)
 *     ?SmCleanup@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1405BC26C (-SmCleanup@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 * Callees:
 *     RtlpInterlockedFlushSList @ 0x1404204E0 (RtlpInterlockedFlushSList.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void __fastcall SMKM_STORE_MGR<SM_TRAITS>::SmDrainSList(union _SLIST_HEADER *a1, int a2)
{
  PSLIST_ENTRY v2; // rbx
  PSLIST_ENTRY v3; // rcx

  if ( a2 || LOWORD(a1->Alignment) )
  {
    v2 = RtlpInterlockedFlushSList(a1);
    while ( v2 )
    {
      v3 = v2;
      v2 = v2->Next;
      ExFreePoolWithTag(v3, 0);
    }
  }
}
