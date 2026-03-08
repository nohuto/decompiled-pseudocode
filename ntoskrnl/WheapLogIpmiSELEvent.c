/*
 * XREFs of WheapLogIpmiSELEvent @ 0x140610F90
 * Callers:
 *     WheaSelLogErrorPkt @ 0x14060DC5C (WheaSelLogErrorPkt.c)
 *     WheaSelLogEvent @ 0x14060DD48 (WheaSelLogEvent.c)
 * Callees:
 *     memmove @ 0x14042CCC0 (memmove.c)
 *     memset @ 0x14042CFC0 (memset.c)
 *     WheapLogIpmiSELEventHighIrql @ 0x140611030 (WheapLogIpmiSELEventHighIrql.c)
 */

__int64 __fastcall WheapLogIpmiSELEvent(void *Src, size_t Size, int a3)
{
  ULONG v4; // ebx
  ULONG v6; // r9d
  __int64 result; // rax

  v4 = Size;
  if ( WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters )
  {
    memset(&WheapDispatchPtr.Dpc.0 + 1, 0, 0xFECuLL);
    WheapDispatchPtr.DeviceQueue.Lock = 0x15253534FLL;
    v6 = 4075;
    *((_DWORD *)&WheapDispatchPtr.DeviceQueue.1 + 1) = a3;
    if ( v4 + 21 <= 0x1000 )
      v6 = v4;
    WheapDispatchPtr.Dpc.TargetInfoAsUlong = v6;
    *(_DWORD *)&WheapDispatchPtr.DeviceQueue.Busy = v6 + 20;
    memmove(&WheapDispatchPtr.Dpc.0 + 1, Src, v6);
    return WheapLogIpmiSELEventHighIrql();
  }
  return result;
}
