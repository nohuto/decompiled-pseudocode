/*
 * XREFs of NtUserSetInteractiveControlFocus @ 0x1C00150A0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDeviceFocus@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_PROMOTION_TYPE@@PEAUtagWND@@@Z @ 0x1C00151C8 (-SetDeviceFocus@InteractiveControlManager@@QEAAJKW4tagINTERACTIVECTRL_PROMOTION_TYPE@@PEAUtagWND.c)
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x1C007A05C (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 *     IsShellProcess @ 0x1C009C278 (IsShellProcess.c)
 */

_BOOL8 __fastcall NtUserSetInteractiveControlFocus(unsigned __int16 a1, unsigned int a2, __int64 a3)
{
  char v6; // r14
  int *v7; // rdi
  int v8; // esi
  __int64 v9; // rcx
  struct InteractiveControlManager *v10; // rax
  _BOOL8 v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int128 v16; // [rsp+20h] [rbp-48h] BYREF
  __int64 v17; // [rsp+30h] [rbp-38h]
  int v18; // [rsp+80h] [rbp+18h]

  v17 = 0LL;
  v16 = 0LL;
  EnterCrit(0LL, 0LL);
  v6 = 0;
  v7 = (int *)((char *)PtiCurrentShared() + 1548);
  if ( (unsigned int)IsShellProcess(*(_QWORD *)(gptiCurrent + 424LL)) )
  {
    v8 = *v7;
    v6 = 1;
    *v7 = 0;
  }
  else
  {
    v8 = v18;
  }
  if ( a3 && (a3 = ValidateHwnd(a3)) == 0 )
  {
    v11 = 0LL;
  }
  else
  {
    *(_QWORD *)&v16 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v16;
    *((_QWORD *)&v16 + 1) = a3;
    if ( a3 )
      HMLockObject(a3);
    v10 = InteractiveControlManager::Instance();
    v11 = (int)InteractiveControlManager::SetDeviceFocus(v10, a1, a2, a3, v16, *((_QWORD *)&v16 + 1), v17) >= 0;
    ThreadUnlock1(v13, v12, v14);
  }
  if ( v6 )
    *v7 = v8;
  UserSessionSwitchLeaveCrit(v9);
  return v11;
}
