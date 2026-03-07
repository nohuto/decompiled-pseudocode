void __fastcall PackAffectedThreadsFromThreadCleanup(tagQ **a1)
{
  _QWORD *v2; // rax
  _QWORD *i; // rdx

  v2 = (_QWORD *)(SGDGetUserSessionState(a1) + 16880);
  for ( i = (_QWORD *)*v2; i != v2; i = (_QWORD *)*i )
  {
    if ( a1 == (tagQ **)i[2] )
    {
      if ( i )
        i[2] = 0LL;
      break;
    }
  }
  if ( tagQ::AreMultipleThreadsAttached(a1[54]) )
    PackAffectedThreadList((const struct tagTHREADINFO *)a1, 0LL);
}
