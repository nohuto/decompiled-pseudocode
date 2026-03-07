__int64 ObpInitStackAndObjectTables()
{
  __int64 Pool2; // rax
  __int64 v1; // rax
  _WORD *v2; // rcx
  int v3; // ebx
  struct _SLIST_ENTRY *v4; // rax
  PSLIST_ENTRY v6; // rbx
  PSLIST_ENTRY v7; // rcx
  void *v8; // rcx

  Pool2 = ExAllocatePool2(64LL, 32904LL, 1951556175LL);
  ObpStackTable = (PVOID)Pool2;
  if ( Pool2 )
  {
    memset((void *)(Pool2 + 136), 255, 0x7FFAuLL);
    v1 = ExAllocatePool2(64LL, 0x20000LL, 1951556175LL);
    v2 = ObpStackTable;
    *((_QWORD *)ObpStackTable + 1) = v1;
    if ( v1 )
    {
      v2[1] = 1024;
      ObpObjectTable = (PVOID)ExAllocatePool2(64LL, 3208LL, 1951556175LL);
      if ( !ObpObjectTable )
      {
LABEL_14:
        v8 = (void *)*((_QWORD *)ObpStackTable + 1);
        if ( v8 )
          ExFreePoolWithTag(v8, 0x7452624Fu);
        ExFreePoolWithTag(ObpStackTable, 0x7452624Fu);
        return 3221225495LL;
      }
      if ( ((unsigned __int8)&ObpWorkItemFreeList & 0xF) != 0 )
        RtlRaiseStatus(-2147483646);
      v3 = 0;
      ObpWorkItemFreeList = 0LL;
      while ( 1 )
      {
        v4 = (struct _SLIST_ENTRY *)ExAllocatePool2(64LL, 176LL, 1951556175LL);
        if ( !v4 )
          break;
        RtlpInterlockedPushEntrySList(&ObpWorkItemFreeList, v4);
        if ( (unsigned int)++v3 >= 0x1F4 )
          return 0LL;
      }
      v6 = RtlpInterlockedFlushSList(&ObpWorkItemFreeList);
      while ( v6 )
      {
        v7 = v6;
        v6 = v6->Next;
        ExFreePoolWithTag(v7, 0x7452624Fu);
      }
    }
    if ( ObpObjectTable )
      ExFreePoolWithTag(ObpObjectTable, 0x7452624Fu);
    goto LABEL_14;
  }
  return 3221225495LL;
}
