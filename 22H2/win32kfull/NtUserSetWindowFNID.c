/*
 * XREFs of NtUserSetWindowFNID @ 0x1C00CED60
 * Callers:
 *     <none>
 * Callees:
 *     IsWindowBeingDestroyed @ 0x1C00CF084 (IsWindowBeingDestroyed.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C01410D8 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall NtUserSetWindowFNID(__int64 a1, __int16 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v13; // rcx

  EnterCrit(0LL, 0LL);
  v4 = ValidateHwnd(a1);
  v9 = 0LL;
  v10 = v4;
  if ( v4 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
    v7 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      v6 = -*(_QWORD *)CurrentProcessWin32Process;
      v5 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v7 = v5 & CurrentProcessWin32Process;
    }
    if ( *(_QWORD *)(*(_QWORD *)(v10 + 16) + 424LL) != v7 )
    {
      v13 = 5LL;
LABEL_16:
      UserSetLastError(v13);
      goto LABEL_12;
    }
    if ( a2 == 0x4000 )
    {
LABEL_11:
      v9 = 1LL;
      *(_WORD *)(*(_QWORD *)(v10 + 40) + 42LL) |= a2;
      goto LABEL_12;
    }
    if ( !(unsigned int)IsWindowBeingDestroyed(v10) )
    {
      if ( (unsigned int)PsGetWin32KFilterSet() == 5 )
      {
        if ( a2 == 681 )
        {
LABEL_9:
          v6 = *(_QWORD *)(v10 + 40);
          if ( (*(_WORD *)(v6 + 42) & 0x2FFF) == 0 )
          {
            if ( !*(_DWORD *)(v6 + 248) )
              goto LABEL_11;
            MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 8482LL);
          }
        }
      }
      else if ( (unsigned __int16)(a2 - 673) <= 9u )
      {
        goto LABEL_9;
      }
    }
    v13 = 87LL;
    goto LABEL_16;
  }
LABEL_12:
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}
