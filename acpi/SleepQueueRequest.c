__int64 __fastcall SleepQueueRequest(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  int v4; // ebx
  __int64 *v5; // r9
  __int64 v6; // r10
  _QWORD *v7; // r8
  __int64 v8; // rdx
  __int64 *i; // rax
  __int64 v10; // rdx
  __int64 *v11; // rcx
  __int64 v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v15; // [rsp+50h] [rbp+18h] BYREF

  v15 = 0LL;
  v2 = a2;
  v4 = PushFrame(a1, 1346718803, 64, (unsigned int)ProcessSleep, (__int64)&v15);
  if ( v4 >= 0 )
  {
    byte_1C00702E0 = KeAcquireSpinLockRaiseToDpc(&gmutSleep);
    v5 = &SleepQueue;
    v6 = MEMORY[0xFFFFF78000000008];
    v7 = v15;
    v8 = MEMORY[0xFFFFF78000000008] + 10000 * v2;
    v15[6] = v8;
    v7[7] = a1;
    for ( i = (__int64 *)qword_1C00702C8; ; i = (__int64 *)i[1] )
    {
      if ( i == &SleepQueue )
        goto LABEL_9;
      if ( v8 >= i[2] )
        break;
      v5 = i;
    }
    v10 = *i;
    v11 = v7 + 4;
    if ( *(__int64 **)(*i + 8) != i )
LABEL_11:
      __fastfail(3u);
    *v11 = v10;
    v7[5] = i;
    *(_QWORD *)(v10 + 8) = v11;
    *i = (__int64)v11;
LABEL_9:
    if ( (__int64 *)v5[1] == &SleepQueue )
    {
      v12 = SleepQueue;
      v13 = v7 + 4;
      if ( *(__int64 **)(SleepQueue + 8) != &SleepQueue )
        goto LABEL_11;
      *v13 = SleepQueue;
      v7[5] = &SleepQueue;
      *(_QWORD *)(v12 + 8) = v13;
      SleepQueue = (__int64)(v7 + 4);
      ExSetTimer(SleepTimer, v6 - v7[6], 0LL, 0LL);
    }
    KeReleaseSpinLock(&gmutSleep, byte_1C00702E0);
  }
  return (unsigned int)v4;
}
