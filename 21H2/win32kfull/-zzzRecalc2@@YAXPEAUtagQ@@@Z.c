/*
 * XREFs of ?zzzRecalc2@@YAXPEAUtagQ@@@Z @ 0x1C00A924C
 * Callers:
 *     ?zzzRecalcThreadAttachment@@YAXXZ @ 0x1C00A918C (-zzzRecalcThreadAttachment@@YAXXZ.c)
 * Callees:
 *     zzzEndDeferWinEventNotify @ 0x1C0048944 (zzzEndDeferWinEventNotify.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ @ 0x1C00A9230 (-GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ.c)
 *     ?GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z @ 0x1C00A9310 (-GetRecalcPtiFromListEntry@@YAPEAUtagTHREADINFO@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?zzzAddAttachment@@YAXPEAUtagTHREADINFO@@PEAUtagQ@@PEAH@Z @ 0x1C00A935C (-zzzAddAttachment@@YAXPEAUtagTHREADINFO@@PEAUtagQ@@PEAH@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall zzzRecalc2(struct tagQ *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  struct _LIST_ENTRY *RecalcHeadPtiListEntry; // r14
  struct _LIST_ENTRY *Flink; // rdi
  struct tagTHREADINFO *RecalcPtiFromListEntry; // rax
  struct tagTHREADINFO *v7; // rsi
  _QWORD *i; // rbx
  struct tagTHREADINFO *v9; // rcx
  char v10; // [rsp+48h] [rbp+10h] BYREF
  int v11; // [rsp+50h] [rbp+18h] BYREF

  ++gdwDeferWinEvent;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v10);
  do
  {
    v11 = 0;
    RecalcHeadPtiListEntry = GetRecalcHeadPtiListEntry();
    Flink = RecalcHeadPtiListEntry->Flink;
    if ( RecalcHeadPtiListEntry->Flink == RecalcHeadPtiListEntry )
      break;
    do
    {
      RecalcPtiFromListEntry = GetRecalcPtiFromListEntry(Flink);
      v7 = RecalcPtiFromListEntry;
      if ( RecalcPtiFromListEntry && *((struct tagQ **)RecalcPtiFromListEntry + 82) == a1 )
      {
        for ( i = (_QWORD *)gpai; i; i = (_QWORD *)*i )
        {
          v9 = (struct tagTHREADINFO *)i[1];
          if ( v9 == v7 )
          {
            v9 = (struct tagTHREADINFO *)i[2];
          }
          else if ( (struct tagTHREADINFO *)i[2] != v7 )
          {
            continue;
          }
          zzzAddAttachment(v9, a1, &v11);
        }
      }
      Flink = Flink->Flink;
    }
    while ( Flink != RecalcHeadPtiListEntry );
  }
  while ( v11 );
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v10, v2, v3);
  zzzEndDeferWinEventNotify();
}
