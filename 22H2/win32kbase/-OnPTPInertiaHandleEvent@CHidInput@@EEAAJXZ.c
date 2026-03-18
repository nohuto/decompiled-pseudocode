/*
 * XREFs of ?OnPTPInertiaHandleEvent@CHidInput@@EEAAJXZ @ 0x1C01E2770
 * Callers:
 *     <none>
 * Callees:
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0052D0C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C0052D50 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?EndInertiaForContainer@CPTPProcessor@@SAXPEAX_K@Z @ 0x1C01DEEC0 (-EndInertiaForContainer@CPTPProcessor@@SAXPEAX_K@Z.c)
 */

__int64 __fastcall CHidInput::OnPTPInertiaHandleEvent(CHidInput *this)
{
  __int64 *v3; // [rsp+30h] [rbp+8h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v3, "OnPTPInertiaHandleEvent", 0LL);
  CPTPProcessor::EndInertiaForContainer(*((void **)this + 179), *((_QWORD *)this + 180));
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v3);
  return 0LL;
}
