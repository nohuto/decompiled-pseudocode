char __fastcall WheaHighIrqlLogSelEventHandlerRegister(void *a1)
{
  void *v1; // rbx
  __int32 v2; // r9d
  ULONG v3; // r10d
  void *v4; // r11

  v1 = a1;
  if ( WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters )
  {
    LOBYTE(v3) = 0;
  }
  else
  {
    LOBYTE(a1) = 1;
    WheapHighIrqlLogSelEventHandlerAcquireLock(a1);
    if ( WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters == v2 )
    {
      WheapDispatchPtr.Queue.Wcb.DeviceObject = v1;
      WheapDispatchPtr.Queue.Wcb.CurrentIrp = v4;
      WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters = v3;
    }
    else
    {
      LOBYTE(v3) = v2;
    }
    _InterlockedExchange((volatile __int32 *)(&WheapDispatchPtr.Queue.Wcb.NumberOfMapRegisters + 1), v2);
  }
  return v3;
}
