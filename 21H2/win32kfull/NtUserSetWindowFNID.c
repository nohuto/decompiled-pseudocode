/*
 * XREFs of NtUserSetWindowFNID @ 0x1C0082A00
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     IsWindowBeingDestroyed @ 0x1C0083884 (IsWindowBeingDestroyed.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0147E84 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserSetWindowFNID(__int64 a1, __int16 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // rdx
  __int64 v11; // rcx

  EnterCrit(0LL, 0LL);
  v4 = ValidateHwnd(a1);
  v6 = 0LL;
  v7 = v4;
  if ( v4 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
    v5 = *(_QWORD *)(v7 + 16);
    if ( *(_QWORD *)(v5 + 424) != CurrentProcessWin32Process )
    {
      v11 = 5LL;
      goto LABEL_13;
    }
    if ( a2 == 0x4000 )
    {
LABEL_9:
      v6 = 1LL;
      *(_WORD *)(*(_QWORD *)(v7 + 40) + 42LL) |= a2;
      goto LABEL_10;
    }
    if ( !(unsigned int)IsWindowBeingDestroyed(v7) )
    {
      if ( (unsigned int)PsGetWin32KFilterSet() == 5 )
      {
        if ( a2 == 681 )
        {
LABEL_7:
          v5 = *(_QWORD *)(v7 + 40);
          if ( (*(_WORD *)(v5 + 42) & 0x2FFF) == 0 )
          {
            if ( !*(_DWORD *)(v5 + 248) )
              goto LABEL_9;
            MicrosoftTelemetryAssertTriggeredNoArgsKM(v5);
          }
        }
      }
      else if ( (unsigned __int16)(a2 - 673) <= 9u )
      {
        goto LABEL_7;
      }
    }
    v11 = 87LL;
LABEL_13:
    UserSetLastError(v11, v9);
  }
LABEL_10:
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
