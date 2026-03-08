/*
 * XREFs of SepCleanupMarkedForDeletionEntries @ 0x1402B7F18
 * Callers:
 *     SepAddLuidToIndexEntry @ 0x14070B8C0 (SepAddLuidToIndexEntry.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14024DA40 (ExAcquireSpinLockExclusive.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x1402988C8 (SepGetSingletonEntryFromIndexNumber.c)
 *     RtlEnumerateEntryHashTable @ 0x1402B8050 (RtlEnumerateEntryHashTable.c)
 *     RtlRemoveEntryHashTable @ 0x1402B8170 (RtlRemoveEntryHashTable.c)
 *     RtlEndEnumerationHashTable @ 0x1402B81D0 (RtlEndEnumerationHashTable.c)
 *     RtlInitEnumerationHashTable @ 0x1402B8220 (RtlInitEnumerationHashTable.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x1402B8730 (AuthzBasepFreeSecurityAttributesList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140332B10 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14056B960 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

void SepCleanupMarkedForDeletionEntries()
{
  struct _RTL_DYNAMIC_HASH_TABLE *v0; // rsi
  volatile LONG *SingletonEntryFromIndexNumber; // rax
  volatile LONG *v2; // rdi
  KIRQL v3; // al
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rcx
  unsigned __int64 v7; // rbp
  _BYTE *v8; // rdx
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v9; // rax
  unsigned int *v10; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v14; // eax
  bool v15; // zf
  struct _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator; // [rsp+20h] [rbp-38h] BYREF

  memset(&Enumerator, 0, sizeof(Enumerator));
  v0 = *(struct _RTL_DYNAMIC_HASH_TABLE **)(SeLuidToIndexMapping + 8);
  RtlInitEnumerationHashTable(v0, &Enumerator);
  while ( 1 )
  {
    v9 = RtlEnumerateEntryHashTable(v0, &Enumerator);
    v10 = (unsigned int *)v9;
    if ( !v9 )
      break;
    if ( LOBYTE(v9[2].Linkage.Flink) && RtlRemoveEntryHashTable(v0, v9, 0LL) )
    {
      SingletonEntryFromIndexNumber = (volatile LONG *)SepGetSingletonEntryFromIndexNumber(v10[10]);
      v2 = SingletonEntryFromIndexNumber;
      if ( SingletonEntryFromIndexNumber )
      {
        v3 = ExAcquireSpinLockExclusive(SingletonEntryFromIndexNumber);
        v6 = *((_QWORD *)v2 + 2);
        *((_QWORD *)v2 + 1) = 0LL;
        v7 = v3;
        if ( v6 )
        {
          AuthzBasepFreeSecurityAttributesList(v6, v4, v5);
          ExFreePoolWithTag(*((PVOID *)v2 + 2), 0x74446553u);
          *((_QWORD *)v2 + 2) = 0LL;
        }
        ExReleaseSpinLockExclusiveFromDpcLevel(v2);
        if ( KiIrqlFlags )
        {
          CurrentIrql = KeGetCurrentIrql();
          if ( (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu && (unsigned __int8)v7 <= 0xFu && CurrentIrql >= 2u )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            SchedulerAssist = CurrentPrcb->SchedulerAssist;
            v14 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v7 + 1));
            v15 = (v14 & SchedulerAssist[5]) == 0;
            SchedulerAssist[5] &= v14;
            if ( v15 )
              KiRemoveSystemWorkPriorityKick(CurrentPrcb);
          }
        }
        __writecr8(v7);
      }
      v8 = (_BYTE *)(*(_QWORD *)(SeLuidToIndexMapping + 24) + ((unsigned __int64)v10[10] >> 3));
      *v8 &= ~(1 << (v10[10] & 7));
      ExFreePoolWithTag(v10, 0);
    }
  }
  RtlEndEnumerationHashTable(v0, &Enumerator);
}
