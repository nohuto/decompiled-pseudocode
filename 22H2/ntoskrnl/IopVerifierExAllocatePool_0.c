/*
 * XREFs of IopVerifierExAllocatePool_0 @ 0x1402D8B04
 * Callers:
 *     IopAllocateFileObjectExtension @ 0x14022BB40 (IopAllocateFileObjectExtension.c)
 *     IopGetSetSpecificExtension @ 0x1402D7298 (IopGetSetSpecificExtension.c)
 *     IopSetLockOperationProcess @ 0x1402D7EBC (IopSetLockOperationProcess.c)
 *     NtUnlockFile @ 0x140674110 (NtUnlockFile.c)
 * Callees:
 *     ExAllocatePoolWithTagPriority @ 0x1402BC770 (ExAllocatePoolWithTagPriority.c)
 *     ExAllocatePoolWithTag @ 0x1409B4160 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall IopVerifierExAllocatePool_0(__int64 a1, SIZE_T a2)
{
  if ( ViVerifierEnabled
    && ((VfRuleClasses & 0xFFAFFFFF) != 0 || (VfRuleClasses & 0x200000000LL) != 0
                                          || (VfRuleClasses & 0x400000000LL) != 0) )
  {
    return ExAllocatePoolWithTagPriority(
             NonPagedPoolNx,
             a2,
             0x20206F49u,
             (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  }
  else
  {
    return ExAllocatePoolWithTag(NonPagedPoolNx, a2, 0x20206F49u);
  }
}
