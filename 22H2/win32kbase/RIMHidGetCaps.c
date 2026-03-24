/*
 * XREFs of RIMHidGetCaps @ 0x1C0058E7C
 * Callers:
 *     RIMCreateHidDesc @ 0x1C00582E8 (RIMCreateHidDesc.c)
 * Callees:
 *     Win32FreePool @ 0x1C002C230 (Win32FreePool.c)
 *     WPP_RECORDER_SF_ @ 0x1C003E058 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C00487D0 (WPP_RECORDER_SF_q.c)
 *     Win32AllocPoolNonPaged @ 0x1C005C490 (Win32AllocPoolNonPaged.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1C00CE808 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     _guard_dispatch_icall_nop @ 0x1C00CF870 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall RIMHidGetCaps(__int64 a1, struct _DEVICE_OBJECT *a2, __int64 a3, __int64 a4)
{
  _DWORD *v8; // rax
  int v9; // edx
  __int64 v10; // rsi
  PIRP v11; // rax
  int v12; // edx
  IRP *v13; // rbp
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  struct _IO_STACK_LOCATION *v15; // rbx
  int v16; // edx
  NTSTATUS Status; // ebx
  __int64 (__fastcall *v18)(__int64, __int64); // rax
  NTSTATUS v19; // eax
  GUID *v21; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+48h] [rbp-50h] BYREF
  struct _KEVENT Event; // [rsp+58h] [rbp-40h] BYREF

  IoStatusBlock = 0LL;
  v8 = (_DWORD *)Win32AllocPoolNonPaged(40LL, 1886417746LL);
  v10 = (__int64)v8;
  if ( v8 )
  {
    *v8 = 65576;
    if ( !*(_QWORD *)(a1 + 416) )
    {
      v21 = (GUID *)Win32AllocPoolNonPaged(16LL, 1886417746LL);
      *(_QWORD *)(a1 + 416) = v21;
      if ( !v21 )
        goto LABEL_18;
      *v21 = GUID_HID_INTERFACE_HIDPARSE;
    }
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v11 = IoBuildSynchronousFsdRequest(0x1Bu, a2, 0LL, 0, 0LL, &Event, &IoStatusBlock);
    v13 = v11;
    if ( v11 )
    {
      v11->RequestorMode = 0;
      CurrentStackLocation = v11->Tail.Overlay.CurrentStackLocation;
      v11->IoStatus.Status = -1073741637;
      v15 = CurrentStackLocation - 1;
      if ( !v15 )
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 744LL);
      v15->MinorFunction = 8;
      v15->Parameters.WMI.ProviderId = *(_QWORD *)(a1 + 416);
      v15->Parameters.CreatePipe.Parameters = 0LL;
      v15->Parameters.Create.Options = 65576;
      v15->Parameters.Read.ByteOffset.QuadPart = v10;
      Status = IofCallDriver(a2, v13);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      if ( Status < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v16) = 3;
          WPP_RECORDER_SF_q(
            (_DWORD)gRimLog,
            v16,
            1,
            37,
            (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids,
            (char)a2);
        }
      }
      else
      {
        v18 = *(__int64 (__fastcall **)(__int64, __int64))(v10 + 32);
        if ( v18 )
        {
          v19 = v18(a3, a4);
        }
        else
        {
          MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 769LL);
          v19 = (*(__int64 (__fastcall **)(__int64, __int64))(v10 + 32))(a3, a4);
        }
        Status = v19;
      }
      goto LABEL_12;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v12) = 3;
      WPP_RECORDER_SF_((_DWORD)gRimLog, v12, 1, 36, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids);
    }
LABEL_18:
    Status = -1073741670;
LABEL_12:
    Win32FreePool(v10);
    return (unsigned int)Status;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v9) = 3;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v9, 1, 35, (__int64)&WPP_6b998a37b7133a4d231c601f1b883849_Traceguids);
  }
  return 3221225626LL;
}
