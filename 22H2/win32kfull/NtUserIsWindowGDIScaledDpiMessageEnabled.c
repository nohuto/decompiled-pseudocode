/*
 * XREFs of NtUserIsWindowGDIScaledDpiMessageEnabled @ 0x1C01D5E50
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C00EDC14 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsWindowGDIScaledDpiMessageEnabledX@@YA_NPEAUtagWND@@@Z @ 0x1C021F6FC (-IsWindowGDIScaledDpiMessageEnabledX@@YA_NPEAUtagWND@@@Z.c)
 */

_BOOL8 __fastcall NtUserIsWindowGDIScaledDpiMessageEnabled(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  _BOOL8 v9; // rbx
  struct tagWND *v10; // rdi
  struct tagTHREADINFO *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int128 v16; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+30h] [rbp-18h]

  v16 = 0LL;
  v17 = 0LL;
  EnterSharedCrit(a1, a2, a3);
  v4 = ValidateHwnd(a1);
  v9 = 0LL;
  v10 = (struct tagWND *)v4;
  if ( v4 )
  {
    v11 = PtiCurrentShared(v6, v5, v7, v8);
    *(_QWORD *)&v16 = *((_QWORD *)v11 + 52);
    *((_QWORD *)v11 + 52) = &v16;
    *((_QWORD *)&v16 + 1) = v10;
    HMLockObject(v10);
    v9 = IsWindowGDIScaledDpiMessageEnabledX(v10);
    ThreadUnlock1(v13, v12, v14);
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7, v8);
  return v9;
}
