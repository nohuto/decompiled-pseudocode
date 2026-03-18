/*
 * XREFs of NtUserRedrawWindow @ 0x1C009CE90
 * Callers:
 *     <none>
 * Callees:
 *     xxxRedrawWindow @ 0x1C0031604 (xxxRedrawWindow.c)
 *     UserSetLastError @ 0x1C00F04CC (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C0138430 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserRedrawWindow(__int64 a1, __int128 *a2, __int64 a3, int a4)
{
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct tagWND *v11; // rdi
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // r9d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int128 v19; // [rsp+38h] [rbp-60h] BYREF
  __int64 v20; // [rsp+48h] [rbp-50h]
  __int128 v21; // [rsp+58h] [rbp-40h] BYREF

  v21 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  EnterCrit(0LL, 0LL);
  v8 = 0;
  if ( a1 )
  {
    v11 = (struct tagWND *)ValidateHwnd(a1);
    if ( !v11 )
      goto LABEL_11;
  }
  else
  {
    v11 = 0LL;
  }
  *(_QWORD *)&v19 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v19;
  *((_QWORD *)&v19 + 1) = v11;
  if ( v11 )
    HMLockObject(v11);
  if ( a2 )
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (__int128 *)MmUserProbeAddress;
    v21 = *a2;
    a2 = &v21;
  }
  if ( (a4 & 0xFFFFF000) != 0 )
  {
    UserSetLastError(1004LL);
  }
  else
  {
    v14 = a4 | 0x10000;
    if ( v11 )
      v14 = a4;
    v8 = xxxRedrawWindow(v11, (__int64)a2, a3, v14);
  }
  ThreadUnlock1(v16, v15, v17);
LABEL_11:
  UserSessionSwitchLeaveCrit(v10, v9, v12, v13);
  return v8;
}
