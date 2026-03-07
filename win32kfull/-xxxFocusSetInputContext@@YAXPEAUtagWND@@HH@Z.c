void __fastcall xxxFocusSetInputContext(struct tagWND *a1, int a2, int a3)
{
  __int64 v6; // rcx
  __int64 v7; // rax
  struct tagWND *v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int128 v12; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+40h] [rbp-18h]

  v12 = 0LL;
  v13 = 0LL;
  v6 = *(_QWORD *)(*((_QWORD *)a1 + 17) + 8LL);
  if ( (*(_BYTE *)(v6 + 10) & 1) == 0 && *(_WORD *)v6 != *(_WORD *)(gpsi + 898LL) )
  {
    v7 = *((_QWORD *)a1 + 2);
    v8 = *(struct tagWND **)(v7 + 784);
    if ( v8 )
    {
      if ( (*(_DWORD *)(v7 + 488) & 1) == 0 )
      {
        ThreadLockAlways(v8, &v12);
        if ( a3 )
          QueueNotifyMessage((_DWORD)v8, 647, 24 - (a2 != 0), *(_QWORD *)a1, 0);
        else
          xxxSendMessage(v8, 0x287u);
        ThreadUnlock1(v10, v9, v11);
      }
    }
  }
}
