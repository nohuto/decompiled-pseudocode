/*
 * XREFs of SepCleanupMarkedForDeletionEntries @ 0x140206780
 * Callers:
 *     SepAddLuidToIndexEntry @ 0x140672348 (SepAddLuidToIndexEntry.c)
 * Callees:
 *     SepGetSingletonEntryFromIndexNumber @ 0x1402058C0 (SepGetSingletonEntryFromIndexNumber.c)
 *     RtlEnumerateEntryHashTable @ 0x140206880 (RtlEnumerateEntryHashTable.c)
 *     RtlRemoveEntryHashTable @ 0x1402069A0 (RtlRemoveEntryHashTable.c)
 *     RtlEndEnumerationHashTable @ 0x140206B00 (RtlEndEnumerationHashTable.c)
 *     RtlInitEnumerationHashTable @ 0x140206B50 (RtlInitEnumerationHashTable.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x14028AB90 (AuthzBasepFreeSecurityAttributesList.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14030F700 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14034FBE0 (ExAcquireSpinLockExclusive.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void SepCleanupMarkedForDeletionEntries()
{
  struct _RTL_DYNAMIC_HASH_TABLE *v0; // rsi
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
  struct _RTL_DYNAMIC_HASH_TABLE_ENUMERATOR Enumerator; // [rsp+20h] [rbp-38h] BYREF

  memset(&Enumerator, 0, sizeof(Enumerator));
  v0 = *(struct _RTL_DYNAMIC_HASH_TABLE **)(SeLuidToIndexMapping + 8);
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
          AuthzBasepFreeSecurityAttributesList();
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
