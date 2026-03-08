/*
 * XREFs of UsbhPdoSuccess @ 0x1C0056DF0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhDecPdoIoCount @ 0x1C001BC4C (UsbhDecPdoIoCount.c)
 *     UsbhIncPdoIoCount @ 0x1C0020E30 (UsbhIncPdoIoCount.c)
 */

__int64 __fastcall UsbhPdoSuccess(ULONG_PTR BugCheckParameter3, IRP *BugCheckParameter4)
{
  unsigned int v4; // eax
  unsigned int v5; // edi

  v4 = UsbhIncPdoIoCount(BugCheckParameter3, (__int64)BugCheckParameter4, 1346654035, 0);
  BugCheckParameter4->IoStatus.Status = v4;
  v5 = v4;
  if ( v4 >> 30 == 3 )
  {
    IofCompleteRequest(BugCheckParameter4, 0);
  }
  else
  {
    IofCompleteRequest(BugCheckParameter4, 0);
    UsbhDecPdoIoCount(BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
  }
  return v5;
}
