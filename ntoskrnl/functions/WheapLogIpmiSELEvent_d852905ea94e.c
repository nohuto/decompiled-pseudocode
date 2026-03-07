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
