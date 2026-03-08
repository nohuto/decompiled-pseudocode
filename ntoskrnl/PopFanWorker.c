/*
 * XREFs of PopFanWorker @ 0x140846840
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x140236C40 (PopReleaseRwLock.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140243F90 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KeSetEvent @ 0x14025C2C0 (KeSetEvent.c)
 *     PopAcquireRwLockExclusive @ 0x1402BC5B0 (PopAcquireRwLockExclusive.c)
 *     IofCallDriver @ 0x140312640 (IofCallDriver.c)
 *     __security_check_cookie @ 0x1403D2160 (__security_check_cookie.c)
 *     PopPrepareIoctl @ 0x140846A50 (PopPrepareIoctl.c)
 *     PopFanUpdateSpeed @ 0x140846AC0 (PopFanUpdateSpeed.c)
 *     PopFanSetupRpmBuckets @ 0x140994364 (PopFanSetupRpmBuckets.c)
 *     PopFanUpdateRunningState @ 0x1409946B8 (PopFanUpdateRunningState.c)
 */

void __fastcall PopFanWorker(__int64 a1)
{
  IRP *v1; // r14
  ULONG_PTR v2; // rdi
  struct _DEVICE_OBJECT *v3; // rax
  unsigned __int8 v5; // si
  char v6; // r12
  char v7; // r13
  __int64 v8; // rcx
  int v9; // r8d
  int Status; // eax
  int v11; // r14d
  int v12; // ecx
  int v13; // ecx
  char v14; // al
  int v15; // edx
  int v16; // eax
  int v17; // ecx
  IRP *v18; // rdx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  struct _DEVICE_OBJECT *v20; // rcx
  __int64 *v21; // rax
  char *v22; // rdx
  __int64 v23; // [rsp+38h] [rbp-99h] BYREF
  __int64 v24; // [rsp+40h] [rbp-91h] BYREF
  __int64 v25; // [rsp+48h] [rbp-89h] BYREF
  ULONG_PTR v26; // [rsp+50h] [rbp-81h]
  PIRP Irp; // [rsp+58h] [rbp-79h]
  PDEVICE_OBJECT DeviceObject; // [rsp+60h] [rbp-71h]
  struct _EVENT_DATA_DESCRIPTOR v29[2]; // [rsp+68h] [rbp-69h] BYREF
  __int64 *v30; // [rsp+88h] [rbp-49h]
  __int64 v31; // [rsp+90h] [rbp-41h]
  __int64 *v32; // [rsp+98h] [rbp-39h]
  __int64 v33; // [rsp+A0h] [rbp-31h]
  struct _EVENT_DATA_DESCRIPTOR v34[2]; // [rsp+A8h] [rbp-29h] BYREF
  __int64 *v35; // [rsp+C8h] [rbp-9h]
  __int64 v36; // [rsp+D0h] [rbp-1h]
  __int64 *v37; // [rsp+D8h] [rbp+7h]
  __int64 v38; // [rsp+E0h] [rbp+Fh]
  __int64 *v39; // [rsp+E8h] [rbp+17h]
  __int64 v40; // [rsp+F0h] [rbp+1Fh]

  v1 = *(IRP **)(a1 + 56);
  v2 = a1 + 400;
  v3 = *(struct _DEVICE_OBJECT **)(a1 + 48);
  Irp = v1;
  DeviceObject = v3;
  v5 = 0;
  v6 = 0;
  v26 = a1 + 400;
  v7 = 0;
  PopAcquireRwLockExclusive(a1 + 400);
  if ( *(_BYTE *)(a1 + 440) )
  {
    *(_BYTE *)(a1 + 64) = 4;
    if ( *(_BYTE *)(a1 + 80) )
    {
      v7 = 1;
      *(_BYTE *)(a1 + 80) = 0;
    }
    goto LABEL_38;
  }
  Status = v1->IoStatus.Status;
  v11 = 8;
  if ( Status >= 0 )
  {
    if ( (unsigned int)dword_140C03928 > 5 )
    {
      v23 = a1;
      v30 = &v23;
      LODWORD(v25) = *(unsigned __int8 *)(a1 + 64);
      v31 = 8LL;
      v32 = &v25;
      v33 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C03928, (unsigned __int8 *)byte_14003141B, 0LL, 0LL, 4u, v29);
    }
    v8 = *(unsigned __int8 *)(a1 + 64);
    if ( *(_BYTE *)(a1 + 64) )
    {
      v12 = v8 - 1;
      if ( !v12 )
      {
        PopFanSetupRpmBuckets(a1);
LABEL_34:
        v5 = 2;
        goto LABEL_18;
      }
      v13 = v12 - 1;
      if ( !v13 )
      {
        if ( (unsigned int)dword_140C03928 > 5 )
        {
          v24 = a1;
          v35 = &v24;
          LODWORD(v23) = *(unsigned __int8 *)(a1 + 72);
          v36 = 8LL;
          v37 = &v23;
          LODWORD(v25) = *(_DWORD *)(a1 + 76);
          v39 = &v25;
          v38 = 4LL;
          v40 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140C03928,
            (unsigned __int8 *)byte_140031459,
            0LL,
            0LL,
            5u,
            v34);
        }
        v14 = *(_BYTE *)(a1 + 72);
        if ( *(_BYTE *)(a1 + 80) )
        {
          if ( v14 )
            goto LABEL_17;
        }
        else if ( !v14 )
        {
LABEL_17:
          PopFanUpdateSpeed(a1, *(unsigned int *)(a1 + 76));
          v5 = (*(_BYTE *)(a1 + 88) != 0) + 2;
          goto LABEL_18;
        }
        v7 = 1;
        *(_BYTE *)(a1 + 80) = v14;
        v6 = v14;
        goto LABEL_17;
      }
      v8 = (unsigned int)(v13 - 1);
      if ( !(_DWORD)v8 )
      {
        if ( (unsigned int)dword_140C03928 > 5 )
        {
          v24 = a1;
          v35 = &v24;
          LODWORD(v25) = *(_DWORD *)(a1 + 92);
          v36 = 8LL;
          v37 = &v25;
          LODWORD(v23) = *(_DWORD *)(a1 + 96);
          v39 = &v23;
          v38 = 4LL;
          v40 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140C03928,
            (unsigned __int8 *)&byte_1400313A7,
            0LL,
            0LL,
            5u,
            v34);
        }
        *(_DWORD *)(a1 + 100) = *(_DWORD *)(a1 + 92);
        *(_DWORD *)(a1 + 104) = *(_DWORD *)(a1 + 96);
        goto LABEL_34;
      }
      if ( (_DWORD)v8 == 1 )
      {
        if ( (unsigned int)dword_140C03928 <= 2 )
          goto LABEL_18;
        v23 = a1;
        v21 = &v23;
        v22 = (char *)qword_140031608;
      }
      else
      {
        if ( (unsigned int)dword_140C03928 <= 2 )
          goto LABEL_18;
        v23 = a1;
        v21 = &v23;
        v22 = &byte_14003162F;
      }
    }
    else
    {
      if ( (unsigned int)dword_140C03928 <= 2 )
        goto LABEL_18;
      v24 = a1;
      v21 = &v24;
      v22 = byte_1400313F1;
    }
    v30 = v21;
    v31 = 8LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C03928, (unsigned __int8 *)v22, 0LL, 0LL, 3u, v29);
    goto LABEL_18;
  }
  if ( Status == -1073741667 || Status == -1073741536 )
  {
    if ( *(_BYTE *)(a1 + 64) == 1 && *(_BYTE *)(a1 + 88) )
    {
      *(_BYTE *)(a1 + 88) = 0;
      _InterlockedDecrement(&dword_140C3C5C8);
    }
    v5 = *(_BYTE *)(a1 + 64);
    goto LABEL_18;
  }
  if ( (unsigned int)dword_140C03928 > 5 )
  {
    v24 = a1;
    v35 = &v24;
    LODWORD(v23) = *(unsigned __int8 *)(a1 + 64);
    v36 = 8LL;
    v37 = &v23;
    v38 = 4LL;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C03928, (unsigned __int8 *)word_14003159A, 0LL, 0LL, 4u, v34);
  }
  v8 = (unsigned int)*(unsigned __int8 *)(a1 + 64) - 1;
  if ( *(_BYTE *)(a1 + 64) == 1 )
    goto LABEL_32;
  v8 = (unsigned int)*(unsigned __int8 *)(a1 + 64) - 2;
  if ( *(_BYTE *)(a1 + 64) != 2 )
  {
    if ( *(_BYTE *)(a1 + 64) == 3 )
    {
      if ( (unsigned int)dword_140C03928 > 2 )
      {
        v25 = a1;
        v30 = &v25;
        v31 = 8LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140C03928,
          (unsigned __int8 *)byte_1400315D5,
          0LL,
          0LL,
          3u,
          v29);
      }
LABEL_32:
      if ( *(_BYTE *)(a1 + 88) )
      {
        *(_BYTE *)(a1 + 88) = 0;
        _InterlockedDecrement(&dword_140C3C5C8);
      }
      goto LABEL_34;
    }
