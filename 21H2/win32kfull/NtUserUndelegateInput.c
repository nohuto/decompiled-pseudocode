/*
 * XREFs of NtUserUndelegateInput @ 0x1C01174E0
 * Callers:
 *     <none>
 * Callees:
 *     ?_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z @ 0x1C0004798 (-_HandleDelegatedInput@@YAHPEAUtagTHREADINFO@@W4HDIOPTION@@QEAUtagMSG@@@Z.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 */

__int64 __fastcall NtUserUndelegateInput(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rcx

  EnterCrit(0LL, 0LL);
  v4 = ValidateHwnd(a1);
  v7 = 0LL;
  v8 = v4;
  if ( v4 )
  {
    if ( *(_DWORD *)(v4 + 260) && a2 - 1 <= 1 )
    {
      if ( *(_QWORD *)(*(_QWORD *)(v4 + 16) + 424LL) == PsGetCurrentProcessWin32Process(v6) )
      {
        _HandleDelegatedInput(*(_QWORD *)(v8 + 264), a2, 0LL);
        CleanupInputDelegation(v8);
        v7 = 1LL;
        goto LABEL_5;
      }
      v9 = 5LL;
    }
    else
    {
      v9 = 87LL;
    }
    UserSetLastError(v9, v5);
  }
LABEL_5:
  UserSessionSwitchLeaveCrit(v6);
  return v7;
}
