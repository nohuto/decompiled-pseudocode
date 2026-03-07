void __fastcall xxxDoScroll(struct tagWND *a1, struct tagWND *a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int128 v9; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10; // [rsp+40h] [rbp-18h]

  v9 = 0LL;
  v10 = 0LL;
  ThreadLock(a2, &v9);
  xxxSendMessage(a2, (a5 != 0) + 276);
  xxxWindowEvent(0x800Eu, a2, (a5 != 0) - 6, 0, 1);
  ThreadUnlock1(v7, v6, v8);
}
