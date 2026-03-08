/*
 * XREFs of PiSwDeviceOperationsAllowed @ 0x140785C78
 * Callers:
 *     PiSwIrpPropertySet @ 0x1407857F8 (PiSwIrpPropertySet.c)
 *     PiSwIrpInterfaceRegister @ 0x1408086D4 (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpInterfacePropertySet @ 0x140808A64 (PiSwIrpInterfacePropertySet.c)
 *     PiSwIrpInterfaceSetState @ 0x140808FD8 (PiSwIrpInterfaceSetState.c)
 *     PiSwIrpSetLifetime @ 0x140858894 (PiSwIrpSetLifetime.c)
 *     PiSwIrpGetLifetime @ 0x1409645C0 (PiSwIrpGetLifetime.c)
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
