/*
 * XREFs of WheapLogIpmiSELEvent @ 0x1406460E0
 * Callers:
 *     WheaSelLogErrorPkt @ 0x140642F78 (WheaSelLogErrorPkt.c)
 *     WheaSelLogEvent @ 0x140643064 (WheaSelLogEvent.c)
 * Callees:
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     WheapLogIpmiSELEventHighIrql @ 0x140646180 (WheapLogIpmiSELEventHighIrql.c)
 */

__int64 __fastcall WheapLogIpmiSELEvent(void *Src, size_t Size, int a3)
{
  unsigned int v4; // ebx
  unsigned int v6; // r9d
  __int64 result; // rax

  v4 = Size;
  if ( WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters )
  {
    memset((char *)&WheapDispatchPtr.DeviceQueue.DeviceListHead.Flink + 4, 0, 0xFECuLL);
    WheapDispatchPtr.AlignmentRequirement = 1381192527;
    *(&WheapDispatchPtr.AlignmentRequirement + 1) = 1;
    v6 = 4075;
    *(_DWORD *)(&WheapDispatchPtr.DeviceQueue.Size + 1) = a3;
    if ( v4 + 21 <= 0x1000 )
      v6 = v4;
    LODWORD(WheapDispatchPtr.DeviceQueue.DeviceListHead.Flink) = v6;
    *(_DWORD *)&WheapDispatchPtr.DeviceQueue.Type = v6 + 20;
    memmove((char *)&WheapDispatchPtr.DeviceQueue.DeviceListHead.Flink + 4, Src, v6);
    return WheapLogIpmiSELEventHighIrql();
  }
  return result;
}
