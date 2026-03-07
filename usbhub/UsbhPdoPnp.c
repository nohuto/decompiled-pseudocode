__int64 __fastcall UsbhPdoPnp(struct _DEVICE_OBJECT *a1, IRP *a2)
{
  _DWORD *v4; // rax
  int v5; // edx
  int v6; // r8d
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  int MinorFunction; // r10d
  __int64 v9; // rax
  unsigned int Status; // ebx

  v4 = PdoExt((__int64)a1);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  MinorFunction = CurrentStackLocation->MinorFunction;
  v4[293] = MinorFunction;
  *((_BYTE *)v4 + (((unsigned __int8)_InterlockedExchangeAdd(v4 + 222, 1u) + 1) & 0xF) + 892) = MinorFunction;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_c(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      v6,
      15,
      (__int64)&WPP_9b0a5a2624623ceb7c2c6a1dede7f127_Traceguids,
      CurrentStackLocation->MinorFunction);
  v9 = CurrentStackLocation->MinorFunction;
  if ( (unsigned __int8)v9 >= 0x20u )
  {
    Status = a2->IoStatus.Status;
    a2->IoStatus.Status = Status;
    IofCompleteRequest(a2, 0);
  }
  else
  {
    return (unsigned int)off_1C005EA18[2 * v9](a1, a2);
  }
  return Status;
}
