/*
 * XREFs of _ChangeWindowMessageFilter @ 0x1C00A6E9C
 * Callers:
 *     NtUserChangeWindowMessageFilter @ 0x1C00A6E50 (NtUserChangeWindowMessageFilter.c)
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     UIPISQMChangeFilter @ 0x1C00A726C (UIPISQMChangeFilter.c)
 *     ?ValidateChangeMessageFilter@@YAHPEAUtagPROCESSINFO@@I@Z @ 0x1C00A7304 (-ValidateChangeMessageFilter@@YAHPEAUtagPROCESSINFO@@I@Z.c)
 *     ?AddMessageToFilter@@YAHPEAPEAPEAXIPEAH@Z @ 0x1C00A7790 (-AddMessageToFilter@@YAHPEAPEAPEAXIPEAH@Z.c)
 *     ?RemoveMessageFromFilter@@YAHPEAPEAPEAXIPEAH@Z @ 0x1C00FA554 (-RemoveMessageFromFilter@@YAHPEAPEAPEAXIPEAH@Z.c)
 */

__int64 __fastcall ChangeWindowMessageFilter(__int64 a1, int a2)
{
  unsigned int v2; // ebx
  unsigned int v4; // edi
  __int64 CurrentProcessWin32Process; // rsi
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v9; // rdx
  int v10; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0;
  v10 = 0;
  v4 = a1;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  UIPISQMChangeFilter((struct tagPROCESSINFO *)CurrentProcessWin32Process);
  if ( !(unsigned __int8)Enforced(v6) )
    return 1LL;
  if ( !(unsigned int)ValidateChangeMessageFilter((struct tagPROCESSINFO *)CurrentProcessWin32Process, v4) )
    return 0LL;
  if ( a2 == 1 )
  {
    return (unsigned int)AddMessageToFilter((void ***)(CurrentProcessWin32Process + 848), v4, 0LL);
  }
  else if ( a2 == 2 )
  {
    v2 = RemoveMessageFromFilter((void ***)(CurrentProcessWin32Process + 848), v4, &v10);
    if ( v2 )
    {
      if ( v10 )
      {
        UserSetLastError(87LL, v9);
        return 0;
      }
    }
  }
  else
  {
    UserSetLastError(87LL, v7);
  }
  return v2;
}
