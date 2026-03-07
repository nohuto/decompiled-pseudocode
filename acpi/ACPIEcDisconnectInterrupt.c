__int64 __fastcall ACPIEcDisconnectInterrupt(__int64 a1)
{
  unsigned int v1; // ebx
  struct _IO_DISCONNECT_INTERRUPT_PARAMETERS v4; // [rsp+20h] [rbp-18h] BYREF

  v1 = 0;
  if ( *(_BYTE *)(a1 + 805) )
  {
    v4.ConnectionContext.Generic = *(PVOID *)(a1 + 808);
    *(_QWORD *)&v4.Version = 1LL;
    IoDisconnectInterruptEx(&v4);
    *(_QWORD *)(a1 + 808) = 0LL;
  }
  else
  {
    return (unsigned int)ACPIEcDisconnectGpeVector(a1);
  }
  return v1;
}
