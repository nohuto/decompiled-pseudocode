/*
 * XREFs of DpiGetDxgAdapterFromChild @ 0x1C0394988
 * Callers:
 *     ?DxgkCaptureAcquireSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z @ 0x1C02D9190 (-DxgkCaptureAcquireSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z.c)
 *     ?DxgkCaptureReleaseSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z @ 0x1C02D92D0 (-DxgkCaptureReleaseSynchronization@@YAJPEBU_DEVICE_OBJECT@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiGetDxgAdapterFromChild(PDEVICE_OBJECT DeviceObject, _QWORD *a2)
{
  PIRP v4; // rax
  IRP *v5; // rdx
  NTSTATUS Status; // ebx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS v8; // eax
  __int64 v9; // rdx
  _QWORD *v10; // rdi
  __int64 v11; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-38h] BYREF
  struct _KEVENT Object; // [rsp+50h] [rbp-28h] BYREF

  memset(&Object, 0, sizeof(Object));
  IoStatusBlock = 0LL;
  if ( !DeviceObject || !a2 )
  {
    Status = -1073741811;
    WdLogSingleEntry1(2LL, -1073741811LL);
    return (unsigned int)Status;
  }
  KeInitializeEvent(&Object, SynchronizationEvent, 0);
  v4 = IoBuildSynchronousFsdRequest(0x1Bu, DeviceObject, 0LL, 0, 0LL, &Object, &IoStatusBlock);
  v5 = v4;
  if ( !v4 )
    return (unsigned int)-1073741670;
  CurrentStackLocation = v4->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].MinorFunction = 7;
  CurrentStackLocation[-1].Parameters.Read.Length = 4;
  v5->IoStatus.Status = -1073741637;
  Status = IofCallDriver(DeviceObject, v5);
  if ( Status == 259 )
  {
    v8 = KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    Status = v8;
    if ( v8 )
    {
      v9 = v8;
LABEL_8:
      WdLogSingleEntry1(2LL, v9);
      return (unsigned int)Status;
    }
    Status = IoStatusBlock.Status;
  }
  if ( Status < 0 )
  {
    v9 = Status;
    goto LABEL_8;
  }
  v10 = *(_QWORD **)(IoStatusBlock.Information + 8);
  ExFreePoolWithTag((PVOID)IoStatusBlock.Information, 0);
  v11 = v10[8];
  if ( v11 && *(_DWORD *)(v11 + 16) == 1953656900 && *(_DWORD *)(v11 + 20) == 5 )
  {
    *a2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 32) + 64LL) + 3912LL);
    ObfDereferenceObject(v10);
  }
  else
  {
    Status = -1073741808;
    WdLogSingleEntry1(3LL, v10);
  }
  return (unsigned int)Status;
}
