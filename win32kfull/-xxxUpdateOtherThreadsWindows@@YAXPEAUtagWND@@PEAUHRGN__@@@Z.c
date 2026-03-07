void __fastcall xxxUpdateOtherThreadsWindows(struct tagWND **a1, HRGN a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // r8
  struct tagWND *v7; // rbx
  __int64 v8; // rcx
  _QWORD v9[5]; // [rsp+20h] [rbp-28h] BYREF

  v9[2] = 0LL;
  if ( !*((_QWORD *)PtiCurrentShared((__int64)a1) + 57)
    || (*(_DWORD *)(**(_QWORD **)(*((_QWORD *)PtiCurrentShared(v4) + 57) + 8LL) + 64LL) & 1) == 0 )
  {
    xxxRedrawHungWindow((struct tagWND *)a1, a2);
    if ( (*((_BYTE *)a1[5] + 31) & 2) != 0 )
    {
      v7 = a1[14];
      v8 = gptiCurrent;
      v9[0] = *(_QWORD *)(gptiCurrent + 416LL);
      *(_QWORD *)(gptiCurrent + 416LL) = v9;
      v9[1] = 0LL;
      while ( v7 )
      {
        ThreadLockExchangeAlways((__int64)v7, (__int64)v9);
        xxxUpdateOtherThreadsWindows(v7, a2);
        v7 = (struct tagWND *)*((_QWORD *)v7 + 11);
      }
      ThreadUnlock1(v8, v5, v6);
    }
  }
}
