__int64 __fastcall AtomicExecutionCheck::GetCount(__int64 a1)
{
  __int64 CurrentThreadWin32Thread; // rcx
  __int64 result; // rax

  CurrentThreadWin32Thread = PsGetCurrentThreadWin32Thread(a1);
  result = 0LL;
  if ( CurrentThreadWin32Thread )
    return *(unsigned int *)(CurrentThreadWin32Thread + 48);
  return result;
}
