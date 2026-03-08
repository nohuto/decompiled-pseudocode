/*
 * XREFs of NtUserGetSysMenuOffset @ 0x1C01D4E60
 * Callers:
 *     <none>
 * Callees:
 *     xxxGetSysMenuPtr @ 0x1C00A4DFC (xxxGetSysMenuPtr.c)
 */

__int64 __fastcall NtUserGetSysMenuOffset(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rbx
  _QWORD *v5; // rdi
  __int64 SysMenuPtr; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int128 v11; // [rsp+20h] [rbp-28h] BYREF
  __int64 v12; // [rsp+30h] [rbp-18h]

  v12 = 0LL;
  v11 = 0LL;
  EnterCrit(0LL, 0LL);
  v2 = ValidateHwnd(a1);
  v4 = 0LL;
  v5 = (_QWORD *)v2;
  if ( v2 )
  {
    *(_QWORD *)&v11 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v11;
    *((_QWORD *)&v11 + 1) = v2;
    HMLockObject(v2);
    SysMenuPtr = xxxGetSysMenuPtr(v5);
    if ( SysMenuPtr )
      v4 = *(_QWORD *)(SysMenuPtr + 48);
    ThreadUnlock1(v8, v7, v9);
  }
  UserSessionSwitchLeaveCrit(v3);
  return v4;
}
