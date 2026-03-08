/*
 * XREFs of ?OnPTPInertiaHandleEvent@CHidInput@@EEAAJXZ @ 0x1C02113C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C007AF8C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C007B050 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?EndInertiaForContainer@CPTPProcessor@@SAXPEAX_K@Z @ 0x1C020D9D0 (-EndInertiaForContainer@CPTPProcessor@@SAXPEAX_K@Z.c)
 */

__int64 __fastcall CHidInput::OnPTPInertiaHandleEvent(CHidInput *this)
{
  __int64 *v3; // [rsp+30h] [rbp+8h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v3, "OnPTPInertiaHandleEvent", 0LL);
  CPTPProcessor::EndInertiaForContainer(*((void **)this + 187), *((_QWORD *)this + 188));
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v3);
  return 0LL;
}
