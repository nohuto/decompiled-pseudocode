/*
 * XREFs of DpiAcpiPrepareAcpiChildNameList @ 0x1C0197AD8
 * Callers:
 *     DpiAcpiExposeInfo @ 0x1C01972C8 (DpiAcpiExposeInfo.c)
 *     DpiAcpiGetAcpiChildName @ 0x1C0197A74 (DpiAcpiGetAcpiChildName.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 *     DpiAcpiEvalAcpiMethodEx @ 0x1C016545C (DpiAcpiEvalAcpiMethodEx.c)
 */

__int64 __fastcall DpiAcpiPrepareAcpiChildNameList(__int64 a1)
{
  __int64 result; // rax
  struct _DEVICE_OBJECT *v3; // r14
  IRP *v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  NTSTATUS Status; // ebx
  ULONG OutputBufferLength; // ebx
  __int64 v13; // rsi
  PVOID PoolWithTag; // rax
  IRP *v15; // rax
  __int64 v16; // rbx
  _DWORD *v17; // rax
  PVOID v18; // rax
  __int64 v19; // rax
  int v20; // r15d
  __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // r9
  int v24; // eax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rsi
  __int64 v29; // rax
  void *v30; // rcx
  void *v31; // rcx
  NTSTATUS v32; // eax
  __int64 v33; // rax
  __int64 v34; // rax
  NTSTATUS v35; // eax
  __int64 v36; // rax
  __int64 v37; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-69h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp-59h] BYREF
  int v40[4]; // [rsp+80h] [rbp-41h] BYREF
  __int64 v41; // [rsp+90h] [rbp-31h]
  struct _STRING DestinationString; // [rsp+98h] [rbp-29h] BYREF
  _DWORD InputBuffer[2]; // [rsp+A8h] [rbp-19h] BYREF
  __int64 v44; // [rsp+B0h] [rbp-11h]
  SIZE_T NumberOfBytes[2]; // [rsp+B8h] [rbp-9h] BYREF
  int v46; // [rsp+C8h] [rbp+7h]
  __int128 OutputBuffer; // [rsp+D0h] [rbp+Fh] BYREF
  __int64 v48; // [rsp+E0h] [rbp+1Fh]

  result = 0LL;
  v46 = 0;
  v44 = 0LL;
  *(_OWORD *)NumberOfBytes = 0LL;
  v41 = 0LL;
  IoStatusBlock = 0LL;
  v48 = 0LL;
  DestinationString = 0LL;
  *(_OWORD *)v40 = 0LL;
  OutputBuffer = 0LL;
  if ( *(_QWORD *)(a1 + 3296) && *(_QWORD *)(a1 + 3288) )
    return result;
  if ( *(_DWORD *)(a1 + 3280) )
    return 3221225473LL;
  v3 = *(struct _DEVICE_OBJECT **)(a1 + 160);
  ObfReferenceObject(v3);
  InputBuffer[0] = 1214866753;
  InputBuffer[1] = 1;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v4 = IoBuildDeviceIoControlRequest(0x32C020u, v3, InputBuffer, 0x10u, NumberOfBytes, 0x14u, 0, &Event, &IoStatusBlock);
  if ( !v4 )
    goto LABEL_28;
  Status = IofCallDriver(v3, v4);
  if ( Status == 259 )
  {
    v32 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v16 = v32;
    if ( v32 )
    {
LABEL_37:
      v33 = WdLogNewEntry5_WdError(v10, v9);
      *(_QWORD *)(v33 + 24) = v16;
LABEL_45:
      WdLogEvent5_WdError(v33);
LABEL_19:
      if ( (int)v16 < 0 )
        goto LABEL_31;
      goto LABEL_20;
    }
    Status = IoStatusBlock.Status;
  }
  if ( Status != -2147483643 )
  {
    v34 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v34 + 24) = Status;
    WdLogEvent5_WdError(v34);
