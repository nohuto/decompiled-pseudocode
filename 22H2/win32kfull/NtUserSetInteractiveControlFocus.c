/*
 * XREFs of NtUserSetInteractiveControlFocus @ 0x1C0201B10
 * Callers:
 *     <none>
 * Callees:
 *     IsShellProcess @ 0x1C003C598 (IsShellProcess.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C00E5B10 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     ?SetDeviceFocus@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_PROMOTION_TYPE@@PEAUtagWND@@@Z @ 0x1C02526F4 (-SetDeviceFocus@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_PROMOTION_TYPE@@PEAUtagWND.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall NtUserSetInteractiveControlFocus(unsigned __int16 a1, unsigned int a2, __int64 a3)
{
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rsi
  struct InteractiveControlManager *v9; // rax
  __int64 v10; // rcx
  __int128 v12; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+30h] [rbp-28h]

  v12 = 0LL;
  v13 = 0LL;
  EnterCrit(0LL, 1LL);
  v6 = 0LL;
  if ( (unsigned int)IsShellProcess(*(_QWORD *)(gptiCurrent + 424LL)) )
    gbValidateHandleForIL = 0;
  if ( a3 )
  {
    v8 = ValidateHwnd(a3);
    if ( !v8 )
      goto LABEL_10;
  }
  else
  {
    v8 = 0LL;
  }
  *(_QWORD *)&v12 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v12;
  *((_QWORD *)&v12 + 1) = v8;
  if ( v8 )
    HMLockObject(v8);
  v9 = InteractiveControlManager::Instance();
  LOBYTE(v6) = (int)InteractiveControlManager::SetDeviceFocus(v9, a1, a2, v8, v12, *((_QWORD *)&v12 + 1), v13) >= 0;
  ThreadUnlock1(v10);
LABEL_10:
  UserSessionSwitchLeaveCrit(v7);
  return v6;
}
