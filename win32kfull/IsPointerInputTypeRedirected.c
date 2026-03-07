__int64 __fastcall IsPointerInputTypeRedirected(__int64 a1)
{
  int v1; // ebx
  __int64 v2; // rdi
  __int64 CurrentProcessWin32Process; // rax

  v1 = a1;
  v2 = *(_QWORD *)(grpdeskRitInput + 8LL);
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  return IsPointerInputRedirected(CurrentProcessWin32Process, v2, v1, 0LL);
}
