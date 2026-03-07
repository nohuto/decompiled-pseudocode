__int64 __fastcall UsbhPdoPower_Sequence(ULONG_PTR BugCheckParameter3, IRP *BugCheckParameter4)
{
  unsigned int v4; // edi

  v4 = UsbhIncPdoIoCount(BugCheckParameter3, (__int64)BugCheckParameter4, 1934643031, 0);
  if ( (v4 & 0xC0000000) == 0xC0000000 )
  {
    BugCheckParameter4->IoStatus.Status = v4;
    IofCompleteRequest(BugCheckParameter4, 0);
    return v4;
  }
  else
  {
    BugCheckParameter4->IoStatus.Status = 0;
    IofCompleteRequest(BugCheckParameter4, 0);
    UsbhDecPdoIoCount(BugCheckParameter3, (ULONG_PTR)BugCheckParameter4);
    return 0LL;
  }
}
