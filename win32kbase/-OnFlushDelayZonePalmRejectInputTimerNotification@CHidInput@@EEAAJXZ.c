/*
 * XREFs of ?OnFlushDelayZonePalmRejectInputTimerNotification@CHidInput@@EEAAJXZ @ 0x1C0211380
 * Callers:
 *     ?PreProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1C00F39A0 (-PreProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 * Callees:
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C007AF8C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C007B050 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ @ 0x1C0096A80 (-GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ.c)
 *     ?FlushDelayZonePalmRejectInputTimerProc@DelayZonePalmRejection@@QEAAXXZ @ 0x1C00F3FC0 (-FlushDelayZonePalmRejectInputTimerProc@DelayZonePalmRejection@@QEAAXXZ.c)
 */

__int64 __fastcall CHidInput::OnFlushDelayZonePalmRejectInputTimerNotification(CHidInput *this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8
  __int64 v4; // r9
  DelayZonePalmRejection *Instance; // rax
  __int64 *v7; // [rsp+38h] [rbp+10h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
    &v7,
    "OnFlushDelayZonePalmRejectInputTimerNotification",
    0LL);
  Instance = DelayZonePalmRejection::GetInstance(v2, v1, v3, v4);
  DelayZonePalmRejection::FlushDelayZonePalmRejectInputTimerProc(Instance);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v7);
  return 0LL;
}
