__int64 UserRedrawDesktop()
{
  struct tagWND *v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 result; // rax
  __int64 v5; // rcx
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]
  char v8; // [rsp+50h] [rbp+8h] BYREF

  v6 = 0LL;
  v7 = 0LL;
  ReEnterLeaveCrit::ReEnterLeaveCrit((ReEnterLeaveCrit *)&v8);
  v0 = *(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 8LL) + 24LL);
  ThreadLockAlways(v0, &v6);
  xxxInternalInvalidate(v0, (HRGN)1, 0x485u);
  result = ThreadUnlock1(v2, v1, v3);
  if ( !v8 )
    return UserSessionSwitchLeaveCrit(v5);
  return result;
}
