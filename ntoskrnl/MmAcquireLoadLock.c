struct _KTHREAD *MmAcquireLoadLock()
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 v1; // rax
  __int64 v2; // rdi

  CurrentThread = KeGetCurrentThread();
  if ( CurrentThread == (struct _KTHREAD *)qword_140C65558 )
  {
    ++dword_140C65560;
  }
  else
  {
    --CurrentThread->KernelApcDisable;
    v1 = KeAbPreAcquire((__int64)&qword_140C65550, 0LL);
    v2 = v1;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140C65550, 0LL) )
      ExfAcquirePushLockExclusiveEx(&qword_140C65550, v1, (__int64)&qword_140C65550);
    if ( v2 )
      *(_BYTE *)(v2 + 18) = 1;
    qword_140C65558 = (__int64)CurrentThread;
    dword_140C65560 = 1;
  }
  return CurrentThread;
}
