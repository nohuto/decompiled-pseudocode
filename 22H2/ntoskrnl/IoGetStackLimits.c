/*
 * XREFs of IoGetStackLimits @ 0x14022E950
 * Callers:
 *     EtwpEventWriteFull @ 0x140258450 (EtwpEventWriteFull.c)
 *     EtwpApplyPayloadFilterInternal @ 0x140604468 (EtwpApplyPayloadFilterInternal.c)
 *     EtwpWriteUserEvent @ 0x1406F41F0 (EtwpWriteUserEvent.c)
 *     _RegRtlEnumKeyWithCallback @ 0x14082CF68 (_RegRtlEnumKeyWithCallback.c)
 *     _RegRtlDeleteTreeInternal @ 0x14086B738 (_RegRtlDeleteTreeInternal.c)
 *     _RegRtlCopyTreeInternal @ 0x140A6A708 (_RegRtlCopyTreeInternal.c)
 *     HalpCheckLowMemoryPreSleep @ 0x140A96E08 (HalpCheckLowMemoryPreSleep.c)
 *     ViDeadlockCheckStackLimits @ 0x140AD9CDC (ViDeadlockCheckStackLimits.c)
 * Callees:
 *     RtlpGetStackLimits @ 0x14022E980 (RtlpGetStackLimits.c)
 */

void __stdcall IoGetStackLimits(PULONG_PTR LowLimit, PULONG_PTR HighLimit)
{
  if ( !(unsigned __int8)RtlpGetStackLimits(LowLimit, HighLimit) )
  {
    *LowLimit = 0LL;
    *HighLimit = 0LL;
  }
}
