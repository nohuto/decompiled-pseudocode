/*
 * XREFs of NtUserShutdownReasonDestroy @ 0x1C0132D70
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 */

__int64 __fastcall NtUserShutdownReasonDestroy(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  _QWORD *v5; // rdi
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  void *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8

  EnterCrit(0LL, 1LL);
  v2 = ValidateHwnd(a1);
  v4 = 0LL;
  v5 = (_QWORD *)v2;
  if ( v2 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v3);
    v3 = v5[2];
    if ( *(_QWORD *)(v3 + 424) == CurrentProcessWin32Process )
    {
      v7 = (unsigned __int16)gatomShutdownBlockingReason;
      v8 = v5[18];
      if ( gatomShutdownBlockingReason == word_1C0339F44 )
        *(_QWORD *)(v5[5] + 312LL) = 0LL;
      v9 = (void *)RealInternalRemoveProp(v8, v7, 1LL);
      if ( v9 )
      {
        Win32FreePool(v9);
        v4 = 1LL;
      }
      else
      {
        UserSetLastError(87LL, v10, v11);
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
