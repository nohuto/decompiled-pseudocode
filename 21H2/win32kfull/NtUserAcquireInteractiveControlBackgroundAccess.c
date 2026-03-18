/*
 * XREFs of NtUserAcquireInteractiveControlBackgroundAccess @ 0x1C010BE70
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     ?AcquireDeviceBackgroundAccess@InteractiveControlManager@@QEAAJKIIPEAUtagWND@@@Z @ 0x1C010BF84 (-AcquireDeviceBackgroundAccess@InteractiveControlManager@@QEAAJKIIPEAUtagWND@@@Z.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C010C048 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 */

__int64 __fastcall NtUserAcquireInteractiveControlBackgroundAccess(unsigned int a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rdx
  __int64 v7; // rbx
  __int64 v8; // rcx
  struct tagWND *v9; // rdi
  InteractiveControlManager *v10; // rax
  unsigned int v11; // r9d
  unsigned int v12; // r8d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int128 v17; // [rsp+30h] [rbp-28h] BYREF
  __int64 v18; // [rsp+40h] [rbp-18h]

  v17 = 0LL;
  v18 = 0LL;
  EnterCrit(0LL, 0LL);
  v7 = 0LL;
  if ( a3 )
  {
    v9 = (struct tagWND *)ValidateHwnd(a3);
    if ( !v9 )
      goto LABEL_11;
  }
  else
  {
    v9 = 0LL;
  }
  *(_QWORD *)&v17 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v17;
  *((_QWORD *)&v17 + 1) = v9;
  if ( v9 )
    HMLockObject(v9);
  if ( a2 && a2 - 744 > 0x11 )
  {
    UserSetLastError(87LL, v6);
  }
  else
  {
    v10 = InteractiveControlManager::Instance();
    v11 = 761;
    v12 = 744;
    if ( a2 )
    {
      v11 = a2;
      v12 = a2;
    }
    LOBYTE(v7) = (int)InteractiveControlManager::AcquireDeviceBackgroundAccess(v10, a1, v12, v11, v9) >= 0;
  }
  ThreadUnlock1(v14, v13, v15);
LABEL_11:
  UserSessionSwitchLeaveCrit(v8);
  return v7;
}
