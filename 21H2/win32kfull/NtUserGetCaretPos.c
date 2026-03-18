/*
 * XREFs of NtUserGetCaretPos @ 0x1C0112DC0
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0041904 (W32GetThreadWin32Thread.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 */

__int64 __fastcall NtUserGetCaretPos(_DWORD *a1, __int64 a2, __int64 a3)
{
  _BYTE *v4; // r8
  __int64 v6; // [rsp+68h] [rbp+20h]

  EnterSharedCrit(a1, a2, a3);
  v4 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v4 = (_BYTE *)MmUserProbeAddress;
  *v4 = *v4;
  v4[7] = v4[7];
  v6 = *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 432);
  *a1 = *(_DWORD *)(v6 + 316);
  a1[1] = *(_DWORD *)(v6 + 320);
  UserSessionSwitchLeaveCrit(v6);
  return 1LL;
}
