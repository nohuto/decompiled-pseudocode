void __fastcall __noreturn ViPendingWorkerThread(_QWORD *StartContext)
{
  char *v2; // rcx

  while ( 1 )
  {
    KeWaitForSingleObject(StartContext + 2, Executive, 0, 0, 0LL);
    v2 = (char *)StartContext[1];
    ++*((_DWORD *)StartContext + 10);
    ViPendingCompleteAfterWait(v2);
    StartContext[1] = 0LL;
  }
}
