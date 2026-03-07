void __fastcall AtomicExecutionCheck::Disarm(AtomicExecutionCheck *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 CurrentThreadWin32Thread; // rax
  __int64 v6; // [rsp+20h] [rbp-8h]

  if ( *(_BYTE *)this )
  {
    CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(this, a2, a3, a4, v6);
    --*(_DWORD *)(CurrentThreadWin32Thread + 48);
    *(_BYTE *)this = 0;
  }
}
