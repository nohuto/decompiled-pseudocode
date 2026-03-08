/*
 * XREFs of ProcessHidRawInput @ 0x1C0141BD0
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@XZ @ 0x1C003C2A4 (--0AtomicExecutionCheck@@QEAA@XZ.c)
 *     ?Disarm@AtomicExecutionCheck@@QEAAXXZ @ 0x1C009DC7C (-Disarm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C00D6A80 (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C00D6CE8 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     xxxProcessHidInput @ 0x1C0141C40 (xxxProcessHidInput.c)
 */

void __fastcall ProcessHidRawInput(struct DEVICEINFO *a1)
{
  __int64 *v2[3]; // [rsp+20h] [rbp-18h] BYREF
  char v3; // [rsp+58h] [rbp+20h] BYREF

  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)&v3);
  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(v2, "RawHidInput", 0LL);
  xxxProcessHidInput(a1);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)v2);
  AtomicExecutionCheck::Disarm((AtomicExecutionCheck *)&v3);
}
