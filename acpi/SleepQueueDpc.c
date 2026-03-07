__int64 **SleepQueueDpc()
{
  __int64 v0; // rdx
  __int64 ***v1; // rax
  __int64 v2; // rcx
  __int64 v3; // rcx
  _QWORD *v4; // rcx
  __int64 *v5; // rcx
  __int64 **result; // rax
  __int64 *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 *v10; // [rsp+20h] [rbp-10h] BYREF
  __int64 **v11; // [rsp+28h] [rbp-8h]

  v11 = &v10;
  v10 = (__int64 *)&v10;
  byte_1C00702E0 = KeAcquireSpinLockRaiseToDpc(&gmutSleep);
  v0 = MEMORY[0xFFFFF78000000008];
  while ( 1 )
  {
    v1 = (__int64 ***)SleepQueue;
    if ( (__int64 *)SleepQueue == &SleepQueue )
      break;
    v2 = *(_QWORD *)(SleepQueue + 16);
    if ( v2 > v0 )
    {
      ExSetTimer(SleepTimer, v0 - v2, 0LL, 0LL);
      break;
    }
    if ( *(__int64 **)(SleepQueue + 8) != &SleepQueue
      || (v3 = *(_QWORD *)SleepQueue, *(_QWORD *)(*(_QWORD *)SleepQueue + 8LL) != SleepQueue)
      || (SleepQueue = *(_QWORD *)SleepQueue, *(_QWORD *)(v3 + 8) = &SleepQueue, v4 = v11, *v11 != (__int64 *)&v10) )
    {
LABEL_14:
      __fastfail(3u);
    }
    v1[1] = v11;
    *v1 = &v10;
    *v4 = v1;
    v11 = (__int64 **)v1;
  }
  KeReleaseSpinLock(&gmutSleep, byte_1C00702E0);
  while ( 1 )
  {
    v5 = v10;
    result = &v10;
    if ( v10 == (__int64 *)&v10 )
      return result;
    if ( (__int64 **)v10[1] != &v10 )
      goto LABEL_14;
    v7 = (__int64 *)*v10;
    if ( *(__int64 **)(*v10 + 8) != v10 )
      goto LABEL_14;
    v10 = (__int64 *)*v10;
    v7[1] = (__int64)&v10;
    v8 = v5[3];
    v9 = *(_DWORD *)(v8 + 64) >> 8;
    LOBYTE(v9) = (*(_DWORD *)(v8 + 64) & 0x100) == 0;
    RestartContext(v8, v9);
  }
}
