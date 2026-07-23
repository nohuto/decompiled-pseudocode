/*
 * XREFs of SepCleanupMarkedForDeletionEntries @ 0x1402512F4
 * Callers:
 *     SepAddLuidToIndexEntry @ 0x140603C6C (SepAddLuidToIndexEntry.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14021D020 (ExAcquireSpinLockExclusive.c)
 *     SepGetSingletonEntryFromIndexNumber @ 0x140250DC4 (SepGetSingletonEntryFromIndexNumber.c)
 *     RtlEnumerateEntryHashTable @ 0x140251400 (RtlEnumerateEntryHashTable.c)
 *     RtlRemoveEntryHashTable @ 0x140251520 (RtlRemoveEntryHashTable.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x140275910 (AuthzBasepFreeSecurityAttributesList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x1402BC410 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     RtlInitEnumerationHashTable @ 0x14031EB70 (RtlInitEnumerationHashTable.c)
 *     RtlEndEnumerationHashTable @ 0x14031F180 (RtlEndEnumerationHashTable.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x1403F2D04 (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

void SepCleanupMarkedForDeletionEntries()
{
  _RTL_DYNAMIC_HASH_TABLE *v0; // rsi
  volatile LONG *SingletonEntryFromIndexNumber; // rax
  volatile LONG *v2; // rdi
  KIRQL v3; // al
  __int64 v4; // rcx
  unsigned __int64 v5; // rbp
  PRTL_DYNAMIC_HASH_TABLE_ENTRY v6; // rax
  unsigned int *v7; // rbx
  unsigned __int8 CurrentIrql; // al
  struct _KPRCB *CurrentPrcb; // r10
  _DWORD *SchedulerAssist; // r9
  int v11; // eax
  bool v12; // zf
  _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator; // [rsp+20h] [rbp-38h] BYREF

  memset(&Enumerator, 0, sizeof(Enumerator));
  v0 = *(_RTL_DYNAMIC_HASH_TABLE **)(SeLuidToIndexMapping + 8);
  RtlInitEnumerationHashTable(v0, &Enumerator);
  while ( 1 )
  {
    v6 = RtlEnumerateEntryHashTable(v0, &Enumerator);
    v7 = (unsigned int *)v6;
    if ( !v6 )
      break;
    if ( LOBYTE(v6[2].Linkage.Flink) && RtlRemoveEntryHashTable(v0, v6, 0LL) )
    {
      SingletonEntryFromIndexNumber = (volatile LONG *)SepGetSingletonEntryFromIndexNumber(v7[10]);
      v2 = SingletonEntryFromIndexNumber;
      if ( SingletonEntryFromIndexNumber )
      {
        v3 = ExAcquireSpinLockExclusive(SingletonEntryFromIndexNumber);
        v4 = *((_QWORD *)v2 + 2);
        *((_QWORD *)v2 + 1) = 0LL;
        v5 = v3;
        if ( v4 )
        {
          AuthzBasepFreeSecurityAttributesList(v4);
          ExFreePoolWithTag(*((PVOID *)v2 + 2), 0x74446553u);
          *((_QWORD *)v2 + 2) = 0LL;
        }
        ExReleaseSpinLockExclusiveFromDpcLevel(v2);
        if ( KiIrqlFlags )
        {
          if ( (KiIrqlFlags & 1) != 0 )
          {
            CurrentIrql = KeGetCurrentIrql();
            if ( CurrentIrql <= 0xFu && (unsigned __int8)v5 <= 0xFu && CurrentIrql >= 2u )
            {
              CurrentPrcb = KeGetCurrentPrcb();
              SchedulerAssist = CurrentPrcb->SchedulerAssist;
              v11 = ~(unsigned __int16)(-1LL << ((unsigned __int8)v5 + 1));
              v12 = (v11 & SchedulerAssist[5]) == 0;
              SchedulerAssist[5] &= v11;
              if ( v12 )
                KiRemoveSystemWorkPriorityKick(CurrentPrcb);
            }
          }
        }
        __writecr8(v5);
      }
      _bittestandreset(*(signed __int32 **)(SeLuidToIndexMapping + 24), v7[10]);
      ExFreePoolWithTag(v7, 0);
    }
  }
  RtlEndEnumerationHashTable(v0, &Enumerator);
}
