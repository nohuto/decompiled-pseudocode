bool __fastcall xxxHandleHealthyWindow(struct tagWND *a1)
{
  int v1; // ebx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int128 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+30h] [rbp-18h]

  v1 = 0;
  if ( GetProp((__int64)a1, *(unsigned __int16 *)(gpsi + 900LL), 1u) )
  {
    v7 = 0LL;
    v8 = 0LL;
    ThreadLockAlways(a1, &v7);
    v1 = xxxDestroyCorrespondingGhostWindow(a1);
    ThreadUnlock1(v4, v3, v5);
  }
  return v1 != 0;
}
