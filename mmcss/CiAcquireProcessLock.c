struct _KTHREAD *__fastcall CiAcquireProcessLock(__int64 a1)
{
  __int64 v1; // rbx
  struct _KTHREAD *result; // rax

  v1 = a1 + 16;
  ExAcquirePushLockExclusiveEx(a1 + 16, 0LL);
  result = KeGetCurrentThread();
  *(_QWORD *)(v1 + 8) = result;
  return result;
}
