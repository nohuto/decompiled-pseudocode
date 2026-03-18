/*
 * XREFs of NtUserRedrawWindow @ 0x1C00EC280
 * Callers:
 *     <none>
 * Callees:
 *     xxxRedrawWindow @ 0x1C004A1EC (xxxRedrawWindow.c)
 *     UserSetLastError @ 0x1C007274C (UserSetLastError.c)
 *     __security_check_cookie @ 0x1C01593A0 (__security_check_cookie.c)
 */

__int64 __fastcall NtUserRedrawWindow(__int64 a1, int *a2, __int64 a3, int a4)
{
  __int64 v8; // rdx
  int v9; // ebx
  __int64 v10; // rcx
  struct tagWND *v11; // rdi
  int v12; // r9d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int128 v17; // [rsp+38h] [rbp-60h] BYREF
  __int64 v18; // [rsp+48h] [rbp-50h]
  __int128 v19; // [rsp+58h] [rbp-40h] BYREF

  v19 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  EnterCrit(0LL, 0LL);
  v9 = 0;
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
  *(_QWORD *)&v17 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v17;
  *((_QWORD *)&v17 + 1) = v11;
  if ( v11 )
    HMLockObject(v11);
  if ( a2 )
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (int *)MmUserProbeAddress;
    v19 = *(_OWORD *)a2;
    a2 = (int *)&v19;
  }
  if ( (a4 & 0xFFFFF000) != 0 )
  {
    UserSetLastError(1004LL, v8);
  }
  else
  {
    v12 = a4 | 0x10000;
    if ( v11 )
      v12 = a4;
    v9 = xxxRedrawWindow(v11, a2, a3, v12);
  }
  ThreadUnlock1(v14, v13, v15);
LABEL_11:
  UserSessionSwitchLeaveCrit(v10);
  return v9;
}
