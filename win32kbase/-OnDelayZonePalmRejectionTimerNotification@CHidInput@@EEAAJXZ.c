/*
 * XREFs of ?OnDelayZonePalmRejectionTimerNotification@CHidInput@@EEAAJXZ @ 0x1C0211320
 * Callers:
 *     <none>
 * Callees:
 *     ??0ApiSetEditionCrit@@QEAA@H@Z @ 0x1C0039D28 (--0ApiSetEditionCrit@@QEAA@H@Z.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1C003A054 (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C007AF8C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C007B050 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ?GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ @ 0x1C0096A80 (-GetInstance@DelayZonePalmRejection@@SAPEAV1@XZ.c)
 *     ?PalmRejectTimerProc@DelayZonePalmRejection@@QEAAXXZ @ 0x1C0215F38 (-PalmRejectTimerProc@DelayZonePalmRejection@@QEAAXXZ.c)
 */

__int64 __fastcall CHidInput::OnDelayZonePalmRejectionTimerNotification(CHidInput *this)
{
  __int64 v1; // r8
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  DelayZonePalmRejection *Instance; // rax
  char v8; // [rsp+38h] [rbp+10h] BYREF
  __int64 *v9; // [rsp+40h] [rbp+18h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(
    &v9,
    "OnDelayZonePalmRejectionTimerNotification",
    0LL);
  ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v8, 1LL, v1);
  Instance = DelayZonePalmRejection::GetInstance(v3, v2, v4, v5);
  DelayZonePalmRejection::PalmRejectTimerProc(Instance);
  ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&v8);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v9);
  return 0LL;
}
