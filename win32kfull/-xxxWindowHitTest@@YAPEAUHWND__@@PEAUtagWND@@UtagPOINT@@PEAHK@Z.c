HWND __fastcall xxxWindowHitTest(struct tagWND *a1, struct tagPOINT a2, int *a3, unsigned int a4)
{
  HWND v4; // rsi
  struct tagWND *v8; // rdi
  __int64 v9; // rdx
  _QWORD v11[5]; // [rsp+20h] [rbp-28h] BYREF

  v11[2] = 0LL;
  v4 = 0LL;
  v8 = a1;
  v9 = gptiCurrent;
  v11[0] = *(_QWORD *)(gptiCurrent + 416LL);
  *(_QWORD *)(gptiCurrent + 416LL) = v11;
  for ( v11[1] = 0LL; v8; v8 = (struct tagWND *)*((_QWORD *)v8 + 11) )
  {
    ThreadLockExchangeAlways(v8, v11);
    v4 = xxxWindowHitTest2(v8, a2, a3, a4);
    if ( v4 )
      break;
  }
  ThreadUnlock1(a1, v9, a3);
  return v4;
}
