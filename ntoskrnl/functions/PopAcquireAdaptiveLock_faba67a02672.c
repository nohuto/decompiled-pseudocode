struct _KTHREAD *__fastcall PopAcquireAdaptiveLock(char a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *result; // rax
  int v5; // edi
  LARGE_INTEGER Interval; // [rsp+20h] [rbp-38h] BYREF
  __int128 v7; // [rsp+28h] [rbp-30h] BYREF
  __int64 v8; // [rsp+38h] [rbp-20h]

  v8 = 0LL;
  v7 = 0LL;
  if ( !a1 )
  {
    v5 = PoBlockConsoleSwitch((__int64)&v7, a2);
    Interval.QuadPart = -100000LL;
    while ( v5 != dword_140C398D8 )
      KeDelayExecutionThread(0, 0, &Interval);
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PopAdpmLock, 1u);
  result = KeGetCurrentThread();
  PopAdpmLockThread = (__int64)result;
  PopAdaptiveContext = a1 == 0;
  return result;
}
