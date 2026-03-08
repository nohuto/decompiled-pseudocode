/*
 * XREFs of UsbhPublishBillboardDetails @ 0x1C005717C
 * Callers:
 *     UsbhPdoPnp_DeviceEnumerated @ 0x1C0054DA0 (UsbhPdoPnp_DeviceEnumerated.c)
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhFdoCreateDeviceInterfaceForBillBoard @ 0x1C002A4AC (UsbhFdoCreateDeviceInterfaceForBillBoard.c)
 */

void __fastcall UsbhPublishBillboardDetails(PDEVICE_OBJECT Pdo)
{
  _DWORD *v2; // rbx
  __int64 v3; // rsi
  unsigned int Size; // r14d
  _BYTE *Pool2; // rax
  _WORD *Data; // rdi
  __int64 i; // r10
  NTSTATUS v8; // eax
  int updated; // eax
  unsigned __int16 v10; // dx
  __int64 v11; // rcx
  struct _RTL_BITMAP BitMapHeader; // [rsp+40h] [rbp-28h] BYREF

  *(_QWORD *)&BitMapHeader.SizeOfBitMap = 0LL;
  LODWORD(BitMapHeader.Buffer) = 0;
  v2 = PdoExt((__int64)Pdo);
  v3 = *((_QWORD *)v2 + 301);
  Size = 8 * *(unsigned __int8 *)(v3 + 4) + 4;
  Pool2 = (_BYTE *)ExAllocatePool2(256LL, Size, 1112885333LL);
  Data = Pool2;
  if ( Pool2 )
  {
    *Pool2 = *(_BYTE *)(v3 + 4);
    Pool2[1] = *(_BYTE *)(v3 + 5);
    RtlInitializeBitMap(&BitMapHeader, (PULONG)(v3 + 8), 0x20u);
    for ( i = 0LL; (unsigned int)i < *(unsigned __int8 *)(v3 + 4); i = (unsigned int)(i + 1) )
    {
      Data[4 * i + 2] = *(_WORD *)(v3 + 4 * i + 44);
      LOBYTE(Data[4 * i + 3]) = *(_BYTE *)(v3 + 4 * i + 46);
      *(_DWORD *)&Data[4 * i + 4] = _bittest64((const signed __int64 *)BitMapHeader.Buffer, (unsigned int)(2 * i)) | (2 * _bittest64((const signed __int64 *)BitMapHeader.Buffer, (unsigned int)(2 * i + 1)));
    }
    v8 = IoSetDevicePropertyData(Pdo, &DEVPKEY_Device_UsbBillboardInfo, 0, 0, 0x1003u, Size, Data);
    if ( v8 >= 0 )
    {
      updated = ZwUpdateWnfStateData(&WNF_USB_BILLBOARD_CHANGE, 0LL, 0LL);
      if ( updated < 0 )
        Log(*((_QWORD *)v2 + 148), 256, 1885626931, updated, (__int64)Pdo);
      v10 = *((_WORD *)v2 + 714);
      v11 = *((_QWORD *)v2 + 148);
      *((_BYTE *)v2 + 2432) = 0;
      UsbhFdoCreateDeviceInterfaceForBillBoard(
        v11,
        v10,
        (struct _UNICODE_STRING *)v2 + 151,
        (_BYTE *)v2 + 2432,
        Size,
        (__int64)Data);
    }
    else
    {
      Log(*((_QWORD *)v2 + 148), 256, 1885626930, v8, (__int64)Pdo);
    }
    ExFreePoolWithTag(Data, 0);
  }
  else
  {
    Log(*((_QWORD *)v2 + 148), 256, 1885496369, Size, (__int64)Pdo);
  }
}
