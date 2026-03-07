__int64 __fastcall xxxClientShutdown2(struct tagBWL *a1, int a2, __int16 a3)
{
  _QWORD *v3; // rsi
  __int64 v4; // r15
  __int64 v6; // rax
  struct tagWND *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  int v11; // edi
  __int128 v13; // [rsp+20h] [rbp-48h] BYREF
  __int64 v14; // [rsp+30h] [rbp-38h]

  v3 = (_QWORD *)((char *)a1 + 32);
  v13 = 0LL;
  v14 = 0LL;
  v4 = a3 & 0x108;
  while ( 1 )
  {
    if ( *v3 == 1LL )
      return 1LL;
    v6 = HMValidateHandleNoSecure(*v3, 1);
    v7 = (struct tagWND *)v6;
    if ( v6 )
      break;
LABEL_3:
    ++v3;
  }
  ThreadLockAlways(v6, &v13);
  if ( a2 != 17 )
  {
    xxxSendMessage(v7, 0x16u);
    v11 = 1;
    if ( v4 != 264 )
      goto LABEL_2;
    DestroyWindowsTimers(v7);
    goto LABEL_9;
  }
  if ( gptiCurrent == gptiShutdownNotify || xxxSendMessage(v7, 0x11u) )
  {
LABEL_9:
    ThreadUnlock1(v9, v8, v10);
    goto LABEL_3;
  }
  v11 = 0;
LABEL_2:
  ThreadUnlock1(v9, v8, v10);
  if ( v11 )
    goto LABEL_3;
  return 3LL;
}
