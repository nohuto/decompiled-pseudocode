__int64 __fastcall PspSendProcessNotificationToJobChain(__int64 a1, __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 i; // rbx
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h] BYREF

  CurrentThread = KeGetCurrentThread();
  v9 = 0LL;
  v8 = 0LL;
  PspLockRootJobFromProcess(a1, CurrentThread, &v9, &v8);
  for ( i = v9; i; i = *(_QWORD *)(i + 1288) )
  {
    PspLockJobConditionally(i, &v8);
    if ( *(_QWORD *)(i + 552) )
    {
      if ( ((1 << a2) & *(_DWORD *)(i + 1088)) != 0 )
        PspSendJobNotification(i, a2, a3, 0);
    }
    PspUnlockJobConditionally(i, &v8);
  }
  return PspUnlockJob(v8, CurrentThread);
}
