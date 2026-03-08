/*
 * XREFs of UsbhSyncSendInternalIoctl @ 0x1C0004A70
 * Callers:
 *     UsbhCheckHubPowerStatus @ 0x1C00047D4 (UsbhCheckHubPowerStatus.c)
 *     UsbhFdoCheckUpstreamConnectionState @ 0x1C0004A1C (UsbhFdoCheckUpstreamConnectionState.c)
 *     UsbhSshResumeUpstream @ 0x1C0004F34 (UsbhSshResumeUpstream.c)
 *     UsbhSshSuspendHub @ 0x1C000DEF0 (UsbhSshSuspendHub.c)
 *     UsbhConfigureUsbHub @ 0x1C0029DB0 (UsbhConfigureUsbHub.c)
 *     UsbhGetHubCount @ 0x1C002C420 (UsbhGetHubCount.c)
 *     UsbhGetTopOfBusStack @ 0x1C002CD18 (UsbhGetTopOfBusStack.c)
 *     UsbhInitialize @ 0x1C002CE20 (UsbhInitialize.c)
 *     UsbhLogStartFailure @ 0x1C002D464 (UsbhLogStartFailure.c)
 *     UsbhResetIrqPipe @ 0x1C00393AC (UsbhResetIrqPipe.c)
 *     UsbhResetHubUpstreamPort @ 0x1C003D440 (UsbhResetHubUpstreamPort.c)
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C002E078 (UsbhTrapFatal_Dbg.c)
 */

NTSTATUS __fastcall UsbhSyncSendInternalIoctl(__int64 a1, ULONG a2, unsigned __int64 a3, _UNICODE_STRING *a4)
{
  __int64 v7; // rbx
  PIRP v8; // rax
  IRP *v9; // rdx
  _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS result; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Object; // [rsp+60h] [rbp-28h] BYREF

  memset(&Object, 0, sizeof(Object));
  IoStatusBlock = 0LL;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v7 = *(_QWORD *)(a1 + 64);
  if ( !v7 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v7 != 541218120 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  KeInitializeEvent(&Object, NotificationEvent, 0);
  v8 = IoBuildDeviceIoControlRequest(a2, *(PDEVICE_OBJECT *)(v7 + 1208), 0LL, 0, 0LL, 0, 1u, &Object, &IoStatusBlock);
  v9 = v8;
  if ( !v8 )
    return -1073741670;
  CurrentStackLocation = v8->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].Parameters.WMI.ProviderId = a3;
  CurrentStackLocation[-1].Parameters.QueryDirectory.FileName = a4;
  result = IofCallDriver(*(PDEVICE_OBJECT *)(v7 + 1208), v9);
  if ( result == 259 )
  {
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
    return IoStatusBlock.Status;
  }
  return result;
}
