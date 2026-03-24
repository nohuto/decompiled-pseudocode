/*
 * XREFs of DpiFdoDetectVgaDeviceInCapabilities @ 0x1C019DD98
 * Callers:
 *     DpiGetVgaStatus @ 0x1C019DD50 (DpiGetVgaStatus.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00248A0 (__security_check_cookie.c)
 *     memset @ 0x1C0028FC0 (memset.c)
 */

__int64 __fastcall DpiFdoDetectVgaDeviceInCapabilities(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rdx
  __int64 v3; // rcx
  PIRP v4; // rbx
  __int64 v5; // r8
  __int64 v6; // r9
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS Status; // eax
  __int64 v10; // rax
  NTSTATUS v11; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rbx
  __int64 v15; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-39h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-29h] BYREF
  _DWORD v18[16]; // [rsp+70h] [rbp-9h] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  IoStatusBlock = 0LL;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  v4 = IoBuildSynchronousFsdRequest(0x1Bu, *(PDEVICE_OBJECT *)(v1 + 152), 0LL, 0, 0LL, &Event, &IoStatusBlock);
  if ( v4 )
  {
    memset(v18, 0, sizeof(v18));
    v4->IoStatus.Information = 0LL;
    v4->IoStatus.Status = -1073741637;
    v18[3] = -1;
    v18[2] = -1;
    CurrentStackLocation = v4->Tail.Overlay.CurrentStackLocation;
    v18[0] = 65600;
    CurrentStackLocation[-1].MinorFunction = 9;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = (ULONG_PTR)v18;
    Status = IofCallDriver(*(PDEVICE_OBJECT *)(v1 + 152), v4);
    if ( Status == 259 )
    {
      v11 = KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v14 = v11;
      if ( v11 )
      {
        v15 = WdLogNewEntry5_WdError(v13, v12);
        *(_QWORD *)(v15 + 24) = v14;
        WdLogEvent5_WdError(v15);
      }
      Status = IoStatusBlock.Status;
    }
    if ( Status >= 0 && (v18[1] & 0x400000) != 0 )
      return 0LL;
  }
  else
  {
    v10 = WdLogNewEntry5_WdLowResource(v3, v2, v5, v6);
    *(_QWORD *)(v10 + 24) = -1073741670LL;
    WdLogEvent5_WdLowResource(v10);
  }
  return 3221225473LL;
}
