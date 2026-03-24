/*
 * XREFs of PiSwDeviceOperationsAllowed @ 0x14076E908
 * Callers:
 *     PiSwIrpInterfaceRegister @ 0x14076E344 (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpSetLifetime @ 0x14076E848 (PiSwIrpSetLifetime.c)
 *     PiSwIrpPropertySet @ 0x14078A4A4 (PiSwIrpPropertySet.c)
 *     PiSwIrpInterfacePropertySet @ 0x1407BDA04 (PiSwIrpInterfacePropertySet.c)
 *     PiSwIrpInterfaceSetState @ 0x1407CECDC (PiSwIrpInterfaceSetState.c)
 *     PiSwIrpGetLifetime @ 0x1408AEAC0 (PiSwIrpGetLifetime.c)
 * Callees:
 *     <none>
 */

char __fastcall PiSwDeviceOperationsAllowed(__int64 a1)
{
  char v1; // dl

  v1 = 1;
  if ( !a1 || !*(_QWORD *)(a1 + 80) || (*(_DWORD *)(a1 + 4) & 4) == 0 || *(_QWORD *)(a1 + 88) )
    return 0;
  return v1;
}
