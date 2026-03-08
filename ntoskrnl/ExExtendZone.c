/*
 * XREFs of ExExtendZone @ 0x140609C80
 * Callers:
 *     ExInterlockedExtendZone @ 0x140609D70 (ExInterlockedExtendZone.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ExExtendZone(PZONE_HEADER Zone, PVOID Segment, ULONG SegmentSize)
{
  struct _SINGLE_LIST_ENTRY *v4; // r9
  ULONG v5; // eax
  ULONG v6; // edx
  __int64 BlockSize; // rcx

  if ( ((unsigned __int8)Segment & 7) != 0 || (SegmentSize & 7) != 0 || Zone->BlockSize > SegmentSize )
    return -1073741823;
  v4 = (struct _SINGLE_LIST_ENTRY *)((char *)Segment + 16);
  *(_QWORD *)Segment = Zone->SegmentList.Next;
  v5 = SegmentSize - Zone->BlockSize;
  Zone->SegmentList.Next = (struct _SINGLE_LIST_ENTRY *)Segment;
  v6 = 16;
  if ( v5 >= 0x10 )
  {
    do
    {
      v4->Next = (struct _SINGLE_LIST_ENTRY *)Zone->FreeList;
      BlockSize = Zone->BlockSize;
      Zone->FreeList.Next = v4;
      v6 += BlockSize;
      v4 = (struct _SINGLE_LIST_ENTRY *)((char *)v4 + BlockSize);
    }
    while ( v6 <= SegmentSize - (unsigned int)BlockSize );
  }
  Zone->TotalSegmentSize += v6;
  return 0;
}
