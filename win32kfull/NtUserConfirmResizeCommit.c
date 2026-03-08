/*
 * XREFs of NtUserConfirmResizeCommit @ 0x1C01CEEF0
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ @ 0x1C0047B70 (-PtiCurrentShared@@YAPEAUtagTHREADINFO@@XZ.c)
 *     GreConfirmWindowResizeCommit @ 0x1C0269ED4 (GreConfirmWindowResizeCommit.c)
 */

__int64 __fastcall NtUserConfirmResizeCommit(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rcx
  HWND *v7; // rbx
  struct tagTHREADINFO *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 CurrentProcess; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int128 v17; // [rsp+20h] [rbp-28h] BYREF
  __int64 v18; // [rsp+30h] [rbp-18h]

  v17 = 0LL;
  v18 = 0LL;
  v4 = 0;
  EnterSharedCrit(a1, a2, a3);
  v5 = ValidateHwnd(a1);
  v7 = (HWND *)v5;
  if ( v5 )
  {
    v6 = (*(_WORD *)(*(_QWORD *)(v5 + 40) + 42LL) & 0x2FFFu) - 669;
    if ( (v6 & 0xFFFFFFFD) != 0 )
    {
      v8 = PtiCurrentShared(v6);
      *(_QWORD *)&v17 = *((_QWORD *)v8 + 52);
      *((_QWORD *)v8 + 52) = &v17;
      *((_QWORD *)&v17 + 1) = v7;
      HMLockObject(v7);
      CurrentProcess = PsGetCurrentProcess(v10, v9, v11);
      if ( (unsigned int)IsProcessDwm(CurrentProcess) )
        v4 = GreConfirmWindowResizeCommit(*v7);
      ThreadUnlock1(v14, v13, v15);
    }
  }
  UserSessionSwitchLeaveCrit(v6);
  return v4;
}