LABEL_18:
    if ( (unsigned int)dword_140C03928 > 5 )
    {
      v24 = a1;
      v35 = &v24;
      v36 = 8LL;
      v37 = &v23;
      LODWORD(v23) = v5;
      v38 = 4LL;
      tlgWriteTransfer_EtwWriteTransfer(
        (__int64)&dword_140C03928,
        (unsigned __int8 *)&dword_140031524,
        0LL,
        0LL,
        4u,
        v34);
    }
    switch ( v5 )
    {
      case 1u:
        v11 = 0;
        v15 = 2703940;
        v16 = 20;
        v17 = 108;
        break;
      case 2u:
        v11 = 12;
        v15 = 2703936;
        v16 = 12;
        v17 = 68;
        break;
      case 3u:
        v16 = 0;
        v15 = 2720328;
        v17 = 92;
        break;
      default:
        if ( (unsigned int)dword_140C03928 > 2 )
        {
          v30 = &v24;
          LODWORD(v23) = *(unsigned __int8 *)(a1 + 64);
          v24 = a1;
          v32 = &v23;
          v31 = 8LL;
          v33 = 4LL;
          tlgWriteTransfer_EtwWriteTransfer(
            (__int64)&dword_140C03928,
            (unsigned __int8 *)word_14003155A,
            0LL,
            0LL,
            4u,
            v29);
        }
        goto LABEL_24;
    }
    LOBYTE(v9) = 1;
    PopPrepareIoctl(*(_QWORD *)(a1 + 56), v15, v9, v17 + a1, v11, v16);
    v18 = Irp;
    CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].CompletionRoutine = (PIO_COMPLETION_ROUTINE)PopFanIrpComplete;
    v20 = DeviceObject;
    CurrentStackLocation[-1].Context = (PVOID)a1;
    CurrentStackLocation[-1].Control = -32;
    *(_BYTE *)(a1 + 64) = v5;
    IofCallDriver(v20, v18);
LABEL_24:
    v2 = v26;
    goto LABEL_25;
  }
  if ( *(_BYTE *)(a1 + 80) )
  {
    v7 = 1;
    *(_BYTE *)(a1 + 80) = 0;
  }
LABEL_38:
  KeSetEvent((PRKEVENT)(a1 + 416), 0, 0);
LABEL_25:
  if ( v7 )
  {
    LOBYTE(v8) = v6;
    PopFanUpdateRunningState(v8);
  }
  PopReleaseRwLock(v2);
}
