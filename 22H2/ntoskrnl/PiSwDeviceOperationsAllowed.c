/*
 * XREFs of PiSwDeviceOperationsAllowed @ 0x14079D088
 * Callers:
 *     PiSwIrpPropertySet @ 0x14079CC08 (PiSwIrpPropertySet.c)
 *     PiSwIrpInterfaceRegister @ 0x14081D314 (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpInterfacePropertySet @ 0x14081D6A4 (PiSwIrpInterfacePropertySet.c)
 *     PiSwIrpInterfaceSetState @ 0x14081DC18 (PiSwIrpInterfaceSetState.c)
 *     PiSwIrpSetLifetime @ 0x14085C5E4 (PiSwIrpSetLifetime.c)
 *     PiSwIrpGetLifetime @ 0x1409675E0 (PiSwIrpGetLifetime.c)
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
