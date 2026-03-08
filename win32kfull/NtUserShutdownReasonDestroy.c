/*
 * XREFs of NtUserShutdownReasonDestroy @ 0x1C00F1FF0
 * Callers:
 *     <none>
 * Callees:
 *     InternalRemoveProp @ 0x1C002484C (InternalRemoveProp.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 */

__int64 __fastcall NtUserShutdownReasonDestroy(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  __int64 v5; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // r8
  void *v8; // rax

  EnterCrit(0LL, 0LL);
  v2 = ValidateHwnd(a1);
  v4 = 0LL;
  v5 = v2;
  if ( v2 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3);
    v7 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      v3 = -*(_QWORD *)CurrentProcessWin32Process;
      v7 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL) & CurrentProcessWin32Process;
    }
    if ( *(_QWORD *)(*(_QWORD *)(v5 + 16) + 424LL) == v7 )
    {
      v8 = (void *)InternalRemoveProp(v5, (unsigned __int16)gatomShutdownBlockingReason, 1u);
      if ( v8 )
      {
        Win32FreePool(v8);
        v4 = 1LL;
      }
      else
      {
        UserSetLastError(87);
      }
    }
    else
    {
      v4 = 5LL;
    }
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
