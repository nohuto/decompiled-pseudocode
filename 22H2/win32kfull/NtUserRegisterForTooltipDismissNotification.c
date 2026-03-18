/*
 * XREFs of NtUserRegisterForTooltipDismissNotification @ 0x1C01D9640
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?InsertTooltipRegistration@TooltipDismiss@@YA_NPEAUHWND__@@@Z @ 0x1C022D59C (-InsertTooltipRegistration@TooltipDismiss@@YA_NPEAUHWND__@@@Z.c)
 *     ?RemoveTooltipRegistrationIfHwndInList@TooltipDismiss@@YA_NPEAUHWND__@@@Z @ 0x1C022D5F8 (-RemoveTooltipRegistrationIfHwndInList@TooltipDismiss@@YA_NPEAUHWND__@@@Z.c)
 */

__int64 __fastcall NtUserRegisterForTooltipDismissNotification(TooltipDismiss *this, int a2)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rbp
  __int64 v8; // r8
  __int64 CurrentProcessWin32Process; // rax
  bool inserted; // al
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  char v16; // [rsp+40h] [rbp+18h] BYREF

  EnterCrit(0LL, 0LL);
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v16);
  v4 = 0LL;
  v7 = ValidateHwnd(this);
  if ( v7 )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v6);
    v8 = CurrentProcessWin32Process;
    if ( CurrentProcessWin32Process )
    {
      v5 = -(__int64)(*(_QWORD *)CurrentProcessWin32Process != 0LL);
      v8 = v5 & CurrentProcessWin32Process;
    }
    if ( *(_QWORD *)(*(_QWORD *)(v7 + 16) + 424LL) != v8 )
    {
      UserSetLastError(5);
      goto LABEL_12;
    }
    if ( a2 == 1 )
    {
      inserted = TooltipDismiss::InsertTooltipRegistration(this, (HWND)v5);
    }
    else
    {
      if ( a2 != 2 )
      {
LABEL_11:
        v4 = (unsigned __int8)v4;
        goto LABEL_12;
      }
      inserted = TooltipDismiss::RemoveTooltipRegistrationIfHwndInList(this, (HWND)v5);
    }
    LOBYTE(v4) = inserted;
    goto LABEL_11;
  }
LABEL_12:
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v16, v5, v8);
  UserSessionSwitchLeaveCrit(v12, v11, v13, v14);
  return v4;
}
