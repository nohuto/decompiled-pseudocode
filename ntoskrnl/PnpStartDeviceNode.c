/*
 * XREFs of PnpStartDeviceNode @ 0x1406F71A4
 * Callers:
 *     PipProcessStartPhase1 @ 0x1406F7074 (PipProcessStartPhase1.c)
 *     PnpReallocateResources @ 0x14096A5D8 (PnpReallocateResources.c)
 *     PipProcessRestartPhase1 @ 0x14096C3CC (PipProcessRestartPhase1.c)
 * Callees:
 *     PpMarkDeviceStackExtensionFlag @ 0x140201F50 (PpMarkDeviceStackExtensionFlag.c)
 *     PipSetDevNodeState @ 0x1402028D0 (PipSetDevNodeState.c)
 *     PnpDiagnosticTraceObject @ 0x140202BAC (PnpDiagnosticTraceObject.c)
 *     PnpDeviceCompletionQueueAddDispatchedRequest @ 0x140202C70 (PnpDeviceCompletionQueueAddDispatchedRequest.c)
 *     PnpDeviceCompletionQueueRemoveCompletedRequest @ 0x140202F10 (PnpDeviceCompletionQueueRemoveCompletedRequest.c)
 *     PnpStartDevice @ 0x140292160 (PnpStartDevice.c)
 *     PnpTraceStartDevice @ 0x1402B1628 (PnpTraceStartDevice.c)
 *     PipUpdatePostStartCharacteristics @ 0x1402FC360 (PipUpdatePostStartCharacteristics.c)
 *     KeInitializeEvent @ 0x14030F330 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x14033FF20 (KeWaitForSingleObject.c)
 *     PnpDeviceCompletionProcessCompletedRequest @ 0x140685424 (PnpDeviceCompletionProcessCompletedRequest.c)
 *     _PnpSetObjectProperty @ 0x140686C8C (_PnpSetObjectProperty.c)
 *     PnpDeviceCompletionRequestCreate @ 0x140688CA4 (PnpDeviceCompletionRequestCreate.c)
 *     IopGetSessionIdFromPDO @ 0x1406F72F8 (IopGetSessionIdFromPDO.c)
 *     PiSwProcessParentStartIrp @ 0x140791F24 (PiSwProcessParentStartIrp.c)
 */

__int64 __fastcall PnpStartDeviceNode(__int64 a1, int a2, int a3)
{
  int v5; // ebp
  _QWORD *v6; // rsi
  __int64 v7; // rcx
  __int64 v8; // rcx
  int started; // edi
  __int64 v11; // r8
  __int64 v12; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+58h] [rbp-30h] BYREF
  int v14; // [rsp+70h] [rbp-18h]
  int v15; // [rsp+74h] [rbp-14h]

  v15 = 0;
  memset(&Event, 0, sizeof(Event));
  v5 = a2 != 0 ? 5 : 0;
  if ( !a2 && (unsigned int)IopGetSessionIdFromPDO(*(_QWORD *)(a1 + 32)) != -1 )
    PpMarkDeviceStackExtensionFlag(*(_QWORD *)(a1 + 32), 1024, 1);
  if ( a3
    || (PnpAsyncOptions & 1) == 0
    || (*(_DWORD *)(a1 + 396) & 0x400000) != 0
    || (*(_DWORD *)(*(_QWORD *)(a1 + 32) + 48LL) & 0x4000) != 0
    || (_DWORD)InitSafeBootMode
    || (v6 = (_QWORD *)PnpDeviceCompletionRequestCreate(a1, v5 + 776, 0LL)) == 0LL )
  {
    PnpDiagnosticTraceObject(&KMPnPEvt_DeviceStart_Start, (unsigned __int16 *)(a1 + 40));
    v12 = 0LL;
    v14 = -1073741823;
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    started = PnpStartDevice(*(_QWORD *)(a1 + 32), (__int64)PnpDiagnosticCompletionRoutine, (__int64)&v12);
    if ( started == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      started = v14;
    }
    if ( started >= 0 )
    {
      PipUpdatePostStartCharacteristics(*(_QWORD *)(a1 + 32));
      PnpSetObjectProperty(
        *(__int64 *)&PiPnpRtlCtx,
        *(_QWORD *)(a1 + 48),
        1u,
        0LL,
        0LL,
        (__int64)&DEVPKEY_Device_DriverProblemDesc,
        0,
        0LL,
        0,
        0);
      PiSwProcessParentStartIrp(*(PDEVICE_OBJECT *)(a1 + 32));
    }
    v11 = v12;
    *(_DWORD *)(a1 + 392) = started;
    PnpTraceStartDevice(a1, (unsigned int)started, v11);
    PipSetDevNodeState(a1, v5 + 776);
  }
  else
  {
    PnpDiagnosticTraceObject(&KMPnPEvt_DeviceStart_Start, (unsigned __int16 *)(a1 + 40));
    PipSetDevNodeState(a1, 775);
    *(_DWORD *)(a1 + 392) = 259;
    PnpDeviceCompletionQueueAddDispatchedRequest(v7, v6);
    started = PnpStartDevice(*(_QWORD *)(a1 + 32), (__int64)PnpDeviceCompletionRoutine, (__int64)v6);
    if ( started == 259 )
    {
      PnpDiagnosticTraceObject(&KMPnPEvt_DeviceStart_Pend, (unsigned __int16 *)(a1 + 40));
    }
    else
    {
      PnpDeviceCompletionQueueRemoveCompletedRequest(v8, v6);
      return (unsigned int)PnpDeviceCompletionProcessCompletedRequest((__int64)v6);
    }
  }
  return (unsigned int)started;
}
