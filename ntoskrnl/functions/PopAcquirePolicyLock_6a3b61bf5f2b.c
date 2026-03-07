struct _KTHREAD *__fastcall PopAcquirePolicyLock()
{
  struct _KTHREAD *CurrentThread; // rax
  struct _KTHREAD *result; // rax

  PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PopPolicyLock, 1u);
  result = KeGetCurrentThread();
  PopPolicyLockThread = (__int64)result;
  return result;
}
