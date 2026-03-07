NTSTATUS __stdcall ExInitializeZone(PZONE_HEADER Zone, ULONG BlockSize, PVOID InitialSegment, ULONG InitialSegmentSize)
{
  struct _SINGLE_LIST_ENTRY *v5; // r10
  ULONG v6; // r9d
  struct _SINGLE_LIST_ENTRY *v7; // r8
  ULONG i; // ecx
  struct _SINGLE_LIST_ENTRY *v9; // rax

  if ( (BlockSize & 7) != 0 || ((unsigned __int8)InitialSegment & 7) != 0 || BlockSize > InitialSegmentSize )
    return -1073741811;
  v5 = 0LL;
  Zone->SegmentList.Next = (struct _SINGLE_LIST_ENTRY *)InitialSegment;
  Zone->BlockSize = BlockSize;
  v6 = InitialSegmentSize - BlockSize;
  *(_QWORD *)InitialSegment = 0LL;
  *((_QWORD *)InitialSegment + 1) = 0LL;
  v7 = (struct _SINGLE_LIST_ENTRY *)((char *)InitialSegment + 16);
  Zone->FreeList.Next = 0LL;
  for ( i = 16; i <= v6; v5 = v9 )
  {
    v7->Next = v5;
    v9 = v7;
    Zone->FreeList.Next = v7;
    i += BlockSize;
    v7 = (struct _SINGLE_LIST_ENTRY *)((char *)v7 + BlockSize);
  }
  Zone->TotalSegmentSize = i;
  return 0;
}