LABEL_39:
    LODWORD(v16) = -1072431089;
    goto LABEL_31;
  }
  if ( LODWORD(NumberOfBytes[0]) != 1198089537
    || (OutputBufferLength = HIDWORD(NumberOfBytes[0]), HIDWORD(NumberOfBytes[0]) < 0x14) )
  {
    LODWORD(v16) = -1072431089;
    v33 = WdLogNewEntry5_WdError(v10, v9);
    *(_QWORD *)(v33 + 24) = -1072431089LL;
    goto LABEL_45;
  }
  v13 = HIDWORD(NumberOfBytes[0]);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, HIDWORD(NumberOfBytes[0]), 0x74727044u);
  *(_QWORD *)(a1 + 3288) = PoolWithTag;
  if ( !PoolWithTag )
  {
LABEL_29:
    v28 = -1073741801LL;
    goto LABEL_30;
  }
  memset(PoolWithTag, 0, OutputBufferLength);
  KeClearEvent(&Event);
  v15 = IoBuildDeviceIoControlRequest(
          0x32C020u,
          v3,
          InputBuffer,
          0x10u,
          *(PVOID *)(a1 + 3288),
          OutputBufferLength,
          0,
          &Event,
          &IoStatusBlock);
  if ( !v15 )
  {
LABEL_28:
    v28 = -1073741670LL;
LABEL_30:
    LODWORD(v16) = v28;
    v29 = WdLogNewEntry5_WdLowResource(v6, v5, v7, v8);
    *(_QWORD *)(v29 + 24) = v28;
    WdLogEvent5_WdLowResource(v29);
    goto LABEL_31;
  }
  LODWORD(v16) = IofCallDriver(v3, v15);
  if ( (_DWORD)v16 == 259 )
  {
    v35 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v16 = v35;
    if ( !v35 )
    {
      LODWORD(v16) = IoStatusBlock.Status;
      goto LABEL_12;
    }
    goto LABEL_37;
  }
LABEL_12:
  v17 = *(_DWORD **)(a1 + 3288);
  if ( *v17 != 1198089537 || !v17[1] || IoStatusBlock.Information != v13 )
    goto LABEL_39;
  *(_DWORD *)(a1 + 3280) = 0;
  v18 = ExAllocatePoolWithTag(PagedPool, 16LL * (unsigned int)v17[1], 0x74727044u);
  *(_QWORD *)(a1 + 3296) = v18;
  if ( !v18 )
    goto LABEL_29;
  v19 = *(_QWORD *)(a1 + 3288);
  v20 = 1;
  v21 = v19 + 8;
  if ( *(_DWORD *)(v19 + 4) <= 1u )
    goto LABEL_19;
  while ( 1 )
  {
    v21 += *(unsigned int *)(v21 + 4) + 8LL;
    if ( (*(_BYTE *)v21 & 1) != 0 )
      break;
LABEL_18:
    if ( (unsigned int)++v20 >= *(_DWORD *)(*(_QWORD *)(a1 + 3288) + 4LL) )
      goto LABEL_19;
  }
  RtlInitAnsiString(&DestinationString, (PCSZ)(v21 + 8));
  v22 = *(_QWORD *)(a1 + 24);
  qmemcpy(v40, "AeiC_ADR", 8);
  v24 = DpiAcpiEvalAcpiMethodEx(v22, (const void **)&DestinationString, v40, v23, &OutputBuffer, 0x18u, 1);
  v16 = v24;
  if ( v24 < 0 )
  {
    v36 = WdLogNewEntry5_WdWarning(v26, v25, v27);
    *(_QWORD *)(v36 + 24) = v16;
    WdLogEvent5_WdWarning(v36);
    LODWORD(v16) = 0;
    goto LABEL_18;
  }
  if ( (_DWORD)OutputBuffer == 1114596673 && DWORD2(OutputBuffer) )
  {
    *(_DWORD *)(*(_QWORD *)(a1 + 3296) + 16LL * *(unsigned int *)(a1 + 3280)) = v48;
    *(_QWORD *)(*(_QWORD *)(a1 + 3296) + 16LL * (unsigned int)(*(_DWORD *)(a1 + 3280))++ + 8) = v21 + 8;
    goto LABEL_18;
  }
  LODWORD(v16) = -1072431089;
  v37 = WdLogNewEntry5_WdError(v26, v25);
  *(_QWORD *)(v37 + 24) = -1072431089LL;
  WdLogEvent5_WdError(v37);
LABEL_31:
  *(_DWORD *)(a1 + 3280) = -1;
  v30 = *(void **)(a1 + 3296);
  if ( v30 )
  {
    ExFreePoolWithTag(v30, 0);
    *(_QWORD *)(a1 + 3296) = 0LL;
  }
  v31 = *(void **)(a1 + 3288);
  if ( v31 )
  {
    ExFreePoolWithTag(v31, 0);
    *(_QWORD *)(a1 + 3288) = 0LL;
  }
LABEL_20:
  if ( v3 )
    ObfDereferenceObject(v3);
  return (unsigned int)v16;
}
