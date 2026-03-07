__int64 __fastcall UsbhPdoPnp_SurpriseRemoveDevice(PDEVICE_OBJECT Pdo, PIRP Irp)
{
  _DWORD *v4; // rbx
  int v5; // r10d
  __int64 v6; // rax
  __int64 v8; // [rsp+40h] [rbp-38h] BYREF
  char v9; // [rsp+48h] [rbp-30h]
  int v10; // [rsp+49h] [rbp-2Fh]

  v4 = PdoExt((__int64)Pdo);
  Log(*((_QWORD *)v4 + 148), 256, 1936879716, (__int64)Irp, *((_QWORD *)v4 + 145));
  Log(*((_QWORD *)v4 + 148), v5, 1936879665, (__int64)Pdo, (__int64)v4);
  UsbhSetPdo_FailIo((__int64)Pdo);
  if ( (v4[355] & 0x400000) != 0 )
    KeSetEvent((PRKEVENT)(v4 + 730), 0, 0);
  if ( (v4[358] & 0x40000) != 0 )
  {
    v6 = *((_QWORD *)v4 + 382);
    v10 = 0;
    v8 = v6;
    v9 = 0;
    ZwUpdateWnfStateData(&WNF_USB_TYPE_C_PARTNER_STATE, &v8, 13LL);
    v4[358] &= ~0x40000u;
  }
  if ( *((_QWORD *)v4 + 301) )
    UsbhBillboardCleanup(Pdo);
  UsbhPdoRemoveCleanup(Pdo);
  Usbh_PdoSurpriseRemove_PdoEvent(*((_QWORD *)v4 + 148), Pdo, (KSPIN_LOCK)(v4 + 236));
  SET_PDO_SWPNPSTATE((__int64)Pdo, 102, 3);
  Irp->IoStatus.Status = 0;
  IofCompleteRequest(Irp, 0);
  return 0LL;
}
