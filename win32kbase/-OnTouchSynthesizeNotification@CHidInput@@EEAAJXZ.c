/*
 * XREFs of ?OnTouchSynthesizeNotification@CHidInput@@EEAAJXZ @ 0x1C0212070
 * Callers:
 *     <none>
 * Callees:
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C007AF8C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ??1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ @ 0x1C007B050 (--1ThreadLockedPerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     SynthesizeTouchInputContainer @ 0x1C022370C (SynthesizeTouchInputContainer.c)
 */

__int64 __fastcall CHidInput::OnTouchSynthesizeNotification(struct RIMCOMPLETEFRAME **this)
{
  __int64 *v3; // [rsp+30h] [rbp+8h] BYREF

  InputTraceLogging::ThreadLockedPerfRegion::ThreadLockedPerfRegion(&v3, "OnTouchSynthesizeNotification", 0LL);
  SynthesizeTouchInputContainer(this[186]);
  InputTraceLogging::ThreadLockedPerfRegion::~ThreadLockedPerfRegion((InputTraceLogging::ThreadLockedPerfRegion *)&v3);
  return 0LL;
}
