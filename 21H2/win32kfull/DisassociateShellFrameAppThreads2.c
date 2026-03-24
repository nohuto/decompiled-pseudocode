/*
 * XREFs of DisassociateShellFrameAppThreads2 @ 0x1C01D2D94
 * Callers:
 *     NtUserAttachThreadInput @ 0x1C00114F0 (NtUserAttachThreadInput.c)
 *     xxxDestroyWindow @ 0x1C007DCA0 (xxxDestroyWindow.c)
 * Callees:
 *     <none>
 */

void __fastcall DisassociateShellFrameAppThreads2(struct _LIST_ENTRY *a1, __int64 a2)
{
  struct _LIST_ENTRY *i; // rcx
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *Blink; // rdx

  for ( i = gShellFrameAppThreadsAssociationList.Flink; i != &gShellFrameAppThreadsAssociationList; i = i->Flink )
  {
    if ( i[1].Flink == a1 && i[1].Blink == (struct _LIST_ENTRY *)a2 )
      goto LABEL_7;
  }
  i = 0LL;
LABEL_7:
  *(_DWORD *)(a2 + 1232) &= ~0x80000u;
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
