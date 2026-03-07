__int64 __fastcall ACPIIrpInvokeDispatchRoutine(
        ULONG_PTR a1,
        IRP *a2,
        __int64 a3,
        __int64 (__fastcall *a4)(ULONG_PTR, IRP *, _QWORD, _QWORD),
        char a5)
{
  __int64 DeviceExtension; // rsi
  int Status; // eax
  int v10; // ebx

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  Status = a2->IoStatus.Status;
  v10 = -1073741637;
  if ( Status < 0 )
  {
    if ( Status != -1073741637 )
      goto LABEL_6;
  }
  else if ( !a5 )
  {
    goto LABEL_6;
  }
  v10 = a4(a1, a2, 0LL, 0LL);
LABEL_6:
  if ( v10 != 259 )
  {
    if ( (*(_DWORD *)(DeviceExtension + 8) & 0x20) != 0 )
    {
      if ( v10 == -1073741637 )
        v10 = a2->IoStatus.Status;
      else
        a2->IoStatus.Status = v10;
    }
    else
    {
      if ( v10 == -1073741637 )
        return (unsigned int)IofCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 776), a2);
      a2->IoStatus.Status = v10;
      if ( v10 >= 0 )
        return (unsigned int)IofCallDriver(*(PDEVICE_OBJECT *)(DeviceExtension + 776), a2);
    }
    IofCompleteRequest(a2, 0);
  }
  return (unsigned int)v10;
}
