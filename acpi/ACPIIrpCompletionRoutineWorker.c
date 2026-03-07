void __fastcall ACPIIrpCompletionRoutineWorker(ULONG_PTR DeviceObject, PVOID Context)
{
  __int64 DeviceExtension; // rax
  __int64 v5; // r9
  IRP *v6; // rdi
  __int64 v7; // r14
  int v8; // esi
  int Status; // edx
  bool v10; // zf

  DeviceExtension = ACPIInternalGetDeviceExtension(DeviceObject);
  v6 = (IRP *)*((_QWORD *)Context + 1);
  v7 = DeviceExtension;
  v8 = -1073741637;
  Status = v6->IoStatus.Status;
  if ( Status >= 0 )
  {
    v10 = *((_BYTE *)Context + 24) == 0;
    goto LABEL_8;
  }
  if ( Status == -1073741637 )
  {
    v10 = *((_BYTE *)Context + 25) == 0;
    goto LABEL_8;
  }
  if ( !*((_BYTE *)Context + 26) )
  {
    if ( !v6->Cancel )
      goto LABEL_10;
    v10 = *((_BYTE *)Context + 27) == 0;
LABEL_8:
    if ( v10 )
      goto LABEL_10;
  }
  LOBYTE(v5) = 1;
  v8 = (*((__int64 (__fastcall **)(ULONG_PTR, IRP *, _QWORD, __int64))Context + 2))(
         DeviceObject,
         v6,
         *((_QWORD *)Context + 5),
         v5);
LABEL_10:
  ACPIInternalDecrementIrpReferenceCount(v7);
  IoFreeWorkItem(*((PIO_WORKITEM *)Context + 4));
  ExFreePoolWithTag(Context, 0);
  if ( v8 != 259 )
  {
    if ( v8 != -1073741637 )
      v6->IoStatus.Status = v8;
    IofCompleteRequest(v6, 0);
  }
}
