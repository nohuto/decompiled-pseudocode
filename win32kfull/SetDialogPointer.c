/*
 * XREFs of SetDialogPointer @ 0x1C00F9E74
 * Callers:
 *     NtUserSetDialogPointer @ 0x1C00F9DB0 (NtUserSetDialogPointer.c)
 * Callees:
 *     SetOrClrWF @ 0x1C0097844 (SetOrClrWF.c)
 *     unsafe_cast_fnid_zero_to_PDIALOG @ 0x1C00F9F78 (unsafe_cast_fnid_zero_to_PDIALOG.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C0130974 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

__int64 __fastcall SetDialogPointer(__int64 *a1, __int64 a2)
{
  __int64 *v4; // rsi
  __int64 v5; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rax
  int v11; // ecx

  v4 = a1 + 5;
  v5 = a1[5];
  if ( *(int *)(v5 + 200) >= 30 && (*(_BYTE *)(v5 + 18) & 4) == 0 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
    v7 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
      v7 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    if ( v7 == *(_QWORD *)(a1[2] + 424) )
    {
      v8 = *v4;
      if ( (*(_DWORD *)(*v4 + 232) & 0x10) == 0 )
      {
        if ( !*(_DWORD *)(v8 + 248) || *(_WORD *)(v8 + 42) )
        {
          v9 = unsafe_cast_fnid_zero_to_PDIALOG(a1);
          if ( v9 )
          {
            *(_QWORD *)(v9 + 8) = a2;
            v10 = *v4;
            if ( a2 )
            {
              if ( !*(_WORD *)(v10 + 42) )
                *(_WORD *)(v10 + 42) = 676;
              v11 = 1;
            }
            else
            {
              *(_WORD *)(v10 + 42) |= 0x4000u;
              v11 = 0;
            }
            SetOrClrWF(v11, a1, 0x201u, 1);
          }
        }
        else
        {
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 67LL);
        }
      }
    }
  }
  return 1LL;
}
