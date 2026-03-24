/*
 * XREFs of DpiPdoSetMonitorDriverInterfaceStateWorker @ 0x1C02DA0E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DpiPdoSetMonitorDriverInterfaceStateWorker(PVOID IoObject, PVOID Context, PIO_WORKITEM IoWorkItem)
{
  PDEVICE_OBJECT *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rsi
  __int64 v9; // rax
  PIRP v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  IRP *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  NTSTATUS Status; // edi
  NTSTATUS v20; // eax
  __int64 v21; // rdi
  __int64 v22; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Object; // [rsp+60h] [rbp-28h] BYREF

  IoStatusBlock = 0LL;
  KeInitializeEvent(&Object, NotificationEvent, 0);
  while ( 1 )
  {
    KeWaitForSingleObject(&stru_1C00B2EC0, Executive, 0, 0, 0LL);
    v4 = (PDEVICE_OBJECT *)qword_1C00B2EF8;
    if ( (__int64 *)qword_1C00B2EF8 == &qword_1C00B2EF8 )
    {
      v4 = 0LL;
      byte_1C00B2EB8 = 0;
    }
    else
    {
      if ( *(__int64 **)(qword_1C00B2EF8 + 8) != &qword_1C00B2EF8
        || (v5 = *(_QWORD *)qword_1C00B2EF8, *(_QWORD *)(*(_QWORD *)qword_1C00B2EF8 + 8LL) != qword_1C00B2EF8) )
      {
        __fastfail(3u);
      }
      qword_1C00B2EF8 = *(_QWORD *)qword_1C00B2EF8;
      *(_QWORD *)(v5 + 8) = &qword_1C00B2EF8;
    }
    KeReleaseMutex(&stru_1C00B2EC0, 0);
    if ( !v4 )
      break;
    AttachedDeviceReference = IoGetAttachedDeviceReference(v4[2]);
    if ( !AttachedDeviceReference )
    {
      v9 = WdLogNewEntry5_WdError(v7, v6);
      *(_QWORD *)(v9 + 24) = -1073741823LL;
      WdLogEvent5_WdError(v9);
      goto LABEL_20;
    }
    v10 = IoBuildDeviceIoControlRequest(
            0x232437u,
            AttachedDeviceReference,
            v4 + 3,
            1u,
            0LL,
            0,
            1u,
            &Object,
            &IoStatusBlock);
    v15 = v10;
    if ( v10 )
    {
      v10->IoStatus.Status = -1073741637;
      KeClearEvent(&Object);
      Status = IofCallDriver(AttachedDeviceReference, v15);
      if ( Status == 259 )
      {
        v20 = KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
        v21 = v20;
        if ( v20 )
        {
          v22 = WdLogNewEntry5_WdError(v18, v17);
          *(_QWORD *)(v22 + 24) = v21;
LABEL_18:
          WdLogEvent5_WdError(v22);
          goto LABEL_19;
        }
        Status = IoStatusBlock.Status;
      }
      if ( Status < 0 )
      {
        v22 = WdLogNewEntry5_WdError(v18, v17);
        *(_QWORD *)(v22 + 24) = Status;
        goto LABEL_18;
      }
    }
    else
    {
      v16 = WdLogNewEntry5_WdLowResource(v12, v11, v13, v14);
      *(_QWORD *)(v16 + 24) = -1073741670LL;
      WdLogEvent5_WdLowResource(v16);
    }
LABEL_19:
    ObfDereferenceObject(AttachedDeviceReference);
LABEL_20:
    ObfDereferenceObject(v4[2]);
    ExFreePoolWithTag(v4, 0);
  }
  IoFreeWorkItem(IoWorkItem);
}
