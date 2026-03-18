/*
 * XREFs of UsbhPdoPnp_QueryResourceRequirements @ 0x1C0055970
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C0009F20 (Log.c)
 *     PdoExt @ 0x1C000B490 (PdoExt.c)
 *     UsbhInstallMsOs20RegistryProperties @ 0x1C0032D88 (UsbhInstallMsOs20RegistryProperties.c)
 *     UsbhInstallMsOsExtendedProperties @ 0x1C0032E68 (UsbhInstallMsOsExtendedProperties.c)
 */

__int64 __fastcall UsbhPdoPnp_QueryResourceRequirements(PDEVICE_OBJECT Pdo, PIRP Irp)
{
  _DWORD *v4; // rbx
  int v5; // eax
  _DWORD *v6; // rax
  _DWORD *v7; // rax
  NTSTATUS v8; // eax
  unsigned int Status; // ebx

  v4 = PdoExt((__int64)Pdo);
  v4[355] |= 0x400u;
  v5 = v4[355];
  if ( (v5 & 0x800) == 0 && (v4[706] & 0x40) != 0 )
  {
    v6 = PdoExt((__int64)Pdo);
    UsbhInstallMsOs20RegistryProperties((__int64)(v6 + 236), Pdo);
  }
  else if ( (v5 & 0x820) == 0 && (v4[358] & 0x400) != 0 )
  {
    v7 = PdoExt((__int64)Pdo);
    UsbhInstallMsOsExtendedProperties((__int64)(v7 + 236), Pdo);
  }
  if ( (v4[706] & 0x100) != 0 && (v4[355] & 0x800) == 0 )
  {
    v8 = IoSetDevicePropertyData(Pdo, &DEVPKEY_Device_ModelId, 0, 0, 0xDu, 0x10u, (PVOID)(*((_QWORD *)v4 + 358) + 4LL));
    if ( v8 < 0 )
      Log(*((_QWORD *)v4 + 148), 256, 1364349489, v8, 0LL);
  }
  Status = Irp->IoStatus.Status;
  IofCompleteRequest(Irp, 0);
  return Status;
}
