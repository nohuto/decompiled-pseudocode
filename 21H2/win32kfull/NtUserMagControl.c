/*
 * XREFs of NtUserMagControl @ 0x1C01F9350
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     MagControl @ 0x1C01C9860 (MagControl.c)
 */

__int64 __fastcall NtUserMagControl(int a1, __int64 a2)
{
  __int64 v4; // rbx
  NTSTATUS v5; // eax
  __int64 ThreadWin32Thread; // rax
  __int64 v7; // rcx
  ULONG v8; // eax
  __int64 v9; // rdx

  v4 = 1LL;
  EnterCrit(1LL, 0LL);
  if ( a2 )
  {
    a2 = ValidateHwnd(a2);
    if ( !a2 )
    {
      v5 = -1073741811;
LABEL_5:
      v4 = 0LL;
      v8 = RtlNtStatusToDosError(v5);
      UserSetLastError(v8, v9);
      goto LABEL_6;
    }
  }
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  v5 = MagControl(gMagnContext, ThreadWin32Thread, a1, a2);
  if ( v5 < 0 )
    goto LABEL_5;
LABEL_6:
  UserSessionSwitchLeaveCrit(v7);
  return v4;
}
