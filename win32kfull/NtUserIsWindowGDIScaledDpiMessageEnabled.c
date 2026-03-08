/*
 * XREFs of NtUserIsWindowGDIScaledDpiMessageEnabled @ 0x1C01D6E80
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?IsWindowGDIScaledDpiMessageEnabledX@@YA_NPEAUtagWND@@@Z @ 0x1C0222404 (-IsWindowGDIScaledDpiMessageEnabledX@@YA_NPEAUtagWND@@@Z.c)
 */

_BOOL8 __fastcall NtUserIsWindowGDIScaledDpiMessageEnabled(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  _BOOL8 v6; // rbx
  struct tagWND *v7; // rdi
  struct tagTHREADINFO *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int128 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+30h] [rbp-18h]

  v13 = 0LL;
  v14 = 0LL;
  EnterSharedCrit(a1, a2, a3);
  v4 = ValidateHwnd(a1);
  v6 = 0LL;
  v7 = (struct tagWND *)v4;
  if ( v4 )
  {
    v8 = PtiCurrentShared(v5);
    *(_QWORD *)&v13 = *((_QWORD *)v8 + 52);
    *((_QWORD *)v8 + 52) = &v13;
    *((_QWORD *)&v13 + 1) = v7;
    HMLockObject(v7);
    v6 = IsWindowGDIScaledDpiMessageEnabledX(v7);
    ThreadUnlock1(v10, v9, v11);
  }
  UserSessionSwitchLeaveCrit(v5);
  return v6;
}
