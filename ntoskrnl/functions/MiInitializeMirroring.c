__int64 MiInitializeMirroring()
{
  _QWORD *v0; // rsi
  struct _KTHREAD *CurrentThread; // rdi
  __int64 v2; // r14
  unsigned __int64 v3; // rbx
  unsigned int i; // ebp
  ULONG_PTR v5; // rax
  _OWORD v7[2]; // [rsp+20h] [rbp-28h] BYREF

  stru_140C67AE8.Parameter = (void *)-1LL;
  stru_140C67AE8.List.Flink = 0LL;
  v0 = v7;
  stru_140C67AD0.Header.WaitListHead.Blink = &stru_140C67AD0.Header.WaitListHead;
  stru_140C67AD0.Header.WaitListHead.Flink = &stru_140C67AD0.Header.WaitListHead;
  stru_140C67AE8.WorkerRoutine = (void (__fastcall *)(void *))MiFinishResume;
  LOWORD(stru_140C67AD0.Header.Lock) = 1;
  stru_140C67AD0.Header.Size = 6;
  stru_140C67AD0.Header.SignalState = 1;
  CurrentThread = KeGetCurrentThread();
  v2 = qword_140C65820;
  v3 = (((unsigned __int64)(qword_140C65820 + 8) >> 3) + 4095) >> 12;
  for ( i = 0; i < 2; ++i )
  {
    v5 = MiReservePtes((__int64)&qword_140C695C0, v3);
    if ( !v5 || !(unsigned int)MiInitializeDynamicBitmap(v0, (__int64)(v5 << 25) >> 16, v2 + 1, 6) )
      return 0LL;
    *v0 = 0LL;
    v0 += 2;
  }
  MiLockDynamicMemoryExclusive((__int64)MiSystemPartition, (__int64)CurrentThread);
  xmmword_140C67B10[0] = v7[0];
  xmmword_140C67B20 = v7[1];
  MiUnlockDynamicMemoryExclusive((__int64)MiSystemPartition, (__int64)CurrentThread);
  if ( (dword_140D1D1D4 & 1) != 0 )
  {
    MiLockDynamicMemoryExclusive((__int64)MiSystemPartition, (__int64)CurrentThread);
    MiUpdateMirrorBitmaps();
    MiUnlockDynamicMemoryExclusive((__int64)MiSystemPartition, (__int64)CurrentThread);
  }
  return 1LL;
}
