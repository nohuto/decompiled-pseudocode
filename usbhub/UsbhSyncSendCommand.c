__int64 __fastcall UsbhSyncSendCommand(__int64 a1, __int64 a2, __int64 a3, _WORD *a4, int a5, _DWORD *a6)
{
  _WORD *v6; // rdi
  __int64 v10; // r13
  PIRP v11; // rax
  IRP *v12; // rdx
  NTSTATUS Status; // edx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int64 v15; // r9
  __int64 v16; // r8
  __int64 v17; // rcx
  int *Pool2; // r14
  __int64 v20; // rdx
  __int64 v21; // rcx
  PIRP v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  int v25; // eax
  int v26; // eax
  NTSTATUS v27; // eax
  int v28; // ebx
  __int64 v29; // r8
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rax
  __int64 v33; // rdx
  int OutputBuffer; // [rsp+28h] [rbp-A9h]
  IRP *v35; // [rsp+88h] [rbp-49h]
  struct _IO_STATUS_BLOCK v36; // [rsp+90h] [rbp-41h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A0h] [rbp-31h] BYREF
  struct _KEVENT Event; // [rsp+B0h] [rbp-21h] BYREF
  struct _KEVENT Object; // [rsp+C8h] [rbp-9h] BYREF
  unsigned int v40; // [rsp+128h] [rbp+57h] BYREF
  char *v41; // [rsp+130h] [rbp+5Fh]
  _WORD *v42; // [rsp+140h] [rbp+6Fh]

  v42 = a4;
  v41 = (char *)a2;
  v40 = 0;
  v6 = a4;
  memset(&Object, 0, sizeof(Object));
  v36 = 0LL;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v10 = *(_QWORD *)(a1 + 64);
  if ( !v10 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v10 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  memset(&Event, 0, sizeof(Event));
  IoStatusBlock = 0LL;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v11 = IoBuildDeviceIoControlRequest(
          0x220013u,
          *(PDEVICE_OBJECT *)(v10 + 1208),
          0LL,
          0,
          0LL,
          0,
          1u,
          &Event,
          &IoStatusBlock);
  v12 = v11;
  if ( v11 )
  {
    CurrentStackLocation = v11->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)&v40;
    CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = 0LL;
    Status = IofCallDriver(*(PDEVICE_OBJECT *)(v10 + 1208), v12);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
  }
  else
  {
    Status = -1073741670;
  }
  v15 = v40;
  if ( (UsbhLogMask & 8) != 0 )
  {
    v16 = *(_QWORD *)(a1 + 64);
    if ( v16 )
    {
      a5 = 1400074357;
      v17 = *(_QWORD *)(v16 + 888)
          + 32LL
          * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v16 + 880)) & *(_DWORD *)(v16 + 884));
      *(_DWORD *)v17 = a5;
      *(_QWORD *)(v17 + 24) = Status;
      *(_QWORD *)(v17 + 8) = 0LL;
      *(_QWORD *)(v17 + 16) = v15;
    }
  }
  if ( (Status & 0xC0000000) == 0xC0000000 )
  {
    if ( a6 )
      *a6 = -1073713152;
    return (unsigned int)Status;
  }
  else
  {
    Pool2 = (int *)ExAllocatePool2(64LL, 136LL, 1112885333LL);
    if ( (UsbhLogMask & 8) != 0 )
    {
      v20 = *(_QWORD *)(a1 + 64);
      if ( v20 )
      {
        a5 = 811823987;
        v21 = *(_QWORD *)(v20 + 888)
            + 32LL
            * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v20 + 880)) & *(_DWORD *)(v20 + 884));
        *(_DWORD *)v21 = a5;
        *(_QWORD *)(v21 + 8) = 0LL;
        *(_QWORD *)(v21 + 16) = Pool2;
        *(_QWORD *)(v21 + 24) = 0LL;
      }
    }
    if ( Pool2 )
    {
      KeInitializeEvent(&Object, NotificationEvent, 0);
      v22 = IoBuildDeviceIoControlRequest(0x220003u, *(PDEVICE_OBJECT *)(v10 + 1208), 0LL, 0, 0LL, 0, 1u, &Object, &v36);
      v35 = v22;
      if ( (UsbhLogMask & 8) != 0 )
      {
        v23 = *(_QWORD *)(a1 + 64);
        if ( v23 )
        {
          a5 = 828601203;
          v24 = *(_QWORD *)(v23 + 888)
              + 32LL
              * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v23 + 880)) & *(_DWORD *)(v23 + 884));
          *(_DWORD *)v24 = a5;
          *(_QWORD *)(v24 + 24) = &v36;
          *(_QWORD *)(v24 + 8) = 0LL;
          *(_QWORD *)(v24 + 16) = v22;
        }
      }
      if ( v22 )
      {
        Pool2[8] = 10;
        v25 = Pool2[8];
        *((_QWORD *)Pool2 + 1) = 0LL;
        *Pool2 = 3276936;
        if ( *(char *)a2 < 0 )
          v25 = 11;
        Pool2[8] = v25;
        v26 = (unsigned __int16)*v6;
        *((_QWORD *)Pool2 + 5) = a3;
        *((_QWORD *)Pool2 + 6) = 0LL;
        Pool2[9] = v26;
        Pool2[14] = 2000;
        *((_QWORD *)Pool2 + 16) = *(_QWORD *)a2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          WPP_RECORDER_SF_qDDDDDDDDD(
            WPP_GLOBAL_Control->DeviceExtension,
            (unsigned __int8)v41[1],
            (unsigned __int8)*v41,
            (unsigned __int8)*(_WORD *)(a2 + 4),
            OutputBuffer,
            (char)v41,
            *v41,
            v41[1],
            *(_WORD *)(a2 + 2),
            HIBYTE(*(_WORD *)(a2 + 2)),
            *(_WORD *)(a2 + 2),
            *(_WORD *)(a2 + 4),
            HIBYTE(*(_WORD *)(a2 + 4)),
            *(_WORD *)(a2 + 4),
            *(_WORD *)(a2 + 6));
          v22 = v35;
          v6 = v42;
        }
        v22->Tail.Overlay.CurrentStackLocation[-1].Parameters.WMI.ProviderId = (unsigned __int64)Pool2;
        v27 = IofCallDriver(*(PDEVICE_OBJECT *)(v10 + 1208), v22);
        v28 = v27;
        if ( v27 == 259 )
        {
          KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
          v28 = v36.Status;
        }
        else
        {
          v36.Status = v27;
        }
        v29 = Pool2[1];
        if ( (UsbhLogMask & 8) != 0 )
        {
          v30 = *(_QWORD *)(a1 + 64);
          if ( v30 )
          {
            a5 = 845378419;
            v31 = *(_QWORD *)(v30 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v30 + 880)) & *(_DWORD *)(v30 + 884));
            *(_DWORD *)v31 = a5;
            *(_QWORD *)(v31 + 16) = v28;
            *(_QWORD *)(v31 + 8) = 0LL;
            *(_QWORD *)(v31 + 24) = v29;
          }
        }
        if ( a6 )
          *a6 = Pool2[1];
        *v6 = *((_WORD *)Pool2 + 18);
        ExFreePoolWithTag(Pool2, 0);
        if ( (UsbhLogMask & 8) != 0 )
        {
          v32 = *(_QWORD *)(a1 + 64);
          if ( v32 )
          {
            a5 = 1046705011;
            v33 = *(_QWORD *)(v32 + 888)
                + 32LL
                * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v32 + 880)) & *(_DWORD *)(v32 + 884));
            *(_DWORD *)v33 = a5;
            *(_QWORD *)(v33 + 16) = v28;
            *(_QWORD *)(v33 + 8) = 0LL;
            *(_QWORD *)(v33 + 24) = 0LL;
          }
        }
        return (unsigned int)v28;
      }
      else
      {
        ExFreePoolWithTag(Pool2, 0);
        return 3221225626LL;
      }
    }
    else
    {
      if ( a6 )
        *a6 = -1073737728;
      return 3221225626LL;
    }
  }
}
