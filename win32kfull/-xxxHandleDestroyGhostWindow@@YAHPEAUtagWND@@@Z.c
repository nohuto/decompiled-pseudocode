__int64 __fastcall xxxHandleDestroyGhostWindow(struct tagWND *a1)
{
  int v1; // edi
  __int64 v3; // rax
  struct tagWND *v4; // rbx
  unsigned __int16 v5; // cx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int128 v10; // [rsp+20h] [rbp-28h] BYREF
  __int64 v11; // [rsp+30h] [rbp-18h]

  v1 = 0;
  v3 = InternalRemoveProp((__int64)a1, *(unsigned __int16 *)(gpsi + 900LL), 1u);
  if ( !v3 )
  {
    v3 = InternalRemoveProp((__int64)a1, *(unsigned __int16 *)(gpsi + 1378LL), 1u);
    if ( !v3 )
      return 0LL;
    v1 = 1;
  }
  v4 = (struct tagWND *)HMValidateHandleNoSecure(v3, 1);
  if ( v4 )
  {
    v10 = 0LL;
    v11 = 0LL;
    ThreadLock(v4, &v10);
    if ( v1 )
      v5 = *(_WORD *)(gpsi + 1378LL);
    else
      v5 = *(_WORD *)(gpsi + 900LL);
    InternalRemoveProp((__int64)v4, v5, 1u);
    xxxHideGhostWindow(a1, v4);
    ThreadUnlock1(v7, v6, v8);
  }
  return 0LL;
}
