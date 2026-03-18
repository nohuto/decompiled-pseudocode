/*
 * XREFs of VmpUnlockMemoryForPin @ 0x1409DA634
 * Callers:
 *     VmpMergeMemoryRanges @ 0x14062AAC8 (VmpMergeMemoryRanges.c)
 *     VmpPinMemoryRange @ 0x14062AE30 (VmpPinMemoryRange.c)
 *     VmpRemoveMemoryRange @ 0x14062BA64 (VmpRemoveMemoryRange.c)
 *     VmpSplitMemoryRange @ 0x14062BE2C (VmpSplitMemoryRange.c)
 *     VmpUnpinMemoryRange @ 0x14062C2E4 (VmpUnpinMemoryRange.c)
 * Callees:
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     MmUnsecureVirtualMemory @ 0x1406F8010 (MmUnsecureVirtualMemory.c)
 *     MmUnlockPhysicalPagesByVa @ 0x14096A384 (MmUnlockPhysicalPagesByVa.c)
 *     MmAdjustSecuredVirtualMemorySize @ 0x14096D7DC (MmAdjustSecuredVirtualMemorySize.c)
 */

void __fastcall VmpUnlockMemoryForPin(
        struct _EX_RUNDOWN_REF *a1,
        void *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        int a7)
{
  __int64 v11; // rdx

  MmUnlockPhysicalPagesByVa(a3 << 12, a4 << 12, a3, a7 != 0);
  if ( a4 == a6 )
  {
    MmUnsecureVirtualMemory(a2);
    ExReleaseRundownProtection(a1 + 12);
  }
  else
  {
    v11 = a4 + a5;
    if ( a3 != a5 )
      v11 = a5;
    if ( (int)MmAdjustSecuredVirtualMemorySize((__int64)a2, v11 << 12, (a6 - a4) << 12) < 0 )
      NT_ASSERT("(((NTSTATUS)(Status)) >= 0)");
  }
}
