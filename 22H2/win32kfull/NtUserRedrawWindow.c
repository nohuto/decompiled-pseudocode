/*
 * XREFs of NtUserRedrawWindow @ 0x1C00704D0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0069CA0 (UserSetLastError.c)
 *     xxxRedrawWindow @ 0x1C00722B4 (xxxRedrawWindow.c)
 *     __security_check_cookie @ 0x1C01655A0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserRedrawWindow(__int64 a1, __int128 *a2, __int64 a3, int a4)
{
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // ebx
  __int64 v10; // rcx
  struct tagWND *v11; // rdi
  __int64 v12; // rcx
  __int128 v14; // [rsp+38h] [rbp-60h] BYREF
  __int64 v15; // [rsp+48h] [rbp-50h]
  __int128 v16; // [rsp+58h] [rbp-40h]

  v16 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  EnterCrit(0LL, 1LL);
  v9 = 0;
  if ( a1 )
  {
    v11 = (struct tagWND *)ValidateHwnd(a1);
    if ( !v11 )
      goto LABEL_9;
  }
  else
  {
    v11 = 0LL;
  }
  *(_QWORD *)&v14 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v14;
  *((_QWORD *)&v14 + 1) = v11;
  if ( v11 )
    HMLockObject(v11);
  if ( a2 )
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (__int128 *)MmUserProbeAddress;
    v16 = *a2;
  }
  if ( (a4 & 0xFFFFF000) != 0 )
    UserSetLastError(1004LL, v7, v8);
  else
    v9 = xxxRedrawWindow(v11);
  ThreadUnlock1(v12);
LABEL_9:
  UserSessionSwitchLeaveCrit(v10);
  return v9;
}
