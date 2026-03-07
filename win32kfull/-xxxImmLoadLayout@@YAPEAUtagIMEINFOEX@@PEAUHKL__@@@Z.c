struct tagIMEINFOEX *__fastcall xxxImmLoadLayout(HKL a1)
{
  __int64 v2; // rax
  __int64 v3; // rbx
  __int64 ThreadWin32Thread; // rax
  __int128 v6; // [rsp+20h] [rbp-28h] BYREF
  __int64 v7; // [rsp+30h] [rbp-18h]

  v7 = 0LL;
  v6 = 0LL;
  if ( (*gpsi & 4) != 0 || (WORD1(a1) & 0xF000) == 0xE000 )
  {
    v2 = Win32AllocPoolZInit(352LL, 1835627349LL);
    v3 = v2;
    if ( v2 )
    {
      PushW32ThreadLock(v2, &v6, (__int64)Win32FreePool);
      if ( (unsigned int)ClientImmLoadLayout(a1, v3) )
      {
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)(ThreadWin32Thread + 16) = v6;
        return (struct tagIMEINFOEX *)v3;
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)&v6);
    }
  }
  return 0LL;
}
