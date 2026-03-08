/*
 * XREFs of UsbhExecuteWmiMethod @ 0x1C0048F30
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C000DEB0 (FdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     _guard_dispatch_icall_nop @ 0x1C0023500 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS __fastcall UsbhExecuteWmiMethod(
        PDEVICE_OBJECT DeviceObject,
        PIRP Irp,
        unsigned int a3,
        __int64 a4,
        int a5,
        unsigned int a6,
        unsigned int a7,
        int *a8)
{
  int *v8; // rsi
  NTSTATUS v12; // ebx
  __int64 v13; // r12
  int v14; // r10d
  int v15; // r10d
  int v16; // ecx
  bool v17; // zf
  int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  ULONG BufferUsed; // [rsp+60h] [rbp+18h] BYREF

  v8 = a8;
  BufferUsed = 0;
  v12 = -1073741163;
  Log((__int64)DeviceObject, 64, 1466788173, (__int64)Irp, (__int64)a8);
  v13 = a7;
  Log((__int64)DeviceObject, v14, 1466788145, a7, a6);
  Log((__int64)DeviceObject, v15, 1466788146, a3, 0LL);
  if ( FdoExt((__int64)DeviceObject)[340] != 5 )
  {
    v12 = -1073741810;
    goto LABEL_16;
  }
  if ( a3 )
    goto LABEL_16;
  BufferUsed = 4;
  if ( a7 < 4 )
  {
    Log((__int64)DeviceObject, 64, 2003659041, (__int64)Irp, v13);
    v12 = -1073741789;
    goto LABEL_16;
  }
  v16 = *v8;
  if ( *v8 > 6 )
  {
    v18 = v16 - 7;
    v17 = v18 == 0;
  }
  else
  {
    if ( v16 == 6 || !v16 )
      goto LABEL_15;
    v18 = v16 - 1;
    v17 = v18 == 0;
  }
  if ( v17 || (v19 = v18 - 1) == 0 || (v20 = v19 - 1) == 0 || (unsigned int)(v20 - 1) <= 1 )
  {
LABEL_15:
    Log((__int64)DeviceObject, 64, 2003651889, (__int64)v8, v13);
    Log((__int64)DeviceObject, 64, 2003651890, (__int64)v8, *v8);
    v12 = off_1C005F018[2 * *v8]((int)DeviceObject, a6, a7, (int)&BufferUsed, (__int64)v8);
  }
LABEL_16:
  Log((__int64)DeviceObject, 64, 1464682819, (__int64)Irp, v12);
  return WmiCompleteRequest(DeviceObject, Irp, v12, BufferUsed, 0);
}
