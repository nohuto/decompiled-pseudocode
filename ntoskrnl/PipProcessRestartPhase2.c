/*
 * XREFs of PipProcessRestartPhase2 @ 0x14096C498
 * Callers:
 *     PipProcessDevNodeTree @ 0x1406CCD80 (PipProcessDevNodeTree.c)
 * Callees:
 *     PoFxIdleDevice @ 0x14020259C (PoFxIdleDevice.c)
 *     PipSetDevNodeState @ 0x1402028D0 (PipSetDevNodeState.c)
 *     IoRequestDeviceEject @ 0x14055D9B0 (IoRequestDeviceEject.c)
 *     McTemplateK0dz_EtwWriteTransfer @ 0x1405620F8 (McTemplateK0dz_EtwWriteTransfer.c)
 *     PnpStartedDeviceNodeDependencyCheck @ 0x140681C08 (PnpStartedDeviceNodeDependencyCheck.c)
 *     PnpRequestDeviceRemoval @ 0x140862294 (PnpRequestDeviceRemoval.c)
 *     PnpUpdateRebootRequiredReason @ 0x140955E50 (PnpUpdateRebootRequiredReason.c)
 */

__int64 __fastcall PipProcessRestartPhase2(__int64 a1, __int64 a2, __int64 a3)
{
  const wchar_t **v3; // rdi
  int v5; // esi
  int v6; // ebp
  __int64 v7; // r8

  v3 = (const wchar_t **)(a1 + 48);
  if ( (byte_140C0E10B & 0x10) != 0 )
    McTemplateK0dz_EtwWriteTransfer(a1, (const EVENT_DESCRIPTOR *)KMPnPEvt_ProcessDeviceRestart_Start, a3, 2, *v3);
  v5 = *(_DWORD *)(a1 + 392);
  if ( v5 >= 0 )
  {
    PipSetDevNodeState(a1, 778);
    if ( (*(_DWORD *)(a1 + 704) & 0x20) != 0 )
    {
      PoFxIdleDevice(*(_QWORD *)(a1 + 32));
      *(_DWORD *)(a1 + 704) &= ~0x20u;
    }
    PnpStartedDeviceNodeDependencyCheck(a1);
  }
  else
  {
    if ( v5 == -1073741102 )
    {
      v6 = 14;
      PnpUpdateRebootRequiredReason((__int64)*v3, a2, 0x80000000LL);
    }
    else
    {
      v6 = 10;
    }
    PnpRequestDeviceRemoval(a1, 0, v6, v5);
    if ( *(_DWORD *)(a1 + 568) )
      IoRequestDeviceEject(*(PDEVICE_OBJECT *)(a1 + 32));
  }
  if ( (byte_140C0E10B & 0x10) != 0 )
    McTemplateK0dz_EtwWriteTransfer(
      (__int64)*v3,
      (const EVENT_DESCRIPTOR *)KMPnPEvt_ProcessDeviceRestart_Stop,
      v7,
      2,
      *v3);
  return (unsigned int)v5;
}
