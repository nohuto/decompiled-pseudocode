__int64 MiAcquireKernelCfgLock()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 result; // rax
  __int64 v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  result = KeAbPreAcquire((__int64)&qword_140C654B8, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140C654B8, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(&qword_140C654B8, result, (__int64)&qword_140C654B8);
  if ( v2 )
    *(_BYTE *)(v2 + 18) = 1;
  return result;
}
