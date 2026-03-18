/*
 * XREFs of WheapLogIpmiSELEvent @ 0x1406133B0
 * Callers:
 *     WheaSelLogErrorPkt @ 0x14061007C (WheaSelLogErrorPkt.c)
 *     WheaSelLogEvent @ 0x140610168 (WheaSelLogEvent.c)
 * Callees:
 *     memmove @ 0x140435100 (memmove.c)
 *     memset @ 0x140435400 (memset.c)
 *     WheapLogIpmiSELEventHighIrql @ 0x140613450 (WheapLogIpmiSELEventHighIrql.c)
 */

__int64 __fastcall WheapLogIpmiSELEvent(void *Src, size_t Size, int a3)
{
  unsigned int v4; // ebx
  unsigned int v6; // r9d
  __int64 result; // rax

  v4 = Size;
  if ( LODWORD(WheapDispatchPtr.Queue.Wcb.DmaWaitEntry.Blink) )
  {
    memset((char *)&WheapDispatchPtr.Queue.Wcb.CurrentIrp + 4, 0, 0xFECuLL);
    *(_QWORD *)&WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters = 0x15253534FLL;
    v6 = 4075;
    HIDWORD(WheapDispatchPtr.Queue.Wcb.DeviceObject) = a3;
    if ( v4 + 21 <= 0x1000 )
      v6 = v4;
    LODWORD(WheapDispatchPtr.Queue.Wcb.CurrentIrp) = v6;
    LODWORD(WheapDispatchPtr.Queue.Wcb.DeviceObject) = v6 + 20;
    memmove((char *)&WheapDispatchPtr.Queue.Wcb.CurrentIrp + 4, Src, v6);
    return WheapLogIpmiSELEventHighIrql();
  }
  return result;
}
