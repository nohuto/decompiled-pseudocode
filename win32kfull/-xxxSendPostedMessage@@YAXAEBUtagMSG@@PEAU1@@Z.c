void __fastcall xxxSendPostedMessage(const struct tagMSG *a1, struct tagMSG *a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  *(_OWORD *)a2 = *(_OWORD *)a1;
  *((_OWORD *)a2 + 1) = *((_OWORD *)a1 + 1);
  *((_OWORD *)a2 + 2) = *((_OWORD *)a1 + 2);
  v4 = ValidateHwnd(*(_QWORD *)a1);
  if ( v4 )
  {
    v8 = 0LL;
    v9 = 0LL;
    ThreadLock(v4, &v8);
    xxxSendMessage(v4, *((unsigned int *)a1 + 2), *((_QWORD *)a1 + 2), *((_QWORD *)a1 + 3));
    ThreadUnlock1(v6, v5, v7);
    *((_QWORD *)a2 + 2) |= 0x80000000uLL;
  }
}
