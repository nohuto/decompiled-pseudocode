/*
 * XREFs of UsbhFdoReturnDeviceHandle @ 0x1C002A9F0
 * Callers:
 *     UsbhPdoInternalDeviceControl @ 0x1C0015370 (UsbhPdoInternalDeviceControl.c)
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     UsbhRefPdoDeviceHandle @ 0x1C0019C20 (UsbhRefPdoDeviceHandle.c)
 *     UsbhDecPdoIoCount @ 0x1C001BC4C (UsbhDecPdoIoCount.c)
 */

__int64 __fastcall UsbhFdoReturnDeviceHandle(__int64 a1, ULONG_PTR a2, IRP *a3, char a4)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r14
  unsigned int v9; // ebx
  __int64 *SecurityContext; // r15
  __int64 v11; // rax

  CurrentStackLocation = a3->Tail.Overlay.CurrentStackLocation;
  v9 = -1073741811;
  PdoExt(a2);
  SecurityContext = (__int64 *)CurrentStackLocation->Parameters.Create.SecurityContext;
  if ( SecurityContext )
  {
    if ( a4 )
    {
      v11 = UsbhRefPdoDeviceHandle(
              a1,
              a2,
              (__int64)CurrentStackLocation->Parameters.QueryDirectory.FileName,
              0x48447472u);
      *SecurityContext = v11;
      v9 = v11 == 0 ? 0xC000000D : 0;
    }
    else
    {
      v9 = 0;
    }
  }
  a3->IoStatus.Status = v9;
  IofCompleteRequest(a3, 0);
  UsbhDecPdoIoCount(a2, (ULONG_PTR)a3);
  return v9;
}
