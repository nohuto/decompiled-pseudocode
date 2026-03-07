__int64 __fastcall xxxSendNotifyMessage(
        struct tagTHREADINFO **a1,
        unsigned int a2,
        unsigned __int64 a3,
        __int128 *a4,
        int a5)
{
  __int128 *v5; // r10
  char v9; // di
  __int128 v10; // [rsp+50h] [rbp-38h] BYREF
  __int128 v11; // [rsp+60h] [rbp-28h] BYREF
  __int64 v12; // [rsp+70h] [rbp-18h]

  v5 = a4;
  if ( a1 != (struct tagTHREADINFO **)-1LL )
    return xxxSendMessageCallback(a1, a2, a3, a4, 0LL, 0LL, 0, a5, 0);
  v12 = 0LL;
  v9 = 0;
  v11 = 0LL;
  v10 = 0LL;
  if ( a2 == 26 || a2 == 27 )
  {
    if ( a4 )
    {
      if ( !(unsigned int)CaptureBroadcastString((struct _LARGE_UNICODE_STRING *)&v10, (struct _LARGE_STRING *)a4) )
        return 0LL;
      PushW32ThreadLock(*((__int64 *)&v10 + 1), &v11, (__int64)Win32FreePool);
      v5 = &v10;
      v9 = 1;
    }
  }
  else if ( a2 != 42 )
  {
    return xxxSendMessageCallback(a1, a2, a3, a4, 0LL, 0LL, 0, a5, 0);
  }
  xxxSystemBroadcastMessage(a2, a3, v5, 1u, 0LL, a5, 0);
  if ( v9 )
    PopAndFreeAlwaysW32ThreadLock((__int64)&v11);
  return 1LL;
}
