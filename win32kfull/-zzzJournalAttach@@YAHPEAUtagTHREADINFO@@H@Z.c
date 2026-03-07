__int64 __fastcall zzzJournalAttach(struct tagTHREADINFO *a1, int a2)
{
  __int64 result; // rax
  struct tagQ *v5; // r14
  _QWORD **v6; // rsi
  _QWORD *i; // rbx

  if ( a2 )
  {
    result = AllocQueue(a1);
    v5 = (struct tagQ *)result;
    if ( !result )
      return result;
    v6 = (_QWORD **)(*((_QWORD *)a1 + 57) + 168LL);
    for ( i = *v6; i != v6; i = (_QWORD *)*i )
    {
      if ( (*(_DWORD *)(i - 32) & 0x81) == 0 )
        tagTHREADINFO::AssignAttachQueue((tagTHREADINFO *)(i - 93), v5);
    }
  }
  zzzReattachThreads(a2 != 0, 0LL, 0LL);
  return 1LL;
}
