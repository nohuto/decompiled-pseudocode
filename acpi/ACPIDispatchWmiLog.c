__int64 __fastcall ACPIDispatchWmiLog(ULONG_PTR BugCheckParameter3, PIRP Irp)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r8
  int v6; // edi
  __int64 LowPart; // rdx
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // rcx
  unsigned int v9; // [rsp+30h] [rbp+8h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( BugCheckParameter3 != CurrentStackLocation->Parameters.WMI.ProviderId )
    return ACPIDispatchForwardIrp(BugCheckParameter3, Irp);
  switch ( CurrentStackLocation->MinorFunction )
  {
    case 4u:
      v6 = ACPIWmiEnableLog(
             CurrentStackLocation->Parameters.CreatePipe.Parameters,
             CurrentStackLocation->Parameters.Read.ByteOffset.LowPart);
      Irp->IoStatus.Status = v6;
      goto LABEL_12;
    case 5u:
      v6 = 0;
      _InterlockedExchange(&ACPIWmiTraceEnable, 0);
      ACPIWmiLoggerHandle = 0LL;
      Irp->IoStatus.Status = 0;
LABEL_12:
      IofCompleteRequest(Irp, 0);
      return (unsigned int)v6;
    case 8u:
      LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
      Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
      v9 = 0;
      v6 = ACPIWmiRegisterGuids(Parameters, LowPart, &v9, BugCheckParameter3);
      if ( v6 >= 0 )
        Irp->IoStatus.Information = v9;
      Irp->IoStatus.Status = v6;
      goto LABEL_12;
  }
  return (unsigned int)ACPIDispatchForwardIrp(BugCheckParameter3, Irp);
}
