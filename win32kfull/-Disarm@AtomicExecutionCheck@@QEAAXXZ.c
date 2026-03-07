void __fastcall AtomicExecutionCheck::Disarm(AtomicExecutionCheck *this)
{
  __int64 CurrentThreadWin32Thread; // rax

  if ( *(_BYTE *)this )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(this);
    --*(_DWORD *)(CurrentThreadWin32Thread + 48);
    *(_BYTE *)this = 0;
  }
}
