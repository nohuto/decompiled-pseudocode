/*
 * XREFs of WheapLogIpmiSELEvent @ 0x1405BD768
 * Callers:
 *     WheaSelLogErrorPkt @ 0x1405BE2CC (WheaSelLogErrorPkt.c)
 *     WheaSelLogEvent @ 0x1405BE3B8 (WheaSelLogEvent.c)
 * Callees:
 *     memmove @ 0x140414040 (memmove.c)
 *     memset @ 0x140414300 (memset.c)
 *     WheapLogIpmiSELEventHighIrql @ 0x1405BD808 (WheapLogIpmiSELEventHighIrql.c)
 */

__int64 __fastcall WheapLogIpmiSELEvent(void *Src, size_t Size, int a3)
{
  ULONG v4; // ebx
  ULONG v6; // r9d
  __int64 result; // rax

  v4 = Size;
  if ( LODWORD(WheapDispatchPtr.Queue.Wcb.DeviceRoutine) )
  {
    memset(&WheapDispatchPtr.AlignmentRequirement + 1, 0, 0xFECuLL);
    WheapDispatchPtr.Queue.Wcb.CurrentIrp = (PVOID)0x15253534FLL;
    v6 = 4075;
    HIDWORD(WheapDispatchPtr.Queue.Wcb.BufferChainingDpc) = a3;
    if ( v4 + 21 <= 0x1000 )
      v6 = v4;
    WheapDispatchPtr.AlignmentRequirement = v6;
    LODWORD(WheapDispatchPtr.Queue.Wcb.BufferChainingDpc) = v6 + 20;
    memmove(&WheapDispatchPtr.AlignmentRequirement + 1, Src, v6);
    return WheapLogIpmiSELEventHighIrql();
  }
  return result;
}
