/*
 * XREFs of DpiQueryBusInterface @ 0x1C01F6760
 * Callers:
 *     DpiAddDevice @ 0x1C01F38A0 (DpiAddDevice.c)
 *     DpiFdoInitializeFdo @ 0x1C01F5A64 (DpiFdoInitializeFdo.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiQueryBusInterface(PDEVICE_OBJECT DeviceObject, ULONG_PTR a2, USHORT a3, USHORT a4, __int64 a5)
{
  PIRP v9; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  unsigned int v11; // ebx
  NTSTATUS v13; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-38h] BYREF
  struct _KEVENT Object; // [rsp+50h] [rbp-28h] BYREF

  memset(&Object, 0, sizeof(Object));
  IoStatusBlock = 0LL;
  KeInitializeEvent(&Object, SynchronizationEvent, 0);
  v9 = IoBuildSynchronousFsdRequest(0x1Bu, DeviceObject, 0LL, 0, 0LL, &Object, &IoStatusBlock);
  if ( v9 )
  {
    CurrentStackLocation = v9->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = 0LL;
    CurrentStackLocation[-1].MinorFunction = 8;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = a2;
    CurrentStackLocation[-1].Parameters.QueryInterface.Size = a3;
    CurrentStackLocation[-1].Parameters.QueryInterface.Version = a4;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = a5;
    v9->IoStatus.Status = -1073741637;
    v11 = IofCallDriver(DeviceObject, v9);
    if ( v11 == 259 )
    {
      v13 = KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      v11 = v13;
      if ( v13 )
        WdLogSingleEntry1(2LL, v13);
      else
        return (unsigned int)IoStatusBlock.Status;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v11;
}
