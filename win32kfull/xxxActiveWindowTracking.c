__int64 __fastcall xxxActiveWindowTracking(struct tagWND *a1)
{
  __int64 v2; // rcx
  int v3; // eax
  unsigned int v4; // ebx
  struct tagWND *ActiveTrackPwnd; // rax
  struct tagWND *v6; // rdi
  __int64 v7; // rcx
  int v8; // esi
  __int64 v9; // r8
  __int64 v10; // rdx
  __int128 v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h]

  v12 = 0LL;
  v13 = 0LL;
  v2 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL);
  v3 = *(_DWORD *)(v2 + 396);
  if ( (v3 & 0x200000) == 0 )
    return 0LL;
  *(_DWORD *)(v2 + 396) = v3 & 0xFFDFFFFF;
  v4 = 0;
  if ( (unsigned int)IsForegroundLocked() )
    return 0LL;
  ActiveTrackPwnd = GetActiveTrackPwnd(a1);
  v6 = ActiveTrackPwnd;
  if ( !ActiveTrackPwnd )
    return 0LL;
  if ( a1 != ActiveTrackPwnd )
    ThreadLockAlways(ActiveTrackPwnd, &v12);
  v8 = xxxSendMessage(v6, 0x21u);
  if ( v8 == 1 || v8 == 2 )
  {
    v4 = 1;
    if ( xxxTrackingActivateWindow(v6) )
    {
      if ( v8 == 2 )
        v8 = 1;
      v4 = v8;
    }
  }
  else
  {
    v10 = (unsigned int)(v8 - 3);
    if ( v8 == 4 )
      v4 = 1;
  }
  if ( a1 != v6 )
    ThreadUnlock1(v7, v10, v9);
  return v4;
}
