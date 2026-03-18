/*
 * XREFs of NtUserFlashWindowEx @ 0x1C01F3300
 * Callers:
 *     <none>
 * Callees:
 *     ?ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z @ 0x1C00244BC (-ValidateHWNDND@@YAHPEAUHWND__@@PEAPEAUtagWND@@@Z.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     xxxFlashWindow @ 0x1C010B918 (xxxFlashWindow.c)
 */

__int64 __fastcall NtUserFlashWindowEx(__int128 *a1)
{
  int v2; // edi
  __int64 v3; // rdx
  unsigned __int64 *v4; // rbx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int128 v10; // [rsp+40h] [rbp-58h]
  __int128 v11; // [rsp+50h] [rbp-48h] BYREF
  __int64 v12; // [rsp+60h] [rbp-38h]
  __int128 v13; // [rsp+70h] [rbp-28h]
  __int128 v14; // [rsp+80h] [rbp-18h]
  ULONG_PTR BugCheckParameter2; // [rsp+A8h] [rbp+10h] BYREF

  v13 = 0LL;
  v14 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v2 = 0;
  BugCheckParameter2 = 0LL;
  EnterCrit(0LL, 0LL);
  if ( a1 + 2 < a1 || (unsigned __int64)(a1 + 2) > MmUserProbeAddress )
    a1 = (__int128 *)MmUserProbeAddress;
  v10 = a1[1];
  v13 = *a1;
  v14 = v10;
  if ( ValidateHWNDND(*((HWND *)&v13 + 1), (struct tagWND **)&BugCheckParameter2)
    && (_DWORD)v13 == 32
    && (v10 & 0xFFFFFFF0) == 0 )
  {
    *(_QWORD *)&v11 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v11;
    v4 = (unsigned __int64 *)BugCheckParameter2;
    *((_QWORD *)&v11 + 1) = BugCheckParameter2;
    HMLockObject(BugCheckParameter2);
    v2 = xxxFlashWindow(v4, (unsigned __int16)v10 | (WORD2(v10) << 16), DWORD2(v10));
    ThreadUnlock1(v6, v5, v7);
  }
  else
  {
    UserSetLastError(87LL, v3);
  }
  UserSessionSwitchLeaveCrit(v8);
  return v2;
}
