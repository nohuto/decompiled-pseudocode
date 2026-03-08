/*
 * XREFs of NtUserRegisterForTooltipDismissNotification @ 0x1C01DA670
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?InsertTooltipRegistration@TooltipDismiss@@YA_NPEAUHWND__@@@Z @ 0x1C02302B0 (-InsertTooltipRegistration@TooltipDismiss@@YA_NPEAUHWND__@@@Z.c)
 *     ?RemoveTooltipRegistrationIfHwndInList@TooltipDismiss@@YA_NPEAUHWND__@@@Z @ 0x1C023030C (-RemoveTooltipRegistrationIfHwndInList@TooltipDismiss@@YA_NPEAUHWND__@@@Z.c)
 */

__int64 __fastcall NtUserRegisterForTooltipDismissNotification(TooltipDismiss *this, int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rcx
  __int64 v6; // rbp
  __int64 CurrentProcessWin32Process; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  bool inserted; // al
  __int64 v11; // rcx
  char v13; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v13);
  v4 = 0LL;
  v6 = ValidateHwnd(this);
  if ( v6 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v5);
    v9 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      v8 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v9 = v8 & CurrentProcessWin32Process;
    }
    if ( *(_QWORD *)(*(_QWORD *)(v6 + 16) + 424LL) != v9 )
    {
      UserSetLastError(5);
      goto LABEL_12;
    }
    if ( a2 == 1 )
    {
      inserted = TooltipDismiss::InsertTooltipRegistration(this, (HWND)v8);
    }
    else
    {
      if ( a2 != 2 )
      {
LABEL_11:
        v4 = (unsigned __int8)v4;
        goto LABEL_12;
      }
      inserted = TooltipDismiss::RemoveTooltipRegistrationIfHwndInList(this, (HWND)v8);
    }
    LOBYTE(v4) = inserted;
    goto LABEL_11;
  }
LABEL_12:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v13);
  UserSessionSwitchLeaveCrit(v11);
  return v4;
}
