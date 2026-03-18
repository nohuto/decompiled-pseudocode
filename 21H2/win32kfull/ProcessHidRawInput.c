/*
 * XREFs of ProcessHidRawInput @ 0x1C01D11E0
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C00705E0 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C007EDA8 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C007F7CC (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C00A2750 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     xxxProcessHidInput @ 0x1C01D1B50 (xxxProcessHidInput.c)
 */

void __fastcall ProcessHidRawInput(struct DEVICEINFO *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  char v4; // [rsp+38h] [rbp+10h] BYREF
  __int64 *v5; // [rsp+40h] [rbp+18h] BYREF

  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v4);
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v5, "RawHidInput", 0LL);
  xxxProcessHidInput(a1);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v5);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v4, v2, v3);
}
