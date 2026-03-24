/*
 * XREFs of NtUserGetDisplayAutoRotationPreferences @ 0x1C01F9490
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 *     W32GetThreadWin32Thread @ 0x1C008E510 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall NtUserGetDisplayAutoRotationPreferences(_DWORD *a1)
{
  _DWORD *v2; // rdx
  int v4; // [rsp+58h] [rbp+10h]

  EnterSharedCrit(0LL, 1LL);
  v4 = *(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 424) + 920LL);
  v2 = a1;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    v2 = (_DWORD *)MmUserProbeAddress;
  *v2 = *v2;
  *a1 = v4;
  UserSessionSwitchLeaveCrit(MmUserProbeAddress);
  return 1LL;
}
