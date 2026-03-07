__int64 __fastcall NtUserRedrawWindow(__int64 a1, int *a2, __int64 a3, int a4)
{
  int v8; // ebx
  __int64 v9; // rcx
  struct tagWND *v10; // rdi
  int v11; // r9d
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int128 v16; // [rsp+38h] [rbp-60h] BYREF
  __int64 v17; // [rsp+48h] [rbp-50h]
  __int128 v18; // [rsp+58h] [rbp-40h] BYREF

  v18 = 0LL;
  v16 = 0LL;
  v17 = 0LL;
  EnterCrit(0LL, 0LL);
  v8 = 0;
  if ( a1 )
  {
    v10 = (struct tagWND *)ValidateHwnd(a1);
    if ( !v10 )
      goto LABEL_11;
  }
  else
  {
    v10 = 0LL;
  }
  *(_QWORD *)&v16 = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = &v16;
  *((_QWORD *)&v16 + 1) = v10;
  if ( v10 )
    HMLockObject(v10);
  if ( a2 )
  {
    if ( (unsigned __int64)a2 >= MmUserProbeAddress )
      a2 = (int *)MmUserProbeAddress;
    v18 = *(_OWORD *)a2;
    a2 = (int *)&v18;
  }
  if ( (a4 & 0xFFFFF000) != 0 )
  {
    UserSetLastError(1004);
  }
  else
  {
    v11 = a4 | 0x10000;
    if ( v10 )
      v11 = a4;
    v8 = xxxRedrawWindow(v10, a2, a3, v11);
  }
  ThreadUnlock1(v13, v12, v14);
LABEL_11:
  UserSessionSwitchLeaveCrit(v9);
  return v8;
}
