char __fastcall ExReleaseResourceAndLeavePriorityRegion(struct _ERESOURCE *a1)
{
  struct _KTHREAD *CurrentThread; // rbx

  ExReleaseResourceLite(a1);
  CurrentThread = KeGetCurrentThread();
  PsBoostThreadIoEx((__int64)CurrentThread, 1, 0, 0LL);
  return KeLeaveCriticalRegionThread((__int64)CurrentThread);
}
