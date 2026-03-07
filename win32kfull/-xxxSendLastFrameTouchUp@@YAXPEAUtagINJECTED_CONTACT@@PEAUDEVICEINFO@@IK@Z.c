void __fastcall xxxSendLastFrameTouchUp(struct tagINJECTED_CONTACT *a1, struct DEVICEINFO *a2, unsigned int a3, int a4)
{
  unsigned int v5; // ebx
  unsigned int v8; // ebp
  _DWORD *v9; // rsi
  __int64 v10; // rdx
  _DWORD *v11; // rcx
  struct tagPOINTER_TOUCH_INFO *v12; // rdi
  unsigned int v13; // r9d
  unsigned int v14; // r8d
  __int64 v15; // rdx
  __int64 ThreadWin32Thread; // rax
  __int128 v17; // [rsp+20h] [rbp-48h] BYREF
  __int64 v18; // [rsp+30h] [rbp-38h]

  v5 = 0;
  v8 = 0;
  v17 = 0LL;
  v18 = 0LL;
  if ( a3 )
  {
    v9 = (_DWORD *)((char *)a1 + 8);
    v10 = a3;
    v11 = (_DWORD *)((char *)a1 + 8);
    do
    {
      if ( ((*v11 - 0x20000) & 0xFFFDFFFF) != 0 )
        ++v8;
      v11 += 3;
      --v10;
    }
    while ( v10 );
    if ( v8 )
    {
      v12 = (struct tagPOINTER_TOUCH_INFO *)Win32AllocPoolWithQuotaZInit(144LL * v8, 1953067861LL);
      if ( v12 )
      {
        v13 = 0;
        v14 = 0;
        do
        {
          if ( ((*v9 - 0x20000) & 0xFFFDFFFF) != 0 )
          {
            v15 = 18LL * v13;
            *((_DWORD *)v12 + 2 * v15 + 1) = v14;
            *((_QWORD *)v12 + v15 + 4) = *((_QWORD *)v9 - 1);
            *((_DWORD *)v12 + 2 * v15 + 3) = ((*v9 & 4) != 0 ? 0x40000 : 0x20000) | 0x8000;
            ++v13;
            *v9 = 0x20000;
          }
          ++v14;
          v9 += 3;
        }
        while ( v14 < a3 );
        PushW32ThreadLock((__int64)v12, &v17, (__int64)Win32FreePool);
        if ( a4 )
          v5 = _GetQpcBasedTouchStackTime() - a4;
        xxxSendToTouchStack(a2, v8, v12, v5);
        ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
        *(_QWORD *)(ThreadWin32Thread + 16) = v17;
        Win32FreePool(v12);
      }
    }
  }
}
