/*
 * XREFs of NtUserFlashWindowEx @ 0x1C01F8A00
 * Callers:
 *     <none>
 * Callees:
 *     xxxFlashWindow @ 0x1C002B078 (xxxFlashWindow.c)
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C0032378 (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C0069D40 (UserSetLastError.c)
 */

__int64 __fastcall NtUserFlashWindowEx(__int128 *a1)
{
  int v2; // edi
  __int64 v3; // rdx
  __int64 v4; // r8
  struct tagWND *v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int128 v9; // [rsp+40h] [rbp-58h]
  __int128 v10; // [rsp+50h] [rbp-48h] BYREF
  __int64 v11; // [rsp+60h] [rbp-38h]
  __int128 v12; // [rsp+70h] [rbp-28h]
  __int128 v13; // [rsp+80h] [rbp-18h]
  struct tagWND *v14; // [rsp+A8h] [rbp+10h] BYREF

  v12 = 0LL;
  v13 = 0LL;
  v10 = 0LL;
  v11 = 0LL;
  v2 = 0;
  v14 = 0LL;
  EnterCrit(0LL, 1LL);
  if ( a1 + 2 < a1 || (unsigned __int64)(a1 + 2) > MmUserProbeAddress )
    a1 = (__int128 *)MmUserProbeAddress;
  v9 = a1[1];
  v12 = *a1;
  v13 = v9;
  if ( ValidateHWNDND(*((HWND *)&v12 + 1), &v14) && (_DWORD)v12 == 32 && (v9 & 0xFFFFFFF0) == 0 )
  {
    *(_QWORD *)&v10 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v10;
    v5 = v14;
    *((_QWORD *)&v10 + 1) = v14;
    HMLockObject(v14);
    v2 = xxxFlashWindow((__int64)v5, (unsigned __int16)v9 | (WORD2(v9) << 16), SDWORD2(v9));
    ThreadUnlock1(v6);
  }
  else
  {
    UserSetLastError(87LL, v3, v4);
  }
  UserSessionSwitchLeaveCrit(v7);
  return v2;
}
