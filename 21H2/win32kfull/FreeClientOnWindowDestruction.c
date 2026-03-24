/*
 * XREFs of FreeClientOnWindowDestruction @ 0x1C01EE720
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FreeClientOnWindowDestruction(struct _LIST_ENTRY *a1)
{
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY *v3; // rsi
  struct _LIST_ENTRY *v4; // rdi
  struct _LIST_ENTRY *v5; // rcx
  struct _LIST_ENTRY *Blink; // rax

  Flink = gPointerDeviceClients.Flink;
  while ( Flink != &gPointerDeviceClients )
  {
    v3 = Flink - 1;
    v4 = Flink;
    Flink = Flink->Flink;
    if ( a1 == v3->Flink )
    {
      HMAssignmentUnlock(v3);
      v5 = v4->Flink;
      if ( v4->Flink->Blink != v4 || (Blink = v4->Blink, Blink->Flink != v4) )
        __fastfail(3u);
      Blink->Flink = v5;
      v5->Blink = Blink;
      Win32FreePool(v3);
    }
  }
}
