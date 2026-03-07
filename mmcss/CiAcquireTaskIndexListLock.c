struct _KTHREAD *CiAcquireTaskIndexListLock()
{
  struct _KTHREAD *result; // rax

  ExAcquirePushLockExclusiveEx(&WPP_MAIN_CB.Dpc.DpcListEntry, 0LL);
  result = KeGetCurrentThread();
  WPP_MAIN_CB.Dpc.ProcessorHistory = (KAFFINITY)result;
  return result;
}
