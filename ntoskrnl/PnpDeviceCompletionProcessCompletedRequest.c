/*
 * XREFs of PnpDeviceCompletionProcessCompletedRequest @ 0x140685424
 * Callers:
 *     PipEnumerateDevice @ 0x140688710 (PipEnumerateDevice.c)
 *     PnpDeviceCompletionProcessCompletedRequests @ 0x1406CD318 (PnpDeviceCompletionProcessCompletedRequests.c)
 *     PnpStartDeviceNode @ 0x1406F71A4 (PnpStartDeviceNode.c)
 * Callees:
 *     PoFxIdleDevice @ 0x14020259C (PoFxIdleDevice.c)
 *     PnpDeviceCompletionRequestDestroy @ 0x140202754 (PnpDeviceCompletionRequestDestroy.c)
 *     PipSetDevNodeState @ 0x1402028D0 (PipSetDevNodeState.c)
 *     PipUpdatePostStartCharacteristics @ 0x1402FC360 (PipUpdatePostStartCharacteristics.c)
 *     KeBugCheckEx @ 0x140416000 (KeBugCheckEx.c)
 *     _PnpSetObjectProperty @ 0x140686C8C (_PnpSetObjectProperty.c)
 *     PiSwProcessParentStartIrp @ 0x140791F24 (PiSwProcessParentStartIrp.c)
 */

__int64 __fastcall PnpDeviceCompletionProcessCompletedRequest(__int64 a1)
{
  ULONG_PTR v2; // rbx
  int v3; // eax

  v2 = *(_QWORD *)(a1 + 16);
  *(_QWORD *)(v2 + 528) = *(_QWORD *)(a1 + 48);
  *(_DWORD *)(v2 + 392) = *(_DWORD *)(a1 + 40);
  PipSetDevNodeState(v2, *(_DWORD *)(a1 + 32));
  if ( *(int *)(a1 + 40) >= 0 )
  {
    v3 = *(_DWORD *)(a1 + 32);
    if ( v3 == 776 || v3 == 781 )
    {
      PipUpdatePostStartCharacteristics(*(_QWORD *)(v2 + 32));
      PnpSetObjectProperty(
        PiPnpRtlCtx,
        *(_QWORD *)(v2 + 48),
        1,
        0LL,
        (__int64)&DEVPKEY_Device_DriverProblemDesc,
        0,
        0LL,
        0,
        0);
      PiSwProcessParentStartIrp(*(PDEVICE_OBJECT *)(v2 + 32));
    }
  }
  if ( *(_DWORD *)(a1 + 32) == 783 )
  {
    if ( (*(_DWORD *)(v2 + 704) & 0x80u) == 0 )
      KeBugCheckEx(0xCAu, 0xDuLL, v2, 0x80uLL, 0LL);
    PoFxIdleDevice(*(_QWORD *)(v2 + 32));
    *(_DWORD *)(v2 + 704) &= ~0x80u;
  }
  PnpDeviceCompletionRequestDestroy(a1);
  return *(unsigned int *)(v2 + 392);
}
