/*
 * XREFs of NtUserDrawCaption @ 0x1C01CFC80
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C004103C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C012BE80 (__security_check_cookie.c)
 *     xxxDrawCaptionTemp @ 0x1C022EDB4 (xxxDrawCaptionTemp.c)
 */

__int64 __fastcall NtUserDrawCaption(__int64 a1, HDC a2, struct tagRECT *a3, unsigned int a4)
{
  __int64 v8; // rcx
  struct tagWND *v9; // rsi
  unsigned int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int128 v15; // [rsp+50h] [rbp-68h] BYREF
  __int64 v16; // [rsp+60h] [rbp-58h]
  struct tagRECT v17; // [rsp+70h] [rbp-48h] BYREF

  v17 = 0LL;
  v15 = 0LL;
  v16 = 0LL;
  EnterCrit(0LL, 0LL);
  v9 = (struct tagWND *)ValidateHwnd(a1);
  v10 = 0;
  if ( v9 )
  {
    *(_QWORD *)&v15 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v15;
    *((_QWORD *)&v15 + 1) = v9;
    HMLockObject(v9);
    if ( (unsigned __int64)a3 >= MmUserProbeAddress )
      a3 = (struct tagRECT *)MmUserProbeAddress;
    v17 = *a3;
    v10 = xxxDrawCaptionTemp(v9, a2, &v17, 0LL, 0LL, a4);
    ThreadUnlock1(v12, v11, v13);
  }
  UserSessionSwitchLeaveCrit(v8);
  return v10;
}
