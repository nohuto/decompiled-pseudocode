/*
 * XREFs of CiAcquireTaskIndexListLock @ 0x1C000B660
 * Callers:
 *     CiTaskIndexDereference @ 0x1C00021B0 (CiTaskIndexDereference.c)
 * Callees:
 *     <none>
 */

struct _KTHREAD *CiAcquireTaskIndexListLock()
{
  struct _KTHREAD *result; // rax

  ExAcquirePushLockExclusiveEx(&WPP_MAIN_CB.Dpc.DpcListEntry, 0LL);
  result = KeGetCurrentThread();
  WPP_MAIN_CB.Dpc.ProcessorHistory = (KAFFINITY)result;
  return result;
}
