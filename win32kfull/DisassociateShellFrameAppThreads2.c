void __fastcall DisassociateShellFrameAppThreads2(struct _LIST_ENTRY *a1, __int64 a2)
{
  struct _LIST_ENTRY *i; // rcx
  struct _LIST_ENTRY *Flink; // rdx
  struct _LIST_ENTRY *Blink; // rax

  for ( i = gShellFrameAppThreadsAssociationList.Flink; i != &gShellFrameAppThreadsAssociationList; i = i->Flink )
  {
    if ( i[1].Flink == a1 && i[1].Blink == (struct _LIST_ENTRY *)a2 )
      goto LABEL_7;
  }
  i = 0LL;
LABEL_7:
  *(_DWORD *)(a2 + 1272) &= ~0x80000u;
  if ( i )
  {
    Flink = i->Flink;
    if ( i->Flink->Blink != i || (Blink = i->Blink, Blink->Flink != i) )
      __fastfail(3u);
    Blink->Flink = Flink;
    Flink->Blink = Blink;
    Win32FreePool(i);
  }
}
