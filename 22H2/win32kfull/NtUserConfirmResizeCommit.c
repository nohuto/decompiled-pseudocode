/*
 * XREFs of NtUserConfirmResizeCommit @ 0x1C01F70E0
 * Callers:
 *     <none>
 * Callees:
 *     GreConfirmWindowResizeCommit @ 0x1C026ECAC (GreConfirmWindowResizeCommit.c)
 */

__int64 __fastcall NtUserConfirmResizeCommit(__int64 a1)
{
  int v2; // edi
  __int64 v3; // rax
  __int64 v4; // rcx
  HWND *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 CurrentProcess; // rax
  __int64 v10; // rcx
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h]

  v2 = 0;
  v13 = 0LL;
  v12 = 0LL;
  EnterCrit(0LL, 1LL);
  v3 = ValidateHwnd(a1);
  v5 = (HWND *)v3;
  if ( v3 )
  {
    v4 = (*(_WORD *)(*(_QWORD *)(v3 + 40) + 42LL) & 0x2FFFu) - 669;
    if ( (v4 & 0xFFFFFFFD) != 0 )
    {
      *(_QWORD *)&v12 = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = &v12;
      *((_QWORD *)&v12 + 1) = v3;
      HMLockObject(v3);
      CurrentProcess = PsGetCurrentProcess(v7, v6, v8);
      if ( (unsigned int)IsProcessDwm(CurrentProcess) )
        v2 = GreConfirmWindowResizeCommit(*v5);
      ThreadUnlock1(v10);
    }
  }
  UserSessionSwitchLeaveCrit(v4);
  return v2;
}
