/*
 * XREFs of MiFreeClonePool @ 0x14055A800
 * Callers:
 *     MiProcessDereferenceList @ 0x14038746C (MiProcessDereferenceList.c)
 *     MiDereferenceSegmentThread @ 0x1403BCDD0 (MiDereferenceSegmentThread.c)
 *     MiDeletePartitionResources @ 0x140561858 (MiDeletePartitionResources.c)
 * Callees:
 *     RtlpInterlockedPopEntrySList @ 0x140406FB0 (RtlpInterlockedPopEntrySList.c)
 *     MiUnlockPagedAddress @ 0x140536930 (MiUnlockPagedAddress.c)
 *     ExFreePoolWithTag @ 0x1409B4140 (ExFreePoolWithTag.c)
 */

PSLIST_ENTRY __fastcall MiFreeClonePool(_SLIST_HEADER *a1)
{
  _SLIST_HEADER *v1; // rbp
  __int64 v2; // rdi
  unsigned __int64 v3; // rsi
  PSLIST_ENTRY result; // rax
  PSLIST_ENTRY v5; // rbx

  v1 = a1 + 115;
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
