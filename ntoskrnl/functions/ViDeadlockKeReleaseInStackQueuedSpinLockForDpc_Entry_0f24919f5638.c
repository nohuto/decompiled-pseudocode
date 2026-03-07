PVOID __fastcall ViDeadlockKeReleaseInStackQueuedSpinLockForDpc_Entry(__int64 a1)
{
  return VfDeadlockReleaseResource(
           (LONG *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL) & 0xFFFFFFFFFFFFFFF8uLL),
           6,
           (__int64)KeGetCurrentThread(),
           *(void **)a1);
}
