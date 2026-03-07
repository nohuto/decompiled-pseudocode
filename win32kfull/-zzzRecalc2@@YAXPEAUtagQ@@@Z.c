// write access to const memory has been detected, the output may be wrong!
void __fastcall zzzRecalc2(struct tagQ *a1)
{
  int v2; // r15d
  struct _LIST_ENTRY *RecalcHeadPtiListEntry; // r14
  struct _LIST_ENTRY *Flink; // rdi
  struct tagTHREADINFO *RecalcPtiFromListEntry; // rax
  struct tagQ **v6; // rbp
  _QWORD *i; // rbx
  struct tagQ **v8; // rsi
  struct tagQ *v9; // rax
  char v10; // [rsp+58h] [rbp+10h] BYREF

  ++gdwDeferWinEvent;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v10);
  do
  {
    v2 = 0;
    RecalcHeadPtiListEntry = GetRecalcHeadPtiListEntry();
    Flink = RecalcHeadPtiListEntry->Flink;
    if ( RecalcHeadPtiListEntry->Flink == RecalcHeadPtiListEntry )
      break;
    do
    {
      RecalcPtiFromListEntry = GetRecalcPtiFromListEntry(Flink);
      v6 = (struct tagQ **)RecalcPtiFromListEntry;
      if ( RecalcPtiFromListEntry && *((struct tagQ **)RecalcPtiFromListEntry + 82) == a1 )
      {
        for ( i = (_QWORD *)gpai; i; i = (_QWORD *)*i )
        {
          IsPackedQueueRecalc();
          v8 = (struct tagQ **)i[1];
          if ( v8 == v6 )
            goto LABEL_18;
          if ( (struct tagQ **)i[2] != v6 )
            continue;
          if ( v8 == v6 )
LABEL_18:
            v8 = (struct tagQ **)i[2];
          if ( v8[82] != a1 )
          {
            v9 = tagTHREADINFO::AssignAttachQueue((tagTHREADINFO *)v8, a1);
            if ( v9 )
              zzzDestroyQueue(v9, v8);
            v2 = 1;
          }
        }
      }
      Flink = Flink->Flink;
    }
    while ( Flink != RecalcHeadPtiListEntry );
  }
  while ( v2 );
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v10);
  zzzEndDeferWinEventNotify();
}
