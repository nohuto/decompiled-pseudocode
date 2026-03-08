/*
 * XREFs of UsbhPdoSystemControl @ 0x1C0056E70
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x1C000A1D0 (PdoExt.c)
 *     Log @ 0x1C000F210 (Log.c)
 *     UsbhDecPdoIoCount @ 0x1C001BC4C (UsbhDecPdoIoCount.c)
 *     UsbhIncPdoIoCount @ 0x1C0020E30 (UsbhIncPdoIoCount.c)
 */

__int64 __fastcall UsbhPdoSystemControl(struct _DEVICE_OBJECT *BugCheckParameter3, IRP *BugCheckParameter4)
{
  unsigned int Status; // ebx
  _DWORD *v6; // rbx
  NTSTATUS v7; // esi
  enum _SYSCTL_IRP_DISPOSITION IrpDisposition; // [rsp+48h] [rbp+10h] BYREF

  IrpDisposition = IrpProcessed;
  Status = BugCheckParameter4->IoStatus.Status;
  if ( (UsbhIncPdoIoCount((__int64)BugCheckParameter3, (__int64)BugCheckParameter4, 1398362953, 0) & 0xC0000000) == 0xC0000000 )
  {
    BugCheckParameter4->IoStatus.Status = Status;
    IofCompleteRequest(BugCheckParameter4, 0);
    return Status;
  }
  else
  {
    v6 = PdoExt((__int64)BugCheckParameter3);
    Log(*((_QWORD *)v6 + 148), 256, 1347898697, (__int64)BugCheckParameter4, 0LL);
    v7 = WmiSystemControl((PWMILIB_CONTEXT)(v6 + 334), BugCheckParameter3, BugCheckParameter4, &IrpDisposition);
    Log(*((_QWORD *)v6 + 148), 256, 1884769609, (__int64)BugCheckParameter4, v7);
    if ( IrpDisposition )
    {
      if ( IrpDisposition == IrpNotWmi )
        v7 = BugCheckParameter4->IoStatus.Status;
      BugCheckParameter4->IoStatus.Status = v7;
      IofCompleteRequest(BugCheckParameter4, 0);
    }
    UsbhDecPdoIoCount((ULONG_PTR)BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
    return (unsigned int)v7;
  }
}
