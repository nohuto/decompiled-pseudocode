/*
 * XREFs of NtUserAcquireInteractiveControlBackgroundAccess @ 0x1C0079BB0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     ?AcquireDeviceBackgroundAccess@InteractiveControlManager@@QEAAJKIIPEAUtagWND@@@Z @ 0x1C0079660 (-AcquireDeviceBackgroundAccess@InteractiveControlManager@@QEAAJKIIPEAUtagWND@@@Z.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C007A05C (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 */

__int64 __fastcall NtUserAcquireInteractiveControlBackgroundAccess(int a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rbx
  __int64 v7; // rcx
  struct tagWND *v8; // rdi
  InteractiveControlManager *v9; // rax
  unsigned int v10; // r9d
  unsigned int v11; // r8d
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int128 v16; // [rsp+30h] [rbp-28h] BYREF
  __int64 v17; // [rsp+40h] [rbp-18h]

  v16 = 0LL;
  v17 = 0LL;
  EnterCrit(0LL, 0LL);
  v6 = 0LL;
  if ( a3 )
  {
    v8 = (struct tagWND *)ValidateHwnd(a3);
    if ( !v8 )
      goto LABEL_11;
  }
  else
  {
    v8 = 0LL;
  }
  *(_QWORD *)&v16 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v16;
  *((_QWORD *)&v16 + 1) = v8;
  if ( v8 )
    HMLockObject(v8);
  if ( a2 && a2 - 744 > 0x11 )
  {
    UserSetLastError(87);
  }
  else
  {
    v9 = InteractiveControlManager::Instance();
    v10 = 761;
    v11 = 744;
    if ( a2 )
    {
      v10 = a2;
      v11 = a2;
    }
    LOBYTE(v6) = (int)InteractiveControlManager::AcquireDeviceBackgroundAccess(v9, a1, v11, v10, v8) >= 0;
  }
  ThreadUnlock1(v13, v12, v14);
LABEL_11:
  UserSessionSwitchLeaveCrit(v7);
  return v6;
}
