/*
 * XREFs of DpiAcpiPrepareAcpiChildNameList @ 0x1C0208E34
 * Callers:
 *     DpiAcpiGetAcpiChildName @ 0x1C0208DD8 (DpiAcpiGetAcpiChildName.c)
 *     DpiAcpiExposeInfo @ 0x1C02094A4 (DpiAcpiExposeInfo.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0024330 (__security_check_cookie.c)
 *     memset @ 0x1C0027640 (memset.c)
 *     DpiAcpiEvalAcpiMethodEx @ 0x1C02091CC (DpiAcpiEvalAcpiMethodEx.c)
 */

__int64 __fastcall DpiAcpiPrepareAcpiChildNameList(__int64 a1)
{
  __int64 result; // rax
  struct _DEVICE_OBJECT *v3; // r14
  IRP *v4; // rax
  NTSTATUS Status; // eax
  ULONG OutputBufferLength; // ebx
  __int64 v7; // rsi
  void *Pool2; // rax
  IRP *v9; // rax
  __int64 v10; // rbx
  _DWORD *v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned int v14; // r15d
  __int64 v15; // rsi
  __int64 v16; // rcx
  int v17; // r9d
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  NTSTATUS v21; // eax
  NTSTATUS v22; // eax
  void *v23; // rcx
  void *v24; // rcx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-69h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp-59h] BYREF
  int v27[4]; // [rsp+80h] [rbp-41h] BYREF
  __int64 v28; // [rsp+90h] [rbp-31h]
  struct _STRING DestinationString; // [rsp+98h] [rbp-29h] BYREF
  _DWORD InputBuffer[2]; // [rsp+A8h] [rbp-19h] BYREF
  __int64 v31; // [rsp+B0h] [rbp-11h]
  size_t Size[2]; // [rsp+B8h] [rbp-9h] BYREF
  int v33; // [rsp+C8h] [rbp+7h]
  __int128 v34; // [rsp+D0h] [rbp+Fh] BYREF
  __int64 v35; // [rsp+E0h] [rbp+1Fh]

  result = 0LL;
  v33 = 0;
  v31 = 0LL;
  *(_OWORD *)Size = 0LL;
  v28 = 0LL;
  memset(&Event, 0, sizeof(Event));
  v35 = 0LL;
  IoStatusBlock = 0LL;
  DestinationString = 0LL;
  *(_OWORD *)v27 = 0LL;
  v34 = 0LL;
  if ( *(_QWORD *)(a1 + 3312) && *(_QWORD *)(a1 + 3304) )
    return result;
  if ( *(_DWORD *)(a1 + 3296) )
    return 3221225473LL;
  v3 = *(struct _DEVICE_OBJECT **)(a1 + 160);
  ObfReferenceObject(v3);
  InputBuffer[0] = 1214866753;
  InputBuffer[1] = 1;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v4 = IoBuildDeviceIoControlRequest(0x32C020u, v3, InputBuffer, 0x10u, Size, 0x14u, 0, &Event, &IoStatusBlock);
  if ( !v4 )
    goto LABEL_28;
  Status = IofCallDriver(v3, v4);
  if ( Status == 259 )
  {
    v21 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v10 = v21;
    if ( v21 )
      goto LABEL_33;
    Status = IoStatusBlock.Status;
  }
  if ( Status != -2147483643 )
  {
    WdLogSingleEntry1(2LL, Status);
LABEL_35:
    LODWORD(v10) = -1072431089;
    goto LABEL_41;
  }
  if ( LODWORD(Size[0]) != 1198089537 || (OutputBufferLength = HIDWORD(Size[0]), HIDWORD(Size[0]) < 0x14) )
  {
LABEL_39:
    LODWORD(v10) = -1072431089;
    v20 = 2LL;
    v19 = -1072431089LL;
    goto LABEL_40;
  }
  v7 = HIDWORD(Size[0]);
  Pool2 = (void *)ExAllocatePool2(256LL, HIDWORD(Size[0]), 1953656900LL);
  *(_QWORD *)(a1 + 3304) = Pool2;
  if ( !Pool2 )
    goto LABEL_29;
  memset(Pool2, 0, OutputBufferLength);
  KeClearEvent(&Event);
  v9 = IoBuildDeviceIoControlRequest(
         0x32C020u,
         v3,
         InputBuffer,
         0x10u,
         *(PVOID *)(a1 + 3304),
         OutputBufferLength,
         0,
         &Event,
         &IoStatusBlock);
  if ( !v9 )
  {
LABEL_28:
    v19 = -1073741670LL;
LABEL_30:
    LODWORD(v10) = v19;
    v20 = 6LL;
LABEL_40:
    WdLogSingleEntry1(v20, v19);
    goto LABEL_41;
  }
  LODWORD(v10) = IofCallDriver(v3, v9);
  if ( (_DWORD)v10 == 259 )
  {
    v22 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    v10 = v22;
    if ( !v22 )
    {
      LODWORD(v10) = IoStatusBlock.Status;
      goto LABEL_12;
    }
LABEL_33:
    WdLogSingleEntry1(2LL, v10);
    goto LABEL_19;
  }
LABEL_12:
  v11 = *(_DWORD **)(a1 + 3304);
  if ( *v11 != 1198089537 || !v11[1] || IoStatusBlock.Information != v7 )
    goto LABEL_35;
  *(_DWORD *)(a1 + 3296) = 0;
  v12 = ExAllocatePool2(256LL, 16LL * (unsigned int)v11[1], 1953656900LL);
  *(_QWORD *)(a1 + 3312) = v12;
  if ( !v12 )
  {
LABEL_29:
    v19 = -1073741801LL;
    goto LABEL_30;
  }
  v13 = *(_QWORD *)(a1 + 3304);
  v14 = 1;
  v15 = v13 + 8;
  if ( *(_DWORD *)(v13 + 4) > 1u )
  {
    do
    {
      v15 += *(unsigned int *)(v15 + 4) + 8LL;
      if ( (*(_BYTE *)v15 & 1) != 0 )
      {
        RtlInitAnsiString(&DestinationString, (PCSZ)(v15 + 8));
        v16 = *(_QWORD *)(a1 + 24);
        qmemcpy(v27, "AeiC_ADR", 8);
        v18 = DpiAcpiEvalAcpiMethodEx(v16, (int)&DestinationString, (int)v27, v17, &v34, 0x18u, 1);
        LODWORD(v10) = v18;
        if ( v18 < 0 )
        {
          WdLogSingleEntry1(3LL, v18);
          LODWORD(v10) = 0;
        }
        else
        {
          if ( (_DWORD)v34 != 1114596673 || !DWORD2(v34) )
            goto LABEL_39;
          *(_DWORD *)(*(_QWORD *)(a1 + 3312) + 16LL * *(unsigned int *)(a1 + 3296)) = v35;
          *(_QWORD *)(*(_QWORD *)(a1 + 3312) + 16LL * (unsigned int)(*(_DWORD *)(a1 + 3296))++ + 8) = v15 + 8;
        }
      }
      ++v14;
    }
    while ( v14 < *(_DWORD *)(*(_QWORD *)(a1 + 3304) + 4LL) );
  }
LABEL_19:
  if ( (int)v10 < 0 )
  {
LABEL_41:
    *(_DWORD *)(a1 + 3296) = -1;
    v23 = *(void **)(a1 + 3312);
    if ( v23 )
    {
      ExFreePoolWithTag(v23, 0);
      *(_QWORD *)(a1 + 3312) = 0LL;
    }
    v24 = *(void **)(a1 + 3304);
    if ( v24 )
    {
      ExFreePoolWithTag(v24, 0);
      *(_QWORD *)(a1 + 3304) = 0LL;
    }
  }
  if ( v3 )
    ObfDereferenceObject(v3);
  return (unsigned int)v10;
}
