__int64 __fastcall DpEvalAcpiMethod(
        __int64 a1,
        unsigned int a2,
        int *a3,
        ULONG a4,
        _DWORD *OutputBuffer,
        ULONG OutputBufferLength)
{
  NTSTATUS Status; // ebx
  __int64 v10; // r15
  int v11; // r9d
  int v12; // eax
  struct _DEVICE_OBJECT *v13; // rcx
  struct _DEVICE_OBJECT *AttachedDeviceReference; // r15
  IRP *v15; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rdx
  const char *AcpiChildName; // rax
  struct _STRING *p_DestinationString; // rdx
  NTSTATUS v23; // eax
  _QWORD *ChildDescriptor; // rax
  int v25; // r9d
  char v26; // [rsp+58h] [rbp-29h]
  struct _STRING DestinationString; // [rsp+60h] [rbp-21h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp-11h] BYREF
  struct _KEVENT Event; // [rsp+80h] [rbp-1h] BYREF
  char v30; // [rsp+D8h] [rbp+57h]

  v26 = 0;
  v30 = 0;
  Status = 0;
  DestinationString = 0LL;
  if ( !a1 )
  {
    v17 = 2LL;
    goto LABEL_27;
  }
  v10 = *(_QWORD *)(a1 + 64);
  if ( !v10 || *(_QWORD *)(v10 + 16) != 0x274727044LL )
    goto LABEL_23;
  if ( KeGetCurrentIrql() )
  {
    Status = -1073741811;
    if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 40LL) + 28LL) >= 0x2003u )
      WdLogSingleEntry3(0LL, 275LL, 21LL, -1073741811LL);
    v17 = 2LL;
    goto LABEL_28;
  }
  if ( !*(_BYTE *)(v10 + 1157) )
  {
    Status = -1073741637;
    v20 = -1073741637LL;
    v17 = 3LL;
    goto LABEL_29;
  }
  if ( !a3 || !a4 || !OutputBuffer && OutputBufferLength )
  {
LABEL_23:
    v17 = 2LL;
LABEL_27:
    Status = -1073741811;
LABEL_28:
    v20 = -1073741811LL;
LABEL_29:
    WdLogSingleEntry1(v17, v20);
    return (unsigned int)Status;
  }
  v12 = *a3;
  if ( *a3 != 1634885968 )
  {
    if ( v12 == 543451477 )
    {
      *a3 = 1130980673;
      AcpiChildName = (const char *)DpiAcpiGetAcpiChildName(v10, a2);
      if ( !AcpiChildName )
        goto LABEL_49;
      RtlInitAnsiString(&DestinationString, AcpiChildName);
      p_DestinationString = &DestinationString;
    }
    else
    {
      if ( v12 != 2017818181 )
        goto LABEL_12;
      if ( a2 != -1 )
        goto LABEL_23;
      *a3 = 1130980673;
      LODWORD(p_DestinationString) = 0;
    }
    return (unsigned int)DpiAcpiEvalAcpiMethodEx(
                           a1,
                           (int)p_DestinationString,
                           (int)a3,
                           v11,
                           OutputBuffer,
                           OutputBufferLength,
                           1);
  }
  v30 = 1;
  *a3 = 1130980673;
LABEL_12:
  if ( a2 == -1 )
  {
    v13 = *(struct _DEVICE_OBJECT **)(v10 + 24);
    memset(&Event, 0, sizeof(Event));
    IoStatusBlock = 0LL;
    AttachedDeviceReference = IoGetAttachedDeviceReference(v13);
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v15 = IoBuildDeviceIoControlRequest(
            0x32C004u,
            AttachedDeviceReference,
            a3,
            a4,
            OutputBuffer,
            OutputBufferLength,
            0,
            &Event,
            &IoStatusBlock);
    if ( v15 )
    {
      Status = IofCallDriver(AttachedDeviceReference, v15);
      if ( Status == 259 )
      {
        v23 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = v23;
        if ( v23 )
        {
          v18 = v23;
LABEL_45:
          v19 = 2LL;
          goto LABEL_25;
        }
        Status = IoStatusBlock.Status;
      }
      if ( Status >= 0 )
      {
        if ( !OutputBufferLength || *OutputBuffer == 1114596673 && OutputBuffer[2] )
        {
LABEL_19:
          if ( AttachedDeviceReference )
            ObfDereferenceObject(AttachedDeviceReference);
          return (unsigned int)Status;
        }
        v18 = -1072431089LL;
        Status = -1072431089;
        goto LABEL_45;
      }
      v18 = Status;
      v19 = 3LL;
    }
    else
    {
      v18 = -1073741670LL;
      Status = -1073741670;
      v19 = 6LL;
    }
LABEL_25:
    WdLogSingleEntry1(v19, v18);
    goto LABEL_19;
  }
  KeWaitForSingleObject((PVOID)(v10 + 3424), Executive, 0, 0, 0LL);
  ChildDescriptor = DpiFdoGetChildDescriptor(v10, a2);
  if ( ChildDescriptor )
  {
    v26 = 1;
    RtlInitAnsiString(&DestinationString, (PCSZ)ChildDescriptor[10]);
    Status = DpiAcpiEvalAcpiMethodEx(a1, (int)&DestinationString, (int)a3, v25, OutputBuffer, OutputBufferLength, v30);
  }
  KeReleaseMutex((PRKMUTEX)(v10 + 3424), 0);
  if ( !v26 )
  {
LABEL_49:
    v20 = -1073741810LL;
    Status = -1073741810;
    v17 = 2LL;
    goto LABEL_29;
  }
  return (unsigned int)Status;
}
