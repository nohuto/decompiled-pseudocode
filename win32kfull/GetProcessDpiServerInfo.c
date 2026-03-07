__int64 __fastcall GetProcessDpiServerInfo(__int64 a1)
{
  __int64 CurrentProcessWin32Process; // rax
  int v2; // edx

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( CurrentProcessWin32Process )
    CurrentProcessWin32Process &= -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
  v2 = *(unsigned __int16 *)(CurrentProcessWin32Process + 284);
  if ( (_WORD)v2 == *(_WORD *)(gpsi + 6998LL) )
    return GetSessionDpiServerInfo();
  else
    return GetDPIServerInfoForDpi(v2);
}
