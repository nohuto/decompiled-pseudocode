/*
 * XREFs of NtUserEnableModernAppWindowKeyboardIntercept @ 0x1C01D0470
 * Callers:
 *     <none>
 * Callees:
 *     _EnableModernAppWindowKeyboardIntercept @ 0x1C01E4748 (_EnableModernAppWindowKeyboardIntercept.c)
 */

__int64 __fastcall NtUserEnableModernAppWindowKeyboardIntercept(__int64 a1, unsigned int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h]

  v13 = 0LL;
  v12 = 0LL;
  EnterCrit(0LL, 0LL);
  v4 = ValidateHwnd(a1);
  v6 = 0LL;
  v7 = v4;
  if ( v4 )
  {
    *(_QWORD *)&v12 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v12;
    *((_QWORD *)&v12 + 1) = v4;
    HMLockObject(v4);
    v6 = EnableModernAppWindowKeyboardIntercept(v7, a2);
    ThreadUnlock1(v9, v8, v10);
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
