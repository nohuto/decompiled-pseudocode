/*
 * XREFs of ProcessHidRawInput @ 0x1C014EAA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C0066EB8 (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C008C400 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C008C668 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C011BB80 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     xxxProcessHidInput @ 0x1C014EB10 (xxxProcessHidInput.c)
 */

void __fastcall ProcessHidRawInput(struct DEVICEINFO *a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 *v4[3]; // [rsp+20h] [rbp-18h] BYREF
  char v5; // [rsp+58h] [rbp+20h] BYREF

  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v5);
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v4, "RawHidInput", 0LL);
  xxxProcessHidInput(a1);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v4);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v5, v2, v3);
}
