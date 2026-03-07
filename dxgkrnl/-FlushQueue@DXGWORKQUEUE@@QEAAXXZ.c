void __fastcall DXGWORKQUEUE::FlushQueue(PLIST_ENTRY ListHead)
{
  struct _LIST_ENTRY *v1; // rdi
  KSPIN_LOCK *v2; // rdx
  PLIST_ENTRY v3; // rax
  PLIST_ENTRY v4; // rbx

  v1 = ListHead;
  v2 = (KSPIN_LOCK *)&ListHead[1];
  while ( 1 )
  {
    v3 = ExInterlockedRemoveHeadList(ListHead, v2);
    v4 = v3;
    if ( !v3 )
      break;
    ((void (__fastcall *)(struct _LIST_ENTRY *))v3[1].Flink)(v3[1].Blink);
    ExFreePoolWithTag(v4, 0);
    v2 = (KSPIN_LOCK *)&v1[1];
    ListHead = v1;
  }
}
