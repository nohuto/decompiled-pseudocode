/*
 * XREFs of IoGetStackLimits @ 0x1403129C0
 * Callers:
 *     EtwpEventWriteFull @ 0x1402319C0 (EtwpEventWriteFull.c)
 *     EtwpApplyPayloadFilterInternal @ 0x140602018 (EtwpApplyPayloadFilterInternal.c)
 *     EtwpWriteUserEvent @ 0x1406AA640 (EtwpWriteUserEvent.c)
 *     _RegRtlEnumKeyWithCallback @ 0x140824EF8 (_RegRtlEnumKeyWithCallback.c)
 *     _RegRtlDeleteTreeInternal @ 0x140868B00 (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlCopyTreeInternal @ 0x140A67A08 (_RegRtlCopyTreeInternal.c)
 *     HalpCheckLowMemoryPreSleep @ 0x140A93CC8 (HalpCheckLowMemoryPreSleep.c)
 *     ViDeadlockCheckStackLimits @ 0x140AD5CDC (ViDeadlockCheckStackLimits.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x1403129F0 (RtlpGetStackLimits.c)
 */

void __stdcall IoGetStackLimits(PULONG_PTR LowLimit, PULONG_PTR HighLimit)
{
  if ( !(unsigned __int8)RtlpGetStackLimits(LowLimit, HighLimit) )
  {
    *LowLimit = 0LL;
    *HighLimit = 0LL;
  }
}
