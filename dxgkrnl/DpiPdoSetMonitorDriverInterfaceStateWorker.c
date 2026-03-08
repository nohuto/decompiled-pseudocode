/*
 * XREFs of DpiPdoSetMonitorDriverInterfaceStateWorker @ 0x1C03A58E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DpiPdoSetMonitorDriverInterfaceStateWorker(PVOID IoObject, PVOID Context, PIO_WORKITEM IoWorkItem)
{
  PDEVICE_OBJECT *v4; // rbx
  __int64 v5; // rax
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  PIRP v7; // rax
  IRP *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  NTSTATUS Status; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Object; // [rsp+60h] [rbp-28h] BYREF

  memset(&Object, 0, sizeof(Object));
  IoStatusBlock = 0LL;
  KeInitializeEvent(&Object, NotificationEvent, 0);
  while ( 1 )
  {
    KeWaitForSingleObject(&stru_1C013B848, Executive, 0, 0, 0LL);
    v4 = (PDEVICE_OBJECT *)qword_1C013B880;
    if ( (__int64 *)qword_1C013B880 == &qword_1C013B880 )
    {
      v4 = 0LL;
      byte_1C013B840 = 0;
    }
    else
    {
      if ( *(__int64 **)(qword_1C013B880 + 8) != &qword_1C013B880
        || (v5 = *(_QWORD *)qword_1C013B880, *(_QWORD *)(*(_QWORD *)qword_1C013B880 + 8LL) != qword_1C013B880) )
      {
        __fastfail(3u);
      }
      qword_1C013B880 = *(_QWORD *)qword_1C013B880;
      *(_QWORD *)(v5 + 8) = &qword_1C013B880;
    }
    KeReleaseMutex(&stru_1C013B848, 0);
    if ( !v4 )
      break;
    AttachedDeviceReference = IoGetAttachedDeviceReference(v4[2]);
    if ( !AttachedDeviceReference )
    {
      WdLogSingleEntry1(2LL, -1073741823LL);
      goto LABEL_19;
    }
    v7 = IoBuildDeviceIoControlRequest(
           0x232437u,
           AttachedDeviceReference,
           v4 + 3,
           1u,
           0LL,
           0,
           1u,
           &Object,
           &IoStatusBlock);
    v8 = v7;
    if ( !v7 )
    {
      v9 = -1073741670LL;
      v10 = 6LL;
LABEL_17:
      WdLogSingleEntry1(v10, v9);
      goto LABEL_18;
    }
    v7->IoStatus.Status = -1073741637;
    KeClearEvent(&Object);
    Status = IofCallDriver(AttachedDeviceReference, v8);
    if ( Status == 259 )
    {
      Status = KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
      if ( Status )
        goto LABEL_16;
      Status = IoStatusBlock.Status;
    }
    if ( Status < 0 )
    {
LABEL_16:
      v10 = 2LL;
      v9 = Status;
      goto LABEL_17;
    }
LABEL_18:
    ObfDereferenceObject(AttachedDeviceReference);
LABEL_19:
    ObfDereferenceObject(v4[2]);
    ExFreePoolWithTag(v4, 0);
  }
  IoFreeWorkItem(IoWorkItem);
}
