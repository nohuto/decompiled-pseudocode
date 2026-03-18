/*
 * XREFs of UsbhPublishBillboardDetails @ 0x1C0057F80
 * Callers:
 *     UsbhPdoPnp_DeviceEnumerated @ 0x1C0055B40 (UsbhPdoPnp_DeviceEnumerated.c)
 * Callees:
 *     Log @ 0x1C000FD80 (Log.c)
 *     PdoExt @ 0x1C0011220 (PdoExt.c)
 *     memset @ 0x1C001E180 (memset.c)
 *     UsbhFdoCreateDeviceInterfaceForBillBoard @ 0x1C002AE2C (UsbhFdoCreateDeviceInterfaceForBillBoard.c)
 */

void __fastcall UsbhPublishBillboardDetails(PDEVICE_OBJECT Pdo)
{
  _DWORD *v2; // rbx
  __int64 v3; // rbp
  unsigned int Size; // r15d
  _BYTE *PoolWithTag; // rax
  _BYTE *Data; // rdi
  __int64 i; // r10
  NTSTATUS v8; // eax
  int updated; // eax
  unsigned __int16 v10; // dx
  __int64 v11; // rcx
  struct _RTL_BITMAP BitMapHeader; // [rsp+40h] [rbp-28h] BYREF

  BitMapHeader = 0LL;
  v2 = PdoExt((__int64)Pdo);
  v3 = *((_QWORD *)v2 + 301);
  Size = 8 * *(unsigned __int8 *)(v3 + 4) + 4;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, Size, 0x42554855u);
  Data = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, Size);
    *Data = *(_BYTE *)(v3 + 4);
    Data[1] = *(_BYTE *)(v3 + 5);
    RtlInitializeBitMap(&BitMapHeader, (PULONG)(v3 + 8), 0x20u);
    for ( i = 0LL; (unsigned int)i < *(unsigned __int8 *)(v3 + 4); i = (unsigned int)(i + 1) )
    {
      *(_WORD *)&Data[8 * i + 4] = *(_WORD *)(v3 + 4 * i + 44);
      Data[8 * i + 6] = *(_BYTE *)(v3 + 4 * i + 46);
      *(_DWORD *)&Data[8 * i + 8] = _bittest64((const signed __int64 *)BitMapHeader.Buffer, (unsigned int)(2 * i)) | (2 * _bittest64((const signed __int64 *)BitMapHeader.Buffer, (unsigned int)(2 * i + 1)));
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
