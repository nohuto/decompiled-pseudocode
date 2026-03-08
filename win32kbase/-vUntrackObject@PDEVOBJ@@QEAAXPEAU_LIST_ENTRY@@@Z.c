/*
 * XREFs of ?vUntrackObject@PDEVOBJ@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0182E20
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C00219D4 (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     EngAcquireSemaphore @ 0x1C004B690 (EngAcquireSemaphore.c)
 */

void __fastcall PDEVOBJ::vUntrackObject(PDEVOBJ *this, struct _LIST_ENTRY *a2)
{
  struct _LIST_ENTRY **v4; // rcx
  struct _LIST_ENTRY *i; // rax
  struct _LIST_ENTRY *Flink; // rax
  struct _LIST_ENTRY *Blink; // rcx
  HSEMAPHORE v8; // [rsp+48h] [rbp+10h] BYREF

  if ( a2->Flink == a2 )
    goto LABEL_11;
  v8 = *(HSEMAPHORE *)(*(_QWORD *)(SGDGetSessionState(this) + 24) + 8LL);
  EngAcquireSemaphore(v8);
  v4 = (struct _LIST_ENTRY **)(*(_QWORD *)this + 3536LL);
  for ( i = *v4; i != (struct _LIST_ENTRY *)v4; i = i->Flink )
  {
    if ( i == a2 )
      goto LABEL_7;
  }
  if ( i != a2 )
LABEL_11:
    KeBugCheckEx(0x164u, 0x2EuLL, 0LL, 0LL, 0LL);
LABEL_7:
  Flink = a2->Flink;
  if ( a2->Flink->Blink != a2 || (Blink = a2->Blink, Blink->Flink != a2) )
    __fastfail(3u);
  Blink->Flink = Flink;
  Flink->Blink = Blink;
  a2->Blink = a2;
  a2->Flink = a2;
  SEMOBJ::vUnlock((PERESOURCE *)&v8);
}
