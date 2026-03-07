__int64 MiLockFileExtentsExclusive()
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 result; // rax
  __int64 v2; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->SpecialApcDisable;
  result = KeAbPreAcquire((__int64)&qword_140C65528, 0LL);
  v2 = result;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_140C65528, 0LL) )
    result = ExfAcquirePushLockExclusiveEx(&qword_140C65528, result, (__int64)&qword_140C65528);
  if ( v2 )
    *(_BYTE *)(v2 + 18) = 1;
  return result;
}
