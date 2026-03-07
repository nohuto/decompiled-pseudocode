void __fastcall vGarbageCollectObjects(__int64 a1)
{
  __int64 v1; // rcx
  __int64 CurrentProcessWin32Process; // rax
  unsigned int i; // ecx
  unsigned int GarbageCollectible; // ebx

  v1 = *(_QWORD *)(SGDGetSessionState(a1) + 24);
  if ( *(_DWORD *)(v1 + 1908) )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v1);
    if ( CurrentProcessWin32Process )
      CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
    if ( (unsigned int)HmgIsProcessCleanupRequired(CurrentProcessWin32Process) )
    {
      for ( i = 0; ; i = GarbageCollectible )
      {
        GarbageCollectible = HmgNextGarbageCollectible(i);
        if ( !GarbageCollectible )
          break;
      }
    }
  }
}
