__int64 __fastcall DpiAcpiEvalAcpiMethodEx(
        __int64 a1,
        const void **a2,
        _DWORD *a3,
        __int64 a4,
        _DWORD *OutputBuffer,
        ULONG OutputBufferLength,
        char a7)
{
  __int64 v7; // r13
  __int64 v8; // rsi
  unsigned int v11; // eax
  unsigned int v12; // ebp
  ULONG v13; // r12d
  unsigned int v14; // r14d
  _DWORD *Pool2; // rax
  _DWORD *v16; // rdi
  size_t v17; // rsi
  unsigned int v18; // ecx
  int v19; // eax
  struct _DEVICE_OBJECT *v20; // rsi
  IRP *v21; // rax
  NTSTATUS Status; // ebx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rcx
  NTSTATUS v28; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-58h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-48h] BYREF

  v7 = *(_QWORD *)(a1 + 64);
  v8 = 0LL;
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  if ( a2 && *(_WORD *)a2 > 0xFAu )
  {
    Status = -1073741811;
    v24 = -1073741811LL;
    v25 = 2LL;
LABEL_22:
    WdLogSingleEntry1(v25, v24);
    return (unsigned int)Status;
  }
  v11 = a3[2];
  v12 = 4;
  if ( v11 < 4 )
    v11 = 4;
  v13 = v11 + 268;
  v14 = v11 + 268;
  Pool2 = (_DWORD *)ExAllocatePool2(256LL, v11 + 268, 1953656900LL);
  v16 = Pool2;
  if ( !Pool2 )
  {
    v24 = -1073741801LL;
    Status = -1073741801;
    v25 = 6LL;
    goto LABEL_22;
  }
  memset(Pool2, 0, v14);
  *v16 = 1181312321;
  if ( a2 )
  {
    v17 = *(unsigned __int16 *)a2;
    memmove(v16 + 1, a2[1], v17);
    *((_BYTE *)v16 + v17 + 4) = 46;
    v8 = (unsigned int)(v17 + 1);
  }
  v18 = a3[2];
  *(_DWORD *)((char *)v16 + v8 + 4) = a3[1];
  *((_BYTE *)v16 + (unsigned int)(v8 + 4) + 4) = 0;
  if ( a7 )
    v12 = v18;
  v19 = a3[3];
  v16[65] = v18;
  v16[66] = v19;
  memmove(v16 + 67, a3 + 4, v12);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v20 = *(struct _DEVICE_OBJECT **)(v7 + 160);
  ObfReferenceObject(v20);
  v21 = IoBuildDeviceIoControlRequest(
          0x32C018u,
          v20,
          v16,
          v13,
          OutputBuffer,
          OutputBufferLength,
          0,
          &Event,
          &IoStatusBlock);
  if ( v21 )
  {
    Status = IofCallDriver(v20, v21);
    if ( Status == 259 )
    {
      v28 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      Status = v28;
      if ( v28 )
      {
        v26 = v28;
LABEL_29:
        v27 = 2LL;
        goto LABEL_30;
      }
      Status = IoStatusBlock.Status;
    }
    if ( Status >= 0 )
    {
      if ( !OutputBufferLength || *OutputBuffer == 1114596673 && OutputBuffer[2] )
        goto LABEL_16;
      v26 = -1072431089LL;
      Status = -1072431089;
      goto LABEL_29;
    }
    v26 = Status;
    v27 = 3LL;
  }
  else
  {
    v26 = -1073741670LL;
    Status = -1073741670;
    v27 = 6LL;
  }
LABEL_30:
  WdLogSingleEntry1(v27, v26);
LABEL_16:
  if ( v20 )
    ObfDereferenceObject(v20);
  ExFreePoolWithTag(v16, 0);
  return (unsigned int)Status;
}
