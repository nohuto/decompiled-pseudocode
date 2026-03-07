PVOID __fastcall LogSchedEvent(int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v6; // r8

  v6 = 0LL;
  if ( a2 )
    v6 = *(_QWORD *)(a2 + 408);
  return LogEvent(a1, (__int64)KeGetCurrentThread(), v6, a2, (unsigned int)gReadyQueue, a3, a4, a5);
}
