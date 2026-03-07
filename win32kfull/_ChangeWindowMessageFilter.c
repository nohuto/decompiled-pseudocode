__int64 __fastcall ChangeWindowMessageFilter(__int64 a1, int a2)
{
  unsigned int v2; // edi
  unsigned int v4; // ebp
  __int64 CurrentProcessWin32Process; // rax
  __int64 v6; // rcx
  __int64 v7; // rbx
  int v9; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v9 = 0;
  v4 = a1;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  v7 = CurrentProcessWin32Process;
  if ( CurrentProcessWin32Process )
    v7 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
  if ( !(unsigned __int8)Enforced(v6) )
    return 1LL;
  if ( !(unsigned int)ValidateChangeMessageFilter((struct tagPROCESSINFO *)v7, v4) )
    return 0LL;
  if ( a2 == 1 )
  {
    return (unsigned int)AddMessageToFilter((void ***)(v7 + 840), v4, 0LL);
  }
  else if ( a2 == 2 )
  {
    v2 = RemoveMessageFromFilter((void ***)(v7 + 840), v4, &v9);
    if ( v2 )
    {
      if ( v9 )
      {
        UserSetLastError(87);
        return 0;
      }
    }
  }
  else
  {
    UserSetLastError(87);
  }
  return v2;
}
