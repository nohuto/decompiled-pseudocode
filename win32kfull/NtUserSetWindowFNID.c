/*
 * XREFs of NtUserSetWindowFNID @ 0x1C0039DB0
 * Callers:
 *     <none>
 * Callees:
 *     IsWindowBeingDestroyed @ 0x1C0039B60 (IsWindowBeingDestroyed.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall NtUserSetWindowFNID(__int64 a1, __int16 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // r8
  __int64 v11; // rcx

  EnterCrit(0LL, 0LL);
  v4 = ValidateHwnd(a1);
  v6 = 0LL;
  v7 = v4;
  if ( v4 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
    v9 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      v5 = -*(_QWORD *)CurrentProcessWin32Process;
      v9 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    }
    if ( *(_QWORD *)(*(_QWORD *)(v7 + 16) + 424LL) != v9 )
    {
      v11 = 5LL;
LABEL_16:
      UserSetLastError(v11);
      goto LABEL_12;
    }
    if ( a2 == 0x4000 )
    {
LABEL_11:
      v6 = 1LL;
      *(_WORD *)(*(_QWORD *)(v7 + 40) + 42LL) |= a2;
      goto LABEL_12;
    }
    if ( !(unsigned int)IsWindowBeingDestroyed(v7) )
    {
      if ( (unsigned int)PsGetWin32KFilterSet() == 5 )
      {
        if ( a2 == 681 )
        {
LABEL_9:
          v5 = *(_QWORD *)(v7 + 40);
          if ( (*(_WORD *)(v5 + 42) & 0x2FFF) == 0 )
          {
            if ( !*(_DWORD *)(v5 + 248) )
              goto LABEL_11;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 8566LL);
          }
        }
      }
      else if ( (unsigned __int16)(a2 - 673) <= 9u )
      {
        goto LABEL_9;
      }
    }
    v11 = 87LL;
    goto LABEL_16;
  }
LABEL_12:
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
