/*
 * XREFs of MiFreeClonePool @ 0x14066213C
 * Callers:
 *     MiDereferenceSegmentThread @ 0x1403A2790 (MiDereferenceSegmentThread.c)
 *     MiProcessDereferenceList @ 0x140622C74 (MiProcessDereferenceList.c)
 *     MiDeletePartitionResources @ 0x140656EBC (MiDeletePartitionResources.c)
 * Callees:
 *     MiUnlockPagedAddress @ 0x1402EE5C4 (MiUnlockPagedAddress.c)
 *     RtlpInterlockedPopEntrySList @ 0x140420460 (RtlpInterlockedPopEntrySList.c)
 *     ExFreePoolWithTag @ 0x140AABA50 (ExFreePoolWithTag.c)
 */

PSLIST_ENTRY __fastcall MiFreeClonePool(union _SLIST_HEADER *a1)
{
  union _SLIST_HEADER *v1; // rbp
  __int64 v2; // rdi
  unsigned __int64 v3; // rsi
  PSLIST_ENTRY result; // rax
  PSLIST_ENTRY v5; // rbx

  v1 = a1 + 129;
  while ( 1 )
  {
    result = RtlpInterlockedPopEntrySList(v1);
    v5 = result;
    if ( !result )
      break;
    v2 = *((_QWORD *)&result[1].Next + 1);
    if ( v2 )
    {
      v3 = (unsigned __int64)result;
      do
      {
        MiUnlockPagedAddress(v3);
        v3 += 4096LL;
        --v2;
      }
      while ( v2 );
    }
    ExFreePoolWithTag(v5, 0);
  }
  return result;
}
