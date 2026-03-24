/*
 * XREFs of IoGetStackLimits @ 0x1402D0BB0
 * Callers:
 *     EtwpEventWriteFull @ 0x14025D7C0 (EtwpEventWriteFull.c)
 *     EtwpApplyPayloadFilterInternal @ 0x1405B0CC8 (EtwpApplyPayloadFilterInternal.c)
 *     EtwpWriteUserEvent @ 0x140627FE0 (EtwpWriteUserEvent.c)
 *     _RegRtlDeleteTreeInternal @ 0x140765F94 (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlEnumKeyWithCallback @ 0x1407B1920 (_RegRtlEnumKeyWithCallback.c)
 *     _RegRtlCopyTreeInternal @ 0x14097C4B0 (_RegRtlCopyTreeInternal.c)
 *     HalpCheckLowMemoryPreSleep @ 0x1409A81DC (HalpCheckLowMemoryPreSleep.c)
 *     ViDeadlockCheckStackLimits @ 0x1409DF1BC (ViDeadlockCheckStackLimits.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x1402D0BE0 (RtlpGetStackLimits.c)
 */

void __stdcall IoGetStackLimits(PULONG_PTR LowLimit, PULONG_PTR HighLimit)
{
  if ( !(unsigned __int8)RtlpGetStackLimits(LowLimit, HighLimit) )
  {
    *LowLimit = 0LL;
    *HighLimit = 0LL;
  }
}
