/*
 * XREFs of _PostUIActions @ 0x1C0206B00
 * Callers:
 *     <none>
 * Callees:
 *     _PostMessage @ 0x1C002DBA0 (_PostMessage.c)
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 */

__int64 __fastcall PostUIActions(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v5; // rcx
  __int64 v7; // rcx

  v3 = a1;
  if ( (unsigned int)a1 > 2 )
  {
    v7 = 87LL;
  }
  else
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
    if ( (unsigned int)IsImmersiveBroker(CurrentProcessWin32Process) )
    {
      a2 = gptiCurrent;
      a3 = *(_QWORD *)(gptiCurrent + 456LL);
      if ( a3 )
      {
        v5 = *(_QWORD *)(a3 + 248);
        if ( v5 )
        {
          if ( a3 == grpdeskRitInput )
            return (int)PostMessage(v5, 814, v3, 0);
        }
      }
    }
    v7 = 5LL;
  }
  UserSetLastError(v7, a2, a3);
  return 0LL;
}
