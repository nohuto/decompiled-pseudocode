void __fastcall xxxReportHotKeyToShell(struct tagTHREADINFO **a1, __int64 a2, __int64 a3, HWND a4, bool a5)
{
  BOOL v5; // edi
  __int64 v7; // r14
  __int64 v9; // rsi
  struct tagTHREADINFO *v10; // rdx
  __int128 v11; // [rsp+20h] [rbp-48h] BYREF
  __int64 v12; // [rsp+30h] [rbp-38h]
  __int128 v13; // [rsp+38h] [rbp-30h] BYREF
  __int64 v14; // [rsp+48h] [rbp-20h]

  v5 = 0;
  v7 = a2;
  if ( a4 )
  {
    LOBYTE(a2) = 1;
    v9 = HMValidateHandleNoSecure(a4, a2);
    if ( v9 )
    {
      v12 = 0LL;
      v14 = 0LL;
      v11 = 0LL;
      v13 = 0LL;
      ThreadLock(a1, &v11);
      ThreadLock(v9, &v13);
      v5 = xxxSetForegroundWindow2(v9, 0LL, 2LL) != 0;
      ThreadUnlock1();
      a1 = (struct tagTHREADINFO **)ThreadUnlock1();
    }
  }
  if ( (unsigned __int8)NotifyShell::ShellHotKey(a1, v7, a3, v5) )
  {
    if ( a1 )
      v10 = a1[2];
    else
      v10 = *(struct tagTHREADINFO **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 456LL) + 320LL) + 16LL);
    CInputGlobals::SetPtiLastWoken(gpInputGlobals, v10, a5);
  }
}
