/*
 * XREFs of UsbhSetWmiDataBlock @ 0x1C0049F40
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhSetHubSelectiveSuspend @ 0x1C0046D00 (UsbhSetHubSelectiveSuspend.c)
 *     UsbhSetPdoRegistryParameter @ 0x1C0046D44 (UsbhSetPdoRegistryParameter.c)
 *     UsbhSshEnableDisable @ 0x1C005939C (UsbhSshEnableDisable.c)
 */

NTSTATUS __fastcall UsbhSetWmiDataBlock(
        PDEVICE_OBJECT DeviceObject,
        PIRP Irp,
        int a3,
        int a4,
        unsigned int a5,
        char *a6)
{
  __int64 v10; // r10
  int v11; // r11d
  int v12; // ebx
  NTSTATUS v13; // r8d
  _BYTE *v14; // r9
  __int64 v15; // r10
  unsigned int v16; // edx
  PDEVICE_OBJECT *v17; // rax
  char v18; // bl
  BOOL Data; // [rsp+50h] [rbp+18h] BYREF

  FdoExt((__int64)DeviceObject);
  Log((__int64)DeviceObject, 64, 1935101257, 0LL, 0LL);
  if ( !a3 )
    goto LABEL_16;
  v12 = a3 - 2;
  if ( !v12 )
  {
    if ( !a5 )
      goto LABEL_7;
    if ( !a4 && *(_DWORD *)(v10 + 3280) != 6 )
    {
      v18 = *a6;
      UsbhSshEnableDisable(DeviceObject, 5 - (unsigned int)(*a6 != 0));
      UsbhSetHubSelectiveSuspend((__int64)DeviceObject, v18 != 0);
      goto LABEL_11;
    }
LABEL_16:
    v13 = -1073741808;
    return WmiCompleteRequest(DeviceObject, Irp, v13, 0, 0);
  }
  if ( v12 == 1 )
  {
    if ( *(&WPP_MAIN_CB.AlignmentRequirement + 1) == 3 )
    {
      Log((__int64)DeviceObject, v11, 2003659059, (__int64)a6, a5);
      if ( !a5 )
      {
LABEL_7:
        v13 = -1073741789;
        return WmiCompleteRequest(DeviceObject, Irp, v13, 0, 0);
      }
      v16 = *(_DWORD *)(v15 + 2560) | 0x1000000;
      if ( !*v14 )
        v16 = *(_DWORD *)(v15 + 2560) & 0xFEFFFFFF;
      *(_DWORD *)(v15 + 2560) = v16;
      Data = *v14 != 0;
      v17 = (PDEVICE_OBJECT *)FdoExt((__int64)DeviceObject);
      UsbhSetPdoRegistryParameter(v17[149], L"WakeSystemOnConnect", 4u, &Data, 4u);
LABEL_11:
      v13 = 0;
      return WmiCompleteRequest(DeviceObject, Irp, v13, 0, 0);
    }
    goto LABEL_16;
  }
  v13 = -1073741163;
  return WmiCompleteRequest(DeviceObject, Irp, v13, 0, 0);
}
